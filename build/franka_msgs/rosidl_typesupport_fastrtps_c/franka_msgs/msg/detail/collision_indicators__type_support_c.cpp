// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/collision_indicators__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "franka_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "franka_msgs/msg/detail/collision_indicators__struct.h"
#include "franka_msgs/msg/detail/collision_indicators__functions.h"
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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // is_cartesian_angular_collision, is_cartesian_angular_contact, is_cartesian_linear_collision, is_cartesian_linear_contact

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_franka_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_franka_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_franka_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _CollisionIndicators__ros_msg_type = franka_msgs__msg__CollisionIndicators;

static bool _CollisionIndicators__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollisionIndicators__ros_msg_type * ros_message = static_cast<const _CollisionIndicators__ros_msg_type *>(untyped_ros_message);
  // Field name: is_cartesian_linear_collision
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->is_cartesian_linear_collision, cdr))
    {
      return false;
    }
  }

  // Field name: is_cartesian_angular_collision
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->is_cartesian_angular_collision, cdr))
    {
      return false;
    }
  }

  // Field name: is_cartesian_linear_contact
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->is_cartesian_linear_contact, cdr))
    {
      return false;
    }
  }

  // Field name: is_cartesian_angular_contact
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->is_cartesian_angular_contact, cdr))
    {
      return false;
    }
  }

  // Field name: is_joint_collision
  {
    size_t size = 7;
    auto array_ptr = ros_message->is_joint_collision;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: is_joint_contact
  {
    size_t size = 7;
    auto array_ptr = ros_message->is_joint_contact;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CollisionIndicators__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollisionIndicators__ros_msg_type * ros_message = static_cast<_CollisionIndicators__ros_msg_type *>(untyped_ros_message);
  // Field name: is_cartesian_linear_collision
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->is_cartesian_linear_collision))
    {
      return false;
    }
  }

  // Field name: is_cartesian_angular_collision
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->is_cartesian_angular_collision))
    {
      return false;
    }
  }

  // Field name: is_cartesian_linear_contact
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->is_cartesian_linear_contact))
    {
      return false;
    }
  }

  // Field name: is_cartesian_angular_contact
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->is_cartesian_angular_contact))
    {
      return false;
    }
  }

  // Field name: is_joint_collision
  {
    size_t size = 7;
    auto array_ptr = ros_message->is_joint_collision;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: is_joint_contact
  {
    size_t size = 7;
    auto array_ptr = ros_message->is_joint_contact;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t get_serialized_size_franka_msgs__msg__CollisionIndicators(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollisionIndicators__ros_msg_type * ros_message = static_cast<const _CollisionIndicators__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_cartesian_linear_collision

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->is_cartesian_linear_collision), current_alignment);
  // field.name is_cartesian_angular_collision

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->is_cartesian_angular_collision), current_alignment);
  // field.name is_cartesian_linear_contact

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->is_cartesian_linear_contact), current_alignment);
  // field.name is_cartesian_angular_contact

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->is_cartesian_angular_contact), current_alignment);
  // field.name is_joint_collision
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->is_joint_collision;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_joint_contact
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->is_joint_contact;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CollisionIndicators__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_msgs__msg__CollisionIndicators(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t max_serialized_size_franka_msgs__msg__CollisionIndicators(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: is_cartesian_linear_collision
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }
  // member: is_cartesian_angular_collision
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }
  // member: is_cartesian_linear_contact
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }
  // member: is_cartesian_angular_contact
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }
  // member: is_joint_collision
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_joint_contact
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CollisionIndicators__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_franka_msgs__msg__CollisionIndicators(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollisionIndicators = {
  "franka_msgs::msg",
  "CollisionIndicators",
  _CollisionIndicators__cdr_serialize,
  _CollisionIndicators__cdr_deserialize,
  _CollisionIndicators__get_serialized_size,
  _CollisionIndicators__max_serialized_size
};

static rosidl_message_type_support_t _CollisionIndicators__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollisionIndicators,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, msg, CollisionIndicators)() {
  return &_CollisionIndicators__type_support;
}

#if defined(__cplusplus)
}
#endif
