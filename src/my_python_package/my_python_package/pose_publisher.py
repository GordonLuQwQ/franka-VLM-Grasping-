import rclpy 
from rclpy.node import Node 
from geometry_msgs.msg import PoseStamped, Point, Quaternion 
import os 
import json  
from scipy.spatial.transform import Rotation as R 
import numpy as np   
from std_msgs.msg import Float64 

file_path = "/home/gordon/grasp/src/my_python_package/my_python_package/output.json"  
if os.path.exists(file_path):     
    with open(file_path, 'r') as file:         
        data = json.load(file)   

xyz = np.array(data['XYZ']) 
rotation_matrix = np.array(data['Rotation']) 
depth = np.array(data['Depth'])  

print(xyz, rotation_matrix, depth)  

class EndEffectorPublisher(Node):
    def __init__(self):
        super().__init__('EndEffectorPublisher')
        self.publisher = self.create_publisher(PoseStamped, '/franka/end_effector_pose', 10)
        self.depth_publisher = self.create_publisher(Float64, '/franka/end_effector_depth', 10)
        # Load trajectory data
        self.file_path = "/home/gordon/grasp/src/my_python_package/my_python_package/output.json"
        self.trajectory = self.load_trajectory()
        
        # Create a timer to publish poses periodically
        self.timer_period = 1  # 1 Hz, adjust as needed
        self.timer = self.create_timer(self.timer_period, self.publish_trajectory)
        
        # Trajectory playback variables
        self.current_index = 0
        self.repeat = True  # Set to False if you want to stop after one cycle
    
    def load_trajectory(self):
        """
        Load trajectory data from JSON file.
        Assumes the file contains lists of XYZ positions and rotation matrices.
        """
        if os.path.exists(self.file_path):
            with open(self.file_path, 'r') as file:
                data = json.load(file)
            
            # Assuming multiple waypoints are stored
            if isinstance(data['XYZ'][0], list):
                return {
                    'xyz': np.array(data['XYZ']),
                    'rotation': np.array(data['Rotation']),
                    'depth': np.array(data['Depth'])
                }
            else:
                # If only a single point, wrap it in a list
                return {
                    'xyz': np.array([data['XYZ']]),
                    'rotation': np.array([data['Rotation']]),
                    'depth': np.array([data['Depth']])
                }
        else:
            self.get_logger().error(f"Trajectory file not found: {self.file_path}")
            return None
    
    def rotation_matrix_to_quaternion(self, rotation_matrix):
        """Convert rotation matrix to quaternion"""
        try:
            # 确保矩阵是3x3的
            rotation_matrix = np.array(rotation_matrix)
            if rotation_matrix.shape != (3, 3):
                self.get_logger().error(f"Invalid rotation matrix shape: {rotation_matrix.shape}")
                # 返回单位四元数作为备选
                return [0.0, 0.0, 0.0, 1.0]
            
            # 尝试使用新版SciPy方法
            rotation = R.from_matrix(rotation_matrix)
            # ROS使用[x, y, z, w]顺序
            return rotation.as_quat()  # 默认返回[x, y, z, w]
        except Exception as e:
            self.get_logger().error(f"Error converting rotation matrix to quaternion: {e}")
            # 返回单位四元数作为备选
            return [0.0, 0.0, 0.0, 1.0]
    
    def publish_trajectory(self):
        if self.trajectory is None:
            self.get_logger().error("No trajectory loaded")
            return
        
        # Check if we've reached the end of the trajectory
        if self.current_index >= len(self.trajectory['xyz']):
            if self.repeat:
                # Reset to the beginning if repeating
                self.current_index = 0
            else:
                # Stop the timer if not repeating
                self.timer.cancel()
                return
        
        # Get current waypoint
        current_xyz = self.trajectory['xyz'][self.current_index]
        current_rotation = self.trajectory['rotation'][self.current_index]
        current_depth = self.trajectory['depth'][self.current_index]
        
        # Create and publish pose message
        msg = PoseStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'base_link'
        
        msg.pose.position = Point(
            x=float(current_xyz[0]),
            y=float(current_xyz[1]),
            z=float(current_xyz[2])
        )
        
        # Convert rotation to quaternion
        qx, qy, qz, qw = self.rotation_matrix_to_quaternion(current_rotation)
        msg.pose.orientation = Quaternion(
            x=float(qx),
            y=float(qy),
            z=float(qz),
            w=float(qw)
        )

        depth_msg = Float64()
        depth_msg.data = float(current_depth)

        # Publish the pose
        self.publisher.publish(msg)
        self.depth_publisher.publish(depth_msg)

        self.get_logger().info(f'Publishing pose {self.current_index} Publishing pose at {msg.pose.position}, rotation: {msg.pose.orientation}, depth:{depth_msg}')
        
        # Move to next waypoint
        self.current_index += 1

def main(args=None):
    rclpy.init(args=args)
    node = EndEffectorPublisher()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Stopping trajectory publisher')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()