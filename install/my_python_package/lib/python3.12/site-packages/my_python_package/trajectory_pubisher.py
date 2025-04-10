import rclpy
from rclpy.node import Node
import threading
from geometry_msgs.msg import Point, Quaternion, PoseStamped
from std_msgs.msg import Float64
import moveit_msgs.msg
from moveit_msgs.msg import DisplayTrajectory, MotionPlanRequest
from moveit_msgs.srv import GetMotionPlan



class EndEffectorTrajectoryPlanner(Node):
    def __init__(self):
        super().__init__('end_effector_trajectory_plancner')
        
        # Current end effector state
        self.current_pose = None
        self.current_rotation = None
        self.current_depth = None
        
        # Lock for thread-safe updates
        self._state_lock = threading.Lock()
        
        # Motion plan service client
        self.motion_plan_client = self.create_client(GetMotionPlan, '/plan_motion_service')
        
        # Subscribers
        self.pose_sub = self.create_subscription(
            Point, 
            '/end_effector/pose', 
            self.pose_callback, 
            10
        )
        
        self.rotation_sub = self.create_subscription(
            Quaternion, 
            '/end_effector/rotation', 
            self.rotation_callback, 
            10
        )
        
        self.depth_sub = self.create_subscription(
            Float64, 
            '/end_effector/depth', 
            self.depth_callback, 
            10
        )
        
        # Trajectory publisher
        self.trajectory_pub = self.create_publisher(
            DisplayTrajectory, 
            '/franka/planned_trajectory', 
            10
        )
        
        # Obstacle detection threshold
        self.obstacle_distance_threshold = 0.2  # meters
        
        # Periodic planning timer
        self.planning_timer = self.create_timer(1.0, self.check_and_plan_trajectory)
    
    def pose_callback(self, msg):
        """
        Update end effector position
        """
        with self._state_lock:
            self.current_pose = msg
    
    def rotation_callback(self, msg):
        """
        Update end effector rotation
        """
        with self._state_lock:
            self.current_rotation = msg
    
    def depth_callback(self, msg):
        """
        Update end effector depth
        """
        with self._state_lock:
            self.current_depth = msg.data
    
    def check_and_plan_trajectory(self):
        """
        Periodically check if we have complete end effector information
        and plan a trajectory if possible
        """
        with self._state_lock:
            # Check if we have complete pose information
            if (self.current_pose is not None and 
                self.current_rotation is not None and 
                self.current_depth is not None):
                
                # Check for potential obstacles
                if self.current_depth < self.obstacle_distance_threshold:
                    self.plan_avoidance_trajectory()
    
    def plan_avoidance_trajectory(self):
        """
        Plan trajectory to avoid detected obstacles
        """
        # Create target pose based on current position with slight adjustment
        target_pose = PoseStamped()
        target_pose.header.frame_id = "base_link"
        
        # Adjust target position to move away from obstacle
        target_pose.pose.position.x = self.current_pose.x + 0.1  # Move 10cm forward
        target_pose.pose.position.y = self.current_pose.y  # Keep y same
        target_pose.pose.position.z = self.current_pose.z + 0.1  # Move 10cm up
        
        # Use current rotation
        target_pose.pose.orientation = self.current_rotation
        
        # Prepare motion plan request
        motion_plan_req = MotionPlanRequest()
        
        # Create goal constraint
        goal_constraint = moveit_msgs.msg.Constraints()
        
        # Add pose constraint
        pose_constraint = moveit_msgs.msg.PositionConstraint()
        pose_constraint.header = target_pose.header
        pose_constraint.link_name = "panda_hand"  # Replace with your robot's end effector link name
        
        # Create a bounding sphere for the target position
        pose_constraint.constraint_region = moveit_msgs.msg.BoundingSphere()
        pose_constraint.constraint_region.center.x = target_pose.pose.position.x
        pose_constraint.constraint_region.center.y = target_pose.pose.position.y
        pose_constraint.constraint_region.center.z = target_pose.pose.position.z
        pose_constraint.constraint_region.radius = 0.05  # 5cm tolerance
        
        goal_constraint.position_constraints.append(pose_constraint)
        
        # Add orientation constraint
        orientation_constraint = moveit_msgs.msg.OrientationConstraint()
        orientation_constraint.header = target_pose.header
        orientation_constraint.link_name = "panda_hand"
        orientation_constraint.orientation = target_pose.pose.orientation
        orientation_constraint.absolute_x_axis_tolerance = 0.1
        orientation_constraint.absolute_y_axis_tolerance = 0.1
        orientation_constraint.absolute_z_axis_tolerance = 0.1
        
        goal_constraint.orientation_constraints.append(orientation_constraint)
        
        # Set goal constraints
        motion_plan_req.goal_constraints.append(goal_constraint)
        
        # Send planning request
        try:
            future = self.motion_plan_client.call_async(motion_plan_req)
            future.add_done_callback(self.motion_plan_callback)
        
        except Exception as e:
            self.get_logger().error(f"Trajectory planning error: {e}")
    
    def motion_plan_callback(self, future):
    
        try:
            response = future.result()
            if response.motion_plan_response.error_code.val == 1:  # SUCCESS
                # Publish trajectory
                display_trajectory = DisplayTrajectory()
                display_trajectory.trajectory.append(response.motion_plan_response.trajectory)
                self.trajectory_pub.publish(display_trajectory)
                
                # Log trajectory details
                trajectory = response.motion_plan_response.trajectory
                
                # Print basic trajectory information
                self.get_logger().info(f"Planned Trajectory Details:")
                self.get_logger().info(f"Trajectory Points: {len(trajectory.joint_trajectory.points)}")
                
                # Print joint names
                self.get_logger().info(f"Joint Names: {trajectory.joint_trajectory.joint_names}")
                
                # Print details of each trajectory point
                for i, point in enumerate(trajectory.joint_trajectory.points):
                    self.get_logger().info(f"\nTrajectory Point {i}:")
                    
                    # Print joint positions
                    self.get_logger().info(f"  Joint Positions: {[round(pos, 4) for pos in point.positions]}")
                    
                    # Print velocities if available
                    if point.velocities:
                        self.get_logger().info(f"  Joint Velocities: {[round(vel, 4) for vel in point.velocities]}")
                    
                    # Print time from start
                    self.get_logger().info(f"  Time from Start: {point.time_from_start.sec} sec {point.time_from_start.nanosec} ns")
                
                self.get_logger().info(f"\nPlanned avoidance trajectory near obstacle at depth {self.current_depth}")
            else:
                self.get_logger().warn("Trajectory planning failed")
        
        except Exception as e:
            self.get_logger().error(f"Motion plan callback error: {e}")

def main(args=None):
    rclpy.init(args=args)
    
    try:
        planner = EndEffectorTrajectoryPlanner()
        rclpy.spin(planner)
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()