// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_msgs:srv/SetLoad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_msgs/srv/detail/set_load__rosidl_typesupport_introspection_c.h"
#include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_msgs/srv/detail/set_load__functions.h"
#include "franka_msgs/srv/detail/set_load__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__srv__SetLoad_Request__init(message_memory);
}

void SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_fini_function(void * message_memory)
{
  franka_msgs__srv__SetLoad_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_message_member_array[3] = {
  {
    "mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetLoad_Request, mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_of_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetLoad_Request, center_of_mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "load_inertia",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetLoad_Request, load_inertia),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_message_members = {
  "franka_msgs__srv",  // message namespace
  "SetLoad_Request",  // message name
  3,  // number of fields
  sizeof(franka_msgs__srv__SetLoad_Request),
  SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_message_member_array,  // message members
  SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_message_type_support_handle = {
  0,
  &SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetLoad_Request)() {
  if (!SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_message_type_support_handle.typesupport_identifier) {
    SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetLoad_Request__rosidl_typesupport_introspection_c__SetLoad_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "franka_msgs/srv/detail/set_load__rosidl_typesupport_introspection_c.h"
// already included above
// #include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "franka_msgs/srv/detail/set_load__functions.h"
// already included above
// #include "franka_msgs/srv/detail/set_load__struct.h"


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__srv__SetLoad_Response__init(message_memory);
}

void SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_fini_function(void * message_memory)
{
  franka_msgs__srv__SetLoad_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetLoad_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetLoad_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_message_members = {
  "franka_msgs__srv",  // message namespace
  "SetLoad_Response",  // message name
  2,  // number of fields
  sizeof(franka_msgs__srv__SetLoad_Response),
  SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_message_member_array,  // message members
  SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_message_type_support_handle = {
  0,
  &SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetLoad_Response)() {
  if (!SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_message_type_support_handle.typesupport_identifier) {
    SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetLoad_Response__rosidl_typesupport_introspection_c__SetLoad_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "franka_msgs/srv/detail/set_load__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers franka_msgs__srv__detail__set_load__rosidl_typesupport_introspection_c__SetLoad_service_members = {
  "franka_msgs__srv",  // service namespace
  "SetLoad",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // franka_msgs__srv__detail__set_load__rosidl_typesupport_introspection_c__SetLoad_Request_message_type_support_handle,
  NULL  // response message
  // franka_msgs__srv__detail__set_load__rosidl_typesupport_introspection_c__SetLoad_Response_message_type_support_handle
};

static rosidl_service_type_support_t franka_msgs__srv__detail__set_load__rosidl_typesupport_introspection_c__SetLoad_service_type_support_handle = {
  0,
  &franka_msgs__srv__detail__set_load__rosidl_typesupport_introspection_c__SetLoad_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetLoad_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetLoad_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetLoad)() {
  if (!franka_msgs__srv__detail__set_load__rosidl_typesupport_introspection_c__SetLoad_service_type_support_handle.typesupport_identifier) {
    franka_msgs__srv__detail__set_load__rosidl_typesupport_introspection_c__SetLoad_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)franka_msgs__srv__detail__set_load__rosidl_typesupport_introspection_c__SetLoad_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetLoad_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetLoad_Response)()->data;
  }

  return &franka_msgs__srv__detail__set_load__rosidl_typesupport_introspection_c__SetLoad_service_type_support_handle;
}
