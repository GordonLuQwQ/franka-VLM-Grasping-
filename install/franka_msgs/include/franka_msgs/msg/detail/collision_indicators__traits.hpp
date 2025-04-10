// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__TRAITS_HPP_

#include "franka_msgs/msg/detail/collision_indicators__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'is_cartesian_linear_collision'
// Member 'is_cartesian_angular_collision'
// Member 'is_cartesian_linear_contact'
// Member 'is_cartesian_angular_contact'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::msg::CollisionIndicators>()
{
  return "franka_msgs::msg::CollisionIndicators";
}

template<>
inline const char * name<franka_msgs::msg::CollisionIndicators>()
{
  return "franka_msgs/msg/CollisionIndicators";
}

template<>
struct has_fixed_size<franka_msgs::msg::CollisionIndicators>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<franka_msgs::msg::CollisionIndicators>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<franka_msgs::msg::CollisionIndicators>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__TRAITS_HPP_
