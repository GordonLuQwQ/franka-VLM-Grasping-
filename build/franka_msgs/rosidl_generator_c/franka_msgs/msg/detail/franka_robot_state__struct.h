// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_H_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROBOT_MODE_OTHER'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_OTHER = 0
};

/// Constant 'ROBOT_MODE_IDLE'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_IDLE = 1
};

/// Constant 'ROBOT_MODE_MOVE'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_MOVE = 2
};

/// Constant 'ROBOT_MODE_GUIDING'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_GUIDING = 3
};

/// Constant 'ROBOT_MODE_REFLEX'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_REFLEX = 4
};

/// Constant 'ROBOT_MODE_USER_STOPPED'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_USER_STOPPED = 5
};

/// Constant 'ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'collision_indicators'
#include "franka_msgs/msg/detail/collision_indicators__struct.h"
// Member 'measured_joint_state'
// Member 'desired_joint_state'
// Member 'measured_joint_motor_state'
// Member 'tau_ext_hat_filtered'
#include "sensor_msgs/msg/detail/joint_state__struct.h"
// Member 'elbow'
#include "franka_msgs/msg/detail/elbow__struct.h"
// Member 'k_f_ext_hat_k'
// Member 'o_f_ext_hat_k'
#include "geometry_msgs/msg/detail/wrench_stamped__struct.h"
// Member 'inertia_ee'
// Member 'inertia_load'
// Member 'inertia_total'
#include "geometry_msgs/msg/detail/inertia_stamped__struct.h"
// Member 'o_t_ee'
// Member 'o_t_ee_d'
// Member 'o_t_ee_c'
// Member 'f_t_ee'
// Member 'ee_t_k'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'o_dp_ee_d'
// Member 'o_dp_ee_c'
#include "geometry_msgs/msg/detail/twist_stamped__struct.h"
// Member 'o_ddp_ee_c'
#include "geometry_msgs/msg/detail/accel_stamped__struct.h"
// Member 'current_errors'
// Member 'last_motion_errors'
#include "franka_msgs/msg/detail/errors__struct.h"

// Struct defined in msg/FrankaRobotState in the package franka_msgs.
typedef struct franka_msgs__msg__FrankaRobotState
{
  std_msgs__msg__Header header;
  franka_msgs__msg__CollisionIndicators collision_indicators;
  sensor_msgs__msg__JointState measured_joint_state;
  sensor_msgs__msg__JointState desired_joint_state;
  sensor_msgs__msg__JointState measured_joint_motor_state;
  double ddq_d[7];
  double dtau_j[7];
  sensor_msgs__msg__JointState tau_ext_hat_filtered;
  franka_msgs__msg__Elbow elbow;
  geometry_msgs__msg__WrenchStamped k_f_ext_hat_k;
  geometry_msgs__msg__WrenchStamped o_f_ext_hat_k;
  geometry_msgs__msg__InertiaStamped inertia_ee;
  geometry_msgs__msg__InertiaStamped inertia_load;
  geometry_msgs__msg__InertiaStamped inertia_total;
  geometry_msgs__msg__PoseStamped o_t_ee;
  geometry_msgs__msg__PoseStamped o_t_ee_d;
  geometry_msgs__msg__PoseStamped o_t_ee_c;
  geometry_msgs__msg__PoseStamped f_t_ee;
  geometry_msgs__msg__PoseStamped ee_t_k;
  geometry_msgs__msg__TwistStamped o_dp_ee_d;
  geometry_msgs__msg__TwistStamped o_dp_ee_c;
  geometry_msgs__msg__AccelStamped o_ddp_ee_c;
  double time;
  double control_command_success_rate;
  uint8_t robot_mode;
  franka_msgs__msg__Errors current_errors;
  franka_msgs__msg__Errors last_motion_errors;
} franka_msgs__msg__FrankaRobotState;

// Struct for a sequence of franka_msgs__msg__FrankaRobotState.
typedef struct franka_msgs__msg__FrankaRobotState__Sequence
{
  franka_msgs__msg__FrankaRobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__msg__FrankaRobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_H_
