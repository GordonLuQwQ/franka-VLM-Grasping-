

# import rclpy
# from rclpy.node import Node
# import numpy as np
# from sensor_msgs.msg import JointState
# import roboticstoolbox as rtb
# from spatialmath import SE3
# import swift
# from rclpy.qos import QoSProfile, ReliabilityPolicy
# import time

# class FrankaTrajectory(Node):
#     def __init__(self):
#         super().__init__('franka_trajectory')
        
#         # Initialize robot model
#         self.robot = rtb.models.Panda()
        
#         # Setup publisher
#         qos = QoSProfile(depth=10, reliability=ReliabilityPolicy.RELIABLE)
#         self.joint_pub = self.create_publisher(JointState, '/franka/joint_commands', qos)
        
#         # Robot joint names
#         self.joint_names = [f'panda_joint{i+1}' for i in range(7)]
        
#         # Initial joint configuration - save for returning home
#         self.home_joints = np.array([0.0, -0.5, 0.0, -1.5, 0.0, 1.5, 0.0])
#         self.current_joints = self.home_joints.copy()
        
#         # Initialize visualization
#         self.env = swift.Swift()
#         self.env.launch(realtime=True)
#         self.env.add(self.robot)
#         self.robot.q = self.current_joints
#         self.env.step(0)
        
#         # Calculate initial end-effector position
#         T = self.robot.fkine(self.current_joints)
#         self.get_logger().info(f"Initial end-effector position: {T}")
        
#         # Create timer, generate trajectory every 5 seconds
#         self.timer = self.create_timer(10.0, self.start_movement_sequence)
        
#         # Track trajectory execution status
#         self.executing = False
        
#         # Control update rate - slower updates
#         self.update_delay = 0.25  # 4Hz instead of 10Hz
        
#         self.get_logger().info('Franka trajectory generator initialized')
    
#     def start_movement_sequence(self):
#         """Start the movement sequence if not already executing"""
#         if self.executing:
#             self.get_logger().info("Currently executing trajectory, skipping")
#             return
            
#         self.executing = True
        
#         try:
#             # First move to grasp position
#             self.get_logger().info("Step 1: Moving to grasp position")
#             success = self.move_to_position(0.5, 0.0, 0.2)
            
#             if success:
#                 # Wait visibly for 5 seconds at grasp position
#                 self.get_logger().info("Reached grasp position. Waiting for 5 seconds...")
#                 for i in range(5):
#                     self.get_logger().info(f"Waiting... {i+1} seconds passed")
#                     time.sleep(1.0)
#                     # Update visualization during the wait
#                     self.env.step()
                
#                 # Then move to fixed position
#                 self.get_logger().info("Step 2: Moving to fixed position [0.6, 0.6, 0.2]")

#                 success = self.move_to_position(0.6, 0.6, 0.2)
#                 self.get_logger().info("Reached grasp position. Waiting for 5 seconds...")
#                 for i in range(5):
#                     self.get_logger().info(f"Waiting... {i+1} seconds passed")
#                     time.sleep(1.0)
#                     # Update visualization during the wait
#                     self.env.step()
                
#                 if success:
#                     # Finally, return to home position
#                     self.get_logger().info("Step 3: Returning to home position")
#                     self.return_to_home()
#         finally:
#             self.executing = False
    
#     def return_to_home(self):
#         """Return the robot to its home position"""
#         try:
#             # Generate smooth trajectory back to home
#             traj = self.generate_smooth_trajectory(self.current_joints, self.home_joints)
            
#             # Execute trajectory
#             self.execute_trajectory(traj)
            
#             # Update current joint state
#             self.current_joints = self.home_joints.copy()
#             self.get_logger().info("Robot returned to home position")
#             return True
#         except Exception as e:
#             self.get_logger().error(f"Error returning to home: {str(e)}")
#             return False
    
#     def move_to_position(self, target_x, target_y, target_z):
       
#         try:
#             # Get current pose
#             current_pose = self.robot.fkine(self.current_joints)
            
#             # Create target position, maintain current orientation
#             target_position = current_pose.t + np.array([
#                 target_x - current_pose.t[0],
#                 target_y - current_pose.t[1],
#                 target_z - current_pose.t[2]
#             ])
            
#             # Create target pose
#             target_pose = SE3.Rt(current_pose.R, target_position)
            
#             self.get_logger().info(f"Generating trajectory to target position: {target_position}")
            
#             # Find IK solution
#             sol = self.robot.ikine_LM(
#                 target_pose,
#                 q0=self.current_joints,
#                 mask=[1, 1, 1, 1, 1, 1],
#                 ilimit=500,
#                 tol=1e-8
#             )
            
#             if sol.success:
#                 q_target = sol.q
#                 self.get_logger().info(f"Found IK solution: {q_target}")
                
#                 # Generate smooth trajectory
#                 traj = self.generate_smooth_trajectory(self.current_joints, q_target)
                
#                 # Execute trajectory
#                 self.execute_trajectory(traj)
                
#                 # Update current joint state
#                 self.current_joints = q_target
#                 return True
#             else:
#                 self.get_logger().warn("Could not find valid IK solution")
#                 return False
#         except Exception as e:
#             self.get_logger().error(f"Movement error: {str(e)}")
#             return False
    
#     def generate_smooth_trajectory(self, q_start, q_end, steps=50):

#         # Create trajectory array
#         traj = np.zeros((steps, len(q_start)))
        
#         # For each time point, use smoothed interpolation
#         for i in range(steps):
#             # Base linear interpolation factor: t from 0 to 1
#             t_linear = i / (steps - 1)
            
#             # Apply smoothing function to t (sine-based smoothing)
#             # This creates slower movement at the beginning and end of the trajectory
#             t_smooth = 0.5 - 0.5 * np.cos(t_linear * np.pi)
            
#             # Apply smoothed interpolation: q = q_start * (1-t) + q_end * t
#             traj[i, :] = q_start * (1.0 - t_smooth) + q_end * t_smooth
        
#         return traj
    
#     def execute_trajectory(self, trajectory):
#         # Create joint state message
#         joint_msg = JointState()
#         joint_msg.name = self.joint_names
        
#         # Execute each trajectory point
#         for i, q in enumerate(trajectory):
#             # Update joint positions
#             joint_msg.header.stamp = self.get_clock().now().to_msg()
#             joint_msg.position = q.tolist()
#             joint_msg.velocity = [0.0] * 7
#             joint_msg.effort = []
            
#             # Publish joint command
#             self.joint_pub.publish(joint_msg)
            
#             # Update visualization
#             self.robot.q = q
#             self.env.step()
            
#             # Print status for first, last, or every 5th point (reduced from every 10th)
#             if i == 0 or i == len(trajectory)-1 or i % 5 == 0:
#                 self.get_logger().info(f"Trajectory point {i+1}/{len(trajectory)}")
            
#             # Control execution rate - slower updates
#             time.sleep(self.update_delay)
        
#         self.get_logger().info("Trajectory execution completed")

# def main(args=None):
#     rclpy.init(args=args)
    
#     node = None
#     try:
#         # Create node
#         node = FrankaTrajectory()
        
#         # Run node
#         rclpy.spin(node)
#     except KeyboardInterrupt:
#         pass
#     except Exception as e:
#         if node:
#             node.get_logger().error(f"Error occurred: {str(e)}")
#     finally:
#         # Cleanup
#         if node and hasattr(node, 'env'):
#             node.get_logger().info("Closing environment and cleaning up resources")
#             node.env.close()
        
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()


import rclpy
from rclpy.node import Node
import numpy as np
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped, Point, Quaternion
from std_msgs.msg import Float64
import roboticstoolbox as rtb
from spatialmath import SE3
import swift
from rclpy.qos import QoSProfile, ReliabilityPolicy
import time

class FrankaTrajectory(Node):
    def __init__(self):
        super().__init__('franka_trajectory')
        
        # Initialize robot model
        self.robot = rtb.models.Panda()
        
        # Setup publisher
        qos = QoSProfile(depth=10, reliability=ReliabilityPolicy.RELIABLE)
        self.joint_pub = self.create_publisher(JointState, '/franka/joint_commands', qos)
        
        # 添加：订阅器用于接收末端执行器姿态
        self.pose_subscription = self.create_subscription(
            PoseStamped,
            '/franka/end_effector_pose',  # 与publisher匹配的话题名
            self.pose_callback,
            10)
            
        # 添加：订阅器用于接收深度值
        self.depth_subscription = self.create_subscription(
            Float64,
            '/franka/end_effector_depth',  # 与publisher匹配的话题名
            self.depth_callback,
            10)
            
        # 添加：存储最新的目标姿态和深度值
        self.target_pose = None
        self.depth_value = 0.02  # 默认深度值
        
        # Robot joint names
        self.joint_names = [f'panda_joint{i+1}' for i in range(7)]
        
        # Initial joint configuration - save for returning home
        self.home_joints = np.array([0.0, -0.5, 0.0, -1.5, 0.0, 1.5, 0.0])
        self.current_joints = self.home_joints.copy()
        
        # Initialize visualization
        self.env = swift.Swift()
        self.env.launch(realtime=True)
        self.env.add(self.robot)
        self.robot.q = self.current_joints
        self.env.step(0)
        
        # Calculate initial end-effector position
        T = self.robot.fkine(self.current_joints)
        self.get_logger().info(f"Initial end-effector position: {T}")
        
        # 修改：使用定时器检查新的目标姿态而不是固定序列
        self.timer = self.create_timer(1.0, self.process_target_pose)
        
        # Track trajectory execution status
        self.executing = False
        
        # Control update rate - slower updates
        self.update_delay = 0.25  # 4Hz instead of 10Hz
        
        self.get_logger().info('Franka trajectory generator initialized')
    
    # 添加：接收姿态消息的回调函数
    def pose_callback(self, msg):
        """Callback for receiving end-effector pose messages"""
        self.get_logger().info(f"Received new target pose: {msg.pose.position}")
        self.target_pose = msg.pose
    
    # 添加：接收深度值的回调函数
    def depth_callback(self, msg):
        """Callback for receiving depth value"""
        self.depth_value = msg.data
        
    # 添加：处理目标姿态的函数
    def process_target_pose(self):
        """Process the latest target pose if available and not currently executing"""
        if self.target_pose is None:
            return
            
        if self.executing:
            self.get_logger().info("Currently executing trajectory, will use target pose after completion")
            return
            
        # 获取目标姿态数据
        target_x = self.target_pose.position.x
        target_y = self.target_pose.position.y
        target_z = self.target_pose.position.z
        
        # 执行移动到目标姿态
        self.executing = True
        try:
            self.get_logger().info(f"Moving to target pose at [{target_x}, {target_y}, {target_z}]")
            # 使用现有的move_to_position函数而不是move_to_pose函数
            success = self.move_to_position(target_x, target_y, target_z)
            
            if success:
                self.get_logger().info("Successfully moved to target pose")
            else:
                self.get_logger().warn("Failed to move to target pose")
                
            # 处理完后清除目标姿态
            self.target_pose = None
        finally:
            self.executing = False
    
    def return_to_home(self):
        """Return the robot to its home position"""
        try:
            # Generate smooth trajectory back to home
            traj = self.generate_smooth_trajectory(self.current_joints, self.home_joints)
            
            # Execute trajectory
            self.execute_trajectory(traj)
            
            # Update current joint state
            self.current_joints = self.home_joints.copy()
            self.get_logger().info("Robot returned to home position")
            return True
        except Exception as e:
            self.get_logger().error(f"Error returning to home: {str(e)}")
            return False
    
    def move_to_position(self, target_x, target_y, target_z):
        """Move to a position while maintaining current orientation"""
        try:
            # Get current pose
            current_pose = self.robot.fkine(self.current_joints)
            
            # Create target position, maintain current orientation
            target_position = np.array([target_x, target_y, target_z])
            
            # Create target pose
            target_pose = SE3.Rt(current_pose.R, target_position)
            
            self.get_logger().info(f"Generating trajectory to target position: {target_position}")
            
            # Find IK solution
            sol = self.robot.ikine_LM(
                target_pose,
                q0=self.current_joints,
                mask=[1, 1, 1, 1, 1, 1],
                ilimit=500,
                tol=1e-8
            )
            
            if sol.success:
                q_target = sol.q
                self.get_logger().info(f"Found IK solution: {q_target}")
                
                # Generate smooth trajectory
                traj = self.generate_smooth_trajectory(self.current_joints, q_target)
                
                # Execute trajectory
                self.execute_trajectory(traj)
                
                # Update current joint state
                self.current_joints = q_target
                return True
            else:
                self.get_logger().warn("Could not find valid IK solution")
                return False
        except Exception as e:
            self.get_logger().error(f"Movement error: {str(e)}")
            return False
    
    def generate_smooth_trajectory(self, q_start, q_end, steps=50):
        # Create trajectory array
        traj = np.zeros((steps, len(q_start)))
        
        # For each time point, use smoothed interpolation
        for i in range(steps):
            # Base linear interpolation factor: t from 0 to 1
            t_linear = i / (steps - 1)
            
            # Apply smoothing function to t (sine-based smoothing)
            # This creates slower movement at the beginning and end of the trajectory
            t_smooth = 0.5 - 0.5 * np.cos(t_linear * np.pi)
            
            # Apply smoothed interpolation: q = q_start * (1-t) + q_end * t
            traj[i, :] = q_start * (1.0 - t_smooth) + q_end * t_smooth
        
        return traj
    
    def execute_trajectory(self, trajectory):
        # Create joint state message
        joint_msg = JointState()
        joint_msg.name = self.joint_names
        
        # Execute each trajectory point
        for i, q in enumerate(trajectory):
            # Update joint positions
            joint_msg.header.stamp = self.get_clock().now().to_msg()
            joint_msg.position = q.tolist()
            joint_msg.velocity = [0.0] * 7
            joint_msg.effort = []
            
            # Publish joint command
            self.joint_pub.publish(joint_msg)
            
            # Update visualization
            self.robot.q = q
            self.env.step()
            
            # Print status for first, last, or every 5th point (reduced from every 10th)
            if i == 0 or i == len(trajectory)-1 or i % 5 == 0:
                self.get_logger().info(f"Trajectory point {i+1}/{len(trajectory)}")
            
            # Control execution rate - slower updates
            time.sleep(self.update_delay)
        
        self.get_logger().info("Trajectory execution completed")

def main(args=None):
    rclpy.init(args=args)
    
    node = None
    try:
        # Create node
        node = FrankaTrajectory()
        
        # Run node
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        if node:
            node.get_logger().error(f"Error occurred: {str(e)}")
    finally:
        # Cleanup
        if node and hasattr(node, 'env'):
            node.get_logger().info("Closing environment and cleaning up resources")
            node.env.close()
        
        rclpy.shutdown()

if __name__ == '__main__':
    main()


# import rclpy
# from rclpy.node import Node
# import numpy as np
# from sensor_msgs.msg import JointState
# from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
# import roboticstoolbox as rtb
# from spatialmath import SE3
# import swift
# from rclpy.qos import QoSProfile, ReliabilityPolicy, QoSDurabilityPolicy
# import time

# class FrankaTrajectory(Node):
#     def __init__(self):
#         super().__init__('franka_trajectory')
        
#         # Initialize robot model
#         self.robot = rtb.models.Panda()
        
#         # Setup QoS profile for proper communication across different machines
#         qos = QoSProfile(
#             depth=10,
#             reliability=ReliabilityPolicy.RELIABLE,
#             durability=QoSDurabilityPolicy.TRANSIENT_LOCAL  # Important for cross-machine communication
#         )
        
#         # Setup publisher for joint commands - use global topic names
#         self.joint_pub = self.create_publisher(JointState, '/franka/joint_commands', qos)
        
#         # Setup publisher for trajectory data - use global topic names
#         self.trajectory_pub = self.create_publisher(JointTrajectory, '/franka/joint_trajectory', qos)
        
#         # Robot joint names
#         self.joint_names = [f'panda_joint{i+1}' for i in range(7)]
        
#         # Initial joint configuration - save for returning home
#         self.home_joints = np.array([0.0, -0.3, 0.0, -1.9, 0.0, 1.9, 0.0])
#         self.current_joints = self.home_joints.copy()
        
#         # Initialize visualization
#         self.env = swift.Swift()
#         self.env.launch(realtime=True)
#         self.env.add(self.robot)
#         self.robot.q = self.current_joints
#         self.env.step(0)
        
#         # Calculate initial end-effector position
#         T = self.robot.fkine(self.current_joints)
#         self.get_logger().info(f"Initial end-effector position: {T}")
        
#         # Create timer, generate trajectory every 10 seconds
#         self.timer = self.create_timer(10.0, self.start_movement_sequence)
        
#         # Track trajectory execution status
#         self.executing = False
        
#         # Control update rate - much slower updates (0.5 seconds between points)
#         self.update_delay = 1  # 2Hz instead of 4Hz
        
#         self.get_logger().info('Franka trajectory generator initialized as ROS2 talker (SLOW MODE)')
    
#     def start_movement_sequence(self):
    
#         if self.executing:
#             self.get_logger().info("Currently executing trajectory, skipping")
#             return
            
#         self.executing = True
        
#         try:
#             # First move to grasp position
#             self.get_logger().info("Step 1: Moving to grasp position")
#             success = self.move_to_position(0.5, 0.0, 0.2)
            
#             if success:
#                 # Wait visibly for 5 seconds at grasp position
#                 self.get_logger().info("Reached grasp position. Waiting for 5 seconds...")
#                 for i in range(5):
#                     self.get_logger().info(f"Waiting... {i+1} seconds passed")
#                     time.sleep(1.0)
#                     # Update visualization during the wait
#                     self.env.step()
                
#                 # Then move to fixed position
#                 self.get_logger().info("Step 2: Moving to fixed position [0.6, 0.6, 0.2]")
#                 success = self.move_to_position(0.6, 0.5, 0.2)
#                 self.get_logger().info("Reached fixed position. Waiting for 5 seconds...")
#                 for i in range(5):
#                     self.get_logger().info(f"Waiting... {i+1} seconds passed")
#                     time.sleep(1.0)
#                     # Update visualization during the wait
#                     self.env.step()
                
#                 if success:
#                     # Finally, return to home position
#                     self.get_logger().info("Step 3: Returning to home position")
#                     self.return_to_home()
#         finally:
#             self.executing = False
    
#     def return_to_home(self):
#         """Return the robot to its home position"""
#         try:
#             # Generate smooth trajectory back to home
#             traj = self.generate_smooth_trajectory(self.current_joints, self.home_joints)
            
#             # Publish trajectory
#             self.publish_trajectory(traj)
            
#             # Execute trajectory
#             self.execute_trajectory(traj)
            
#             # Update current joint state
#             self.current_joints = self.home_joints.copy()
#             self.get_logger().info("Robot returned to home position")
#             return True
#         except Exception as e:
#             self.get_logger().error(f"Error returning to home: {str(e)}")
#             return False
    
#     def move_to_position(self, target_x, target_y, target_z):
#         try:
#             # Get current pose
#             current_pose = self.robot.fkine(self.current_joints)
            
#             # Create target position, maintain current orientation
#             target_position = current_pose.t + np.array([
#                 target_x - current_pose.t[0],
#                 target_y - current_pose.t[1],
#                 target_z - current_pose.t[2]
#             ])
            
#             # Create target pose
#             target_pose = SE3.Rt(current_pose.R, target_position)
            
#             self.get_logger().info(f"Generating trajectory to target position: {target_position}")
            
#             # Find IK solution
#             sol = self.robot.ikine_LM(
#                 target_pose,
#                 q0=self.current_joints,
#                 mask=[1, 1, 1, 1, 1, 1],
#                 ilimit=500,
#                 tol=1e-8
#             )
            
#             if sol.success:
#                 q_target = sol.q
#                 self.get_logger().info(f"Found IK solution: {q_target}")
                
#                 # Generate smooth trajectory with more points for slower movement
#                 traj = self.generate_smooth_trajectory(self.current_joints, q_target, steps=50)
                
#                 # Publish trajectory before execution
#                 self.publish_trajectory(traj)
                
#                 # Execute trajectory
#                 self.execute_trajectory(traj)
                
#                 # Update current joint state
#                 self.current_joints = q_target
#                 return True
#             else:
#                 self.get_logger().warn("Could not find valid IK solution")
#                 return False
#         except Exception as e:
#             self.get_logger().error(f"Movement error: {str(e)}")
#             return False
    
#     def generate_smooth_trajectory(self, q_start, q_end, steps=150):
#         # Create trajectory array - increased default steps to 100 for slower movement
#         traj = np.zeros((steps, len(q_start)))
        
#         # For each time point, use smoothed interpolation
#         for i in range(steps):
#             # Base linear interpolation factor: t from 0 to 1
#             t_linear = i / (steps - 1)
            
#             # Apply smoothing function to t (sine-based smoothing)
#             # This creates slower movement at the beginning and end of the trajectory
#             t_smooth = 0.5 - 0.5 * np.cos(t_linear * np.pi)
            
#             # Apply smoothed interpolation: q = q_start * (1-t) + q_end * t
#             traj[i, :] = q_start * (1.0 - t_smooth) + q_end * t_smooth
        
#         return traj
    
#     def publish_trajectory(self, trajectory):
#         # Create JointTrajectory message
#         traj_msg = JointTrajectory()
#         traj_msg.header.stamp = self.get_clock().now().to_msg()
#         traj_msg.joint_names = self.joint_names
        
#         # Calculate time for each point
#         time_from_start = 0.0
        
#         # Print trajectory header
#         self.get_logger().info("Publishing trajectory:")
        
#         # Add each trajectory point to message
#         for i, q in enumerate(trajectory):
#             point = JointTrajectoryPoint()
#             point.positions = q.tolist()
#             point.velocities = [0.0] * len(q)
            
#             # Set time from start
#             point.time_from_start.sec = int(time_from_start)
#             point.time_from_start.nanosec = int((time_from_start - int(time_from_start)) * 1e9)
            
#             # Add point to trajectory message
#             traj_msg.points.append(point)
            
#             # Print trajectory points (first, last, and every 10th point)
#             if i == 0 or i == len(trajectory)-1 or i % 10 == 0:
#                 self.get_logger().info(f"Point {i}: {q}")
            
#             # Increment time
#             time_from_start += self.update_delay
        
#         # Publish trajectory
#         self.trajectory_pub.publish(traj_msg)
#         self.get_logger().info(f"Published complete trajectory with {len(trajectory)} points to /franka/joint_trajectory")
    
#     def execute_trajectory(self, trajectory):
#         # Create joint state message
#         joint_msg = JointState()
#         joint_msg.name = self.joint_names
        
#         # Execute each trajectory point
#         for i, q in enumerate(trajectory):
#             # Update joint positions
#             joint_msg.header.stamp = self.get_clock().now().to_msg()
#             joint_msg.position = q.tolist()
#             joint_msg.velocity = [0.0] * 7
#             joint_msg.effort = []
            
#             # Publish joint command
#             self.joint_pub.publish(joint_msg)
            
#             # Update visualization
#             self.robot.q = q
#             self.env.step()
            
#             # Print status for first, last, or every 5th point
#             if i == 0 or i == len(trajectory)-1 or i % 5 == 0:
#                 self.get_logger().info(f"Executing trajectory point {i+1}/{len(trajectory)}")
                
#                 # Convert joint angles from radians to degrees and print
#                 q_degrees = np.degrees(q).tolist()
#                 joint_angles_str = "\n".join([f"  Joint {j+1}: {angle:.2f}° ({q[j]:.4f} rad)" 
#                                             for j, angle in enumerate(q_degrees)])
#                 self.get_logger().info(f"Current joint angles:\n{joint_angles_str}")
            
#             # Control execution rate - slowed down
#             time.sleep(self.update_delay)
        
#         self.get_logger().info("Trajectory execution completed")

# def main(args=None):
#     rclpy.init(args=args)
    
#     node = None
#     try:
#         # Create node
#         node = FrankaTrajectory()
        
#         # Run node
#         rclpy.spin(node)
#     except KeyboardInterrupt:
#         pass
#     except Exception as e:
#         if node:
#             node.get_logger().error(f"Error occurred: {str(e)}")
#     finally:
#         # Cleanup
#         if node and hasattr(node, 'env'):
#             node.get_logger().info("Closing environment and cleaning up resources")
#             node.env.close()
        
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()