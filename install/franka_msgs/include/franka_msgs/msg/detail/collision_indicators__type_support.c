// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_msgs/msg/detail/collision_indicators__rosidl_typesupport_introspection_c.h"
#include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_msgs/msg/detail/collision_indicators__functions.h"
#include "franka_msgs/msg/detail/collision_indicators__struct.h"


// Include directives for member types
// Member `is_cartesian_linear_collision`
// Member `is_cartesian_angular_collision`
// Member `is_cartesian_linear_contact`
// Member `is_cartesian_angular_contact`
#include "geometry_msgs/msg/vector3.h"
// Member `is_cartesian_linear_collision`
// Member `is_cartesian_angular_collision`
// Member `is_cartesian_linear_contact`
// Member `is_cartesian_angular_contact`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__msg__CollisionIndicators__init(message_memory);
}

void CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_fini_function(void * message_memory)
{
  franka_msgs__msg__CollisionIndicators__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_member_array[6] = {
  {
    "is_cartesian_linear_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__CollisionIndicators, is_cartesian_linear_collision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_cartesian_angular_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__CollisionIndicators, is_cartesian_angular_collision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_cartesian_linear_contact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__CollisionIndicators, is_cartesian_linear_contact),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_cartesian_angular_contact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__CollisionIndicators, is_cartesian_angular_contact),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_joint_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__CollisionIndicators, is_joint_collision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_joint_contact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__CollisionIndicators, is_joint_contact),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_members = {
  "franka_msgs__msg",  // message namespace
  "CollisionIndicators",  // message name
  6,  // number of fields
  sizeof(franka_msgs__msg__CollisionIndicators),
  CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_member_array,  // message members
  CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_init_function,  // function to initialize message memory (memory has to be allocated)
  CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_type_support_handle = {
  0,
  &CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, CollisionIndicators)() {
  CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_type_support_handle.typesupport_identifier) {
    CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CollisionIndicators__rosidl_typesupport_introspection_c__CollisionIndicators_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
