// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/Errors.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__ERRORS__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__ERRORS__TRAITS_HPP_

#include "franka_msgs/msg/detail/errors__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::msg::Errors>()
{
  return "franka_msgs::msg::Errors";
}

template<>
inline const char * name<franka_msgs::msg::Errors>()
{
  return "franka_msgs/msg/Errors";
}

template<>
struct has_fixed_size<franka_msgs::msg::Errors>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::msg::Errors>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::msg::Errors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__ERRORS__TRAITS_HPP_
