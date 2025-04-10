// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__TRAITS_HPP_

#include "franka_msgs/msg/detail/franka_robot_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'collision_indicators'
#include "franka_msgs/msg/detail/collision_indicators__traits.hpp"
// Member 'measured_joint_state'
// Member 'desired_joint_state'
// Member 'measured_joint_motor_state'
// Member 'tau_ext_hat_filtered'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"
// Member 'elbow'
#include "franka_msgs/msg/detail/elbow__traits.hpp"
// Member 'k_f_ext_hat_k'
// Member 'o_f_ext_hat_k'
#include "geometry_msgs/msg/detail/wrench_stamped__traits.hpp"
// Member 'inertia_ee'
// Member 'inertia_load'
// Member 'inertia_total'
#include "geometry_msgs/msg/detail/inertia_stamped__traits.hpp"
// Member 'o_t_ee'
// Member 'o_t_ee_d'
// Member 'o_t_ee_c'
// Member 'f_t_ee'
// Member 'ee_t_k'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'o_dp_ee_d'
// Member 'o_dp_ee_c'
#include "geometry_msgs/msg/detail/twist_stamped__traits.hpp"
// Member 'o_ddp_ee_c'
#include "geometry_msgs/msg/detail/accel_stamped__traits.hpp"
// Member 'current_errors'
// Member 'last_motion_errors'
#include "franka_msgs/msg/detail/errors__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::msg::FrankaRobotState>()
{
  return "franka_msgs::msg::FrankaRobotState";
}

template<>
inline const char * name<franka_msgs::msg::FrankaRobotState>()
{
  return "franka_msgs/msg/FrankaRobotState";
}

template<>
struct has_fixed_size<franka_msgs::msg::FrankaRobotState>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::msg::CollisionIndicators>::value && has_fixed_size<franka_msgs::msg::Elbow>::value && has_fixed_size<franka_msgs::msg::Errors>::value && has_fixed_size<geometry_msgs::msg::AccelStamped>::value && has_fixed_size<geometry_msgs::msg::InertiaStamped>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<geometry_msgs::msg::TwistStamped>::value && has_fixed_size<geometry_msgs::msg::WrenchStamped>::value && has_fixed_size<sensor_msgs::msg::JointState>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<franka_msgs::msg::FrankaRobotState>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::msg::CollisionIndicators>::value && has_bounded_size<franka_msgs::msg::Elbow>::value && has_bounded_size<franka_msgs::msg::Errors>::value && has_bounded_size<geometry_msgs::msg::AccelStamped>::value && has_bounded_size<geometry_msgs::msg::InertiaStamped>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<geometry_msgs::msg::TwistStamped>::value && has_bounded_size<geometry_msgs::msg::WrenchStamped>::value && has_bounded_size<sensor_msgs::msg::JointState>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<franka_msgs::msg::FrankaRobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__TRAITS_HPP_
