// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/GraspEpsilon.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__TRAITS_HPP_

#include "franka_msgs/msg/detail/grasp_epsilon__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::msg::GraspEpsilon>()
{
  return "franka_msgs::msg::GraspEpsilon";
}

template<>
inline const char * name<franka_msgs::msg::GraspEpsilon>()
{
  return "franka_msgs/msg/GraspEpsilon";
}

template<>
struct has_fixed_size<franka_msgs::msg::GraspEpsilon>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::msg::GraspEpsilon>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::msg::GraspEpsilon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__TRAITS_HPP_
