// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:action/ErrorRecovery.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "franka_msgs/action/detail/error_recovery__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_Goal_type_support_ids_t;

static const _ErrorRecovery_Goal_type_support_ids_t _ErrorRecovery_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_Goal_type_support_symbol_names_t _ErrorRecovery_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_Goal)),
  }
};

typedef struct _ErrorRecovery_Goal_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_Goal_type_support_data_t;

static _ErrorRecovery_Goal_type_support_data_t _ErrorRecovery_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_Goal_message_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ErrorRecovery_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::ErrorRecovery_Goal>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_Goal)() {
  return get_message_type_support_handle<franka_msgs::action::ErrorRecovery_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_Result_type_support_ids_t;

static const _ErrorRecovery_Result_type_support_ids_t _ErrorRecovery_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_Result_type_support_symbol_names_t _ErrorRecovery_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_Result)),
  }
};

typedef struct _ErrorRecovery_Result_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_Result_type_support_data_t;

static _ErrorRecovery_Result_type_support_data_t _ErrorRecovery_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_Result_message_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ErrorRecovery_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::ErrorRecovery_Result>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_Result)() {
  return get_message_type_support_handle<franka_msgs::action::ErrorRecovery_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_Feedback_type_support_ids_t;

static const _ErrorRecovery_Feedback_type_support_ids_t _ErrorRecovery_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_Feedback_type_support_symbol_names_t _ErrorRecovery_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_Feedback)),
  }
};

typedef struct _ErrorRecovery_Feedback_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_Feedback_type_support_data_t;

static _ErrorRecovery_Feedback_type_support_data_t _ErrorRecovery_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_Feedback_message_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ErrorRecovery_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::ErrorRecovery_Feedback>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_Feedback)() {
  return get_message_type_support_handle<franka_msgs::action::ErrorRecovery_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_SendGoal_Request_type_support_ids_t;

static const _ErrorRecovery_SendGoal_Request_type_support_ids_t _ErrorRecovery_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_SendGoal_Request_type_support_symbol_names_t _ErrorRecovery_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_SendGoal_Request)),
  }
};

typedef struct _ErrorRecovery_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_SendGoal_Request_type_support_data_t;

static _ErrorRecovery_SendGoal_Request_type_support_data_t _ErrorRecovery_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_SendGoal_Request_message_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ErrorRecovery_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::ErrorRecovery_SendGoal_Request>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_SendGoal_Request)() {
  return get_message_type_support_handle<franka_msgs::action::ErrorRecovery_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_SendGoal_Response_type_support_ids_t;

static const _ErrorRecovery_SendGoal_Response_type_support_ids_t _ErrorRecovery_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_SendGoal_Response_type_support_symbol_names_t _ErrorRecovery_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_SendGoal_Response)),
  }
};

typedef struct _ErrorRecovery_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_SendGoal_Response_type_support_data_t;

static _ErrorRecovery_SendGoal_Response_type_support_data_t _ErrorRecovery_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_SendGoal_Response_message_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ErrorRecovery_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::ErrorRecovery_SendGoal_Response>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_SendGoal_Response)() {
  return get_message_type_support_handle<franka_msgs::action::ErrorRecovery_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_SendGoal_type_support_ids_t;

static const _ErrorRecovery_SendGoal_type_support_ids_t _ErrorRecovery_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_SendGoal_type_support_symbol_names_t _ErrorRecovery_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_SendGoal)),
  }
};

typedef struct _ErrorRecovery_SendGoal_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_SendGoal_type_support_data_t;

static _ErrorRecovery_SendGoal_type_support_data_t _ErrorRecovery_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_SendGoal_service_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ErrorRecovery_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_msgs::action::ErrorRecovery_SendGoal>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<franka_msgs::action::ErrorRecovery_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_GetResult_Request_type_support_ids_t;

static const _ErrorRecovery_GetResult_Request_type_support_ids_t _ErrorRecovery_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_GetResult_Request_type_support_symbol_names_t _ErrorRecovery_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_GetResult_Request)),
  }
};

typedef struct _ErrorRecovery_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_GetResult_Request_type_support_data_t;

static _ErrorRecovery_GetResult_Request_type_support_data_t _ErrorRecovery_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_GetResult_Request_message_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ErrorRecovery_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::ErrorRecovery_GetResult_Request>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_GetResult_Request)() {
  return get_message_type_support_handle<franka_msgs::action::ErrorRecovery_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_GetResult_Response_type_support_ids_t;

static const _ErrorRecovery_GetResult_Response_type_support_ids_t _ErrorRecovery_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_GetResult_Response_type_support_symbol_names_t _ErrorRecovery_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_GetResult_Response)),
  }
};

typedef struct _ErrorRecovery_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_GetResult_Response_type_support_data_t;

static _ErrorRecovery_GetResult_Response_type_support_data_t _ErrorRecovery_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_GetResult_Response_message_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ErrorRecovery_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::ErrorRecovery_GetResult_Response>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_GetResult_Response)() {
  return get_message_type_support_handle<franka_msgs::action::ErrorRecovery_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_GetResult_type_support_ids_t;

static const _ErrorRecovery_GetResult_type_support_ids_t _ErrorRecovery_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_GetResult_type_support_symbol_names_t _ErrorRecovery_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_GetResult)),
  }
};

typedef struct _ErrorRecovery_GetResult_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_GetResult_type_support_data_t;

static _ErrorRecovery_GetResult_type_support_data_t _ErrorRecovery_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_GetResult_service_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ErrorRecovery_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_msgs::action::ErrorRecovery_GetResult>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<franka_msgs::action::ErrorRecovery_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ErrorRecovery_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ErrorRecovery_FeedbackMessage_type_support_ids_t;

static const _ErrorRecovery_FeedbackMessage_type_support_ids_t _ErrorRecovery_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ErrorRecovery_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ErrorRecovery_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ErrorRecovery_FeedbackMessage_type_support_symbol_names_t _ErrorRecovery_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, ErrorRecovery_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, ErrorRecovery_FeedbackMessage)),
  }
};

typedef struct _ErrorRecovery_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ErrorRecovery_FeedbackMessage_type_support_data_t;

static _ErrorRecovery_FeedbackMessage_type_support_data_t _ErrorRecovery_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ErrorRecovery_FeedbackMessage_message_typesupport_map = {
  2,
  "franka_msgs",
  &_ErrorRecovery_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ErrorRecovery_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ErrorRecovery_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ErrorRecovery_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ErrorRecovery_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::ErrorRecovery_FeedbackMessage>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery_FeedbackMessage)() {
  return get_message_type_support_handle<franka_msgs::action::ErrorRecovery_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "franka_msgs/action/detail/error_recovery__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t ErrorRecovery_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<franka_msgs::action::ErrorRecovery>()
{
  using ::franka_msgs::action::rosidl_typesupport_cpp::ErrorRecovery_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  ErrorRecovery_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::franka_msgs::action::ErrorRecovery::Impl::SendGoalService>();
  ErrorRecovery_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::franka_msgs::action::ErrorRecovery::Impl::GetResultService>();
  ErrorRecovery_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::franka_msgs::action::ErrorRecovery::Impl::CancelGoalService>();
  ErrorRecovery_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::franka_msgs::action::ErrorRecovery::Impl::FeedbackMessage>();
  ErrorRecovery_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::franka_msgs::action::ErrorRecovery::Impl::GoalStatusMessage>();
  return &ErrorRecovery_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, ErrorRecovery)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<franka_msgs::action::ErrorRecovery>();
}

#ifdef __cplusplus
}
#endif
