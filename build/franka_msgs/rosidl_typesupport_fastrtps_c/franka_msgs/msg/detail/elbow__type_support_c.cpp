// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/elbow__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "franka_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "franka_msgs/msg/detail/elbow__struct.h"
#include "franka_msgs/msg/detail/elbow__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Elbow__ros_msg_type = franka_msgs__msg__Elbow;

static bool _Elbow__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Elbow__ros_msg_type * ros_message = static_cast<const _Elbow__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    size_t size = 2;
    auto array_ptr = ros_message->position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: desired_position
  {
    size_t size = 2;
    auto array_ptr = ros_message->desired_position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: commanded_position
  {
    size_t size = 2;
    auto array_ptr = ros_message->commanded_position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: commanded_velocity
  {
    size_t size = 2;
    auto array_ptr = ros_message->commanded_velocity;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: commanded_acceleration
  {
    size_t size = 2;
    auto array_ptr = ros_message->commanded_acceleration;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Elbow__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Elbow__ros_msg_type * ros_message = static_cast<_Elbow__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    size_t size = 2;
    auto array_ptr = ros_message->position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: desired_position
  {
    size_t size = 2;
    auto array_ptr = ros_message->desired_position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: commanded_position
  {
    size_t size = 2;
    auto array_ptr = ros_message->commanded_position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: commanded_velocity
  {
    size_t size = 2;
    auto array_ptr = ros_message->commanded_velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: commanded_acceleration
  {
    size_t size = 2;
    auto array_ptr = ros_message->commanded_acceleration;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t get_serialized_size_franka_msgs__msg__Elbow(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Elbow__ros_msg_type * ros_message = static_cast<const _Elbow__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name position
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name desired_position
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->desired_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name commanded_position
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->commanded_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name commanded_velocity
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->commanded_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name commanded_acceleration
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->commanded_acceleration;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Elbow__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_msgs__msg__Elbow(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t max_serialized_size_franka_msgs__msg__Elbow(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: position
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: desired_position
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: commanded_position
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: commanded_velocity
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: commanded_acceleration
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Elbow__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_franka_msgs__msg__Elbow(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Elbow = {
  "franka_msgs::msg",
  "Elbow",
  _Elbow__cdr_serialize,
  _Elbow__cdr_deserialize,
  _Elbow__get_serialized_size,
  _Elbow__max_serialized_size
};

static rosidl_message_type_support_t _Elbow__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Elbow,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, msg, Elbow)() {
  return &_Elbow__type_support;
}

#if defined(__cplusplus)
}
#endif
