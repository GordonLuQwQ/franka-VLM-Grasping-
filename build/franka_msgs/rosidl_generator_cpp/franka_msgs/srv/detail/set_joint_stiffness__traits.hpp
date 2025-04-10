// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:srv/SetJointStiffness.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_JOINT_STIFFNESS__TRAITS_HPP_
#define FRANKA_MSGS__SRV__DETAIL__SET_JOINT_STIFFNESS__TRAITS_HPP_

#include "franka_msgs/srv/detail/set_joint_stiffness__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::srv::SetJointStiffness_Request>()
{
  return "franka_msgs::srv::SetJointStiffness_Request";
}

template<>
inline const char * name<franka_msgs::srv::SetJointStiffness_Request>()
{
  return "franka_msgs/srv/SetJointStiffness_Request";
}

template<>
struct has_fixed_size<franka_msgs::srv::SetJointStiffness_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::srv::SetJointStiffness_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::srv::SetJointStiffness_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::srv::SetJointStiffness_Response>()
{
  return "franka_msgs::srv::SetJointStiffness_Response";
}

template<>
inline const char * name<franka_msgs::srv::SetJointStiffness_Response>()
{
  return "franka_msgs/srv/SetJointStiffness_Response";
}

template<>
struct has_fixed_size<franka_msgs::srv::SetJointStiffness_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<franka_msgs::srv::SetJointStiffness_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<franka_msgs::srv::SetJointStiffness_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::srv::SetJointStiffness>()
{
  return "franka_msgs::srv::SetJointStiffness";
}

template<>
inline const char * name<franka_msgs::srv::SetJointStiffness>()
{
  return "franka_msgs/srv/SetJointStiffness";
}

template<>
struct has_fixed_size<franka_msgs::srv::SetJointStiffness>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_msgs::srv::SetJointStiffness_Request>::value &&
    has_fixed_size<franka_msgs::srv::SetJointStiffness_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_msgs::srv::SetJointStiffness>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_msgs::srv::SetJointStiffness_Request>::value &&
    has_bounded_size<franka_msgs::srv::SetJointStiffness_Response>::value
  >
{
};

template<>
struct is_service<franka_msgs::srv::SetJointStiffness>
  : std::true_type
{
};

template<>
struct is_service_request<franka_msgs::srv::SetJointStiffness_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_msgs::srv::SetJointStiffness_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_JOINT_STIFFNESS__TRAITS_HPP_
