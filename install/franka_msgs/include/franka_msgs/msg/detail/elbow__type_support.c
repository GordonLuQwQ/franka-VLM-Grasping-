// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_msgs/msg/detail/elbow__rosidl_typesupport_introspection_c.h"
#include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_msgs/msg/detail/elbow__functions.h"
#include "franka_msgs/msg/detail/elbow__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Elbow__rosidl_typesupport_introspection_c__Elbow_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__msg__Elbow__init(message_memory);
}

void Elbow__rosidl_typesupport_introspection_c__Elbow_fini_function(void * message_memory)
{
  franka_msgs__msg__Elbow__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Elbow__rosidl_typesupport_introspection_c__Elbow_message_member_array[5] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, desired_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commanded_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, commanded_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commanded_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, commanded_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commanded_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, commanded_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Elbow__rosidl_typesupport_introspection_c__Elbow_message_members = {
  "franka_msgs__msg",  // message namespace
  "Elbow",  // message name
  5,  // number of fields
  sizeof(franka_msgs__msg__Elbow),
  Elbow__rosidl_typesupport_introspection_c__Elbow_message_member_array,  // message members
  Elbow__rosidl_typesupport_introspection_c__Elbow_init_function,  // function to initialize message memory (memory has to be allocated)
  Elbow__rosidl_typesupport_introspection_c__Elbow_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Elbow__rosidl_typesupport_introspection_c__Elbow_message_type_support_handle = {
  0,
  &Elbow__rosidl_typesupport_introspection_c__Elbow_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, Elbow)() {
  if (!Elbow__rosidl_typesupport_introspection_c__Elbow_message_type_support_handle.typesupport_identifier) {
    Elbow__rosidl_typesupport_introspection_c__Elbow_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Elbow__rosidl_typesupport_introspection_c__Elbow_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
