// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:action/Grasp.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__ACTION__DETAIL__GRASP__STRUCT_H_
#define FRANKA_MSGS__ACTION__DETAIL__GRASP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'epsilon'
#include "franka_msgs/msg/detail/grasp_epsilon__struct.h"

// Struct defined in action/Grasp in the package franka_msgs.
typedef struct franka_msgs__action__Grasp_Goal
{
  double width;
  franka_msgs__msg__GraspEpsilon epsilon;
  double speed;
  double force;
} franka_msgs__action__Grasp_Goal;

// Struct for a sequence of franka_msgs__action__Grasp_Goal.
typedef struct franka_msgs__action__Grasp_Goal__Sequence
{
  franka_msgs__action__Grasp_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__Grasp_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/Grasp in the package franka_msgs.
typedef struct franka_msgs__action__Grasp_Result
{
  bool success;
  rosidl_runtime_c__String error;
} franka_msgs__action__Grasp_Result;

// Struct for a sequence of franka_msgs__action__Grasp_Result.
typedef struct franka_msgs__action__Grasp_Result__Sequence
{
  franka_msgs__action__Grasp_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__Grasp_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Grasp in the package franka_msgs.
typedef struct franka_msgs__action__Grasp_Feedback
{
  double current_width;
} franka_msgs__action__Grasp_Feedback;

// Struct for a sequence of franka_msgs__action__Grasp_Feedback.
typedef struct franka_msgs__action__Grasp_Feedback__Sequence
{
  franka_msgs__action__Grasp_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__Grasp_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "franka_msgs/action/detail/grasp__struct.h"

// Struct defined in action/Grasp in the package franka_msgs.
typedef struct franka_msgs__action__Grasp_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  franka_msgs__action__Grasp_Goal goal;
} franka_msgs__action__Grasp_SendGoal_Request;

// Struct for a sequence of franka_msgs__action__Grasp_SendGoal_Request.
typedef struct franka_msgs__action__Grasp_SendGoal_Request__Sequence
{
  franka_msgs__action__Grasp_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__Grasp_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Grasp in the package franka_msgs.
typedef struct franka_msgs__action__Grasp_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} franka_msgs__action__Grasp_SendGoal_Response;

// Struct for a sequence of franka_msgs__action__Grasp_SendGoal_Response.
typedef struct franka_msgs__action__Grasp_SendGoal_Response__Sequence
{
  franka_msgs__action__Grasp_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__Grasp_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Grasp in the package franka_msgs.
typedef struct franka_msgs__action__Grasp_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} franka_msgs__action__Grasp_GetResult_Request;

// Struct for a sequence of franka_msgs__action__Grasp_GetResult_Request.
typedef struct franka_msgs__action__Grasp_GetResult_Request__Sequence
{
  franka_msgs__action__Grasp_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__Grasp_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "franka_msgs/action/detail/grasp__struct.h"

// Struct defined in action/Grasp in the package franka_msgs.
typedef struct franka_msgs__action__Grasp_GetResult_Response
{
  int8_t status;
  franka_msgs__action__Grasp_Result result;
} franka_msgs__action__Grasp_GetResult_Response;

// Struct for a sequence of franka_msgs__action__Grasp_GetResult_Response.
typedef struct franka_msgs__action__Grasp_GetResult_Response__Sequence
{
  franka_msgs__action__Grasp_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__Grasp_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "franka_msgs/action/detail/grasp__struct.h"

// Struct defined in action/Grasp in the package franka_msgs.
typedef struct franka_msgs__action__Grasp_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  franka_msgs__action__Grasp_Feedback feedback;
} franka_msgs__action__Grasp_FeedbackMessage;

// Struct for a sequence of franka_msgs__action__Grasp_FeedbackMessage.
typedef struct franka_msgs__action__Grasp_FeedbackMessage__Sequence
{
  franka_msgs__action__Grasp_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__action__Grasp_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__ACTION__DETAIL__GRASP__STRUCT_H_
