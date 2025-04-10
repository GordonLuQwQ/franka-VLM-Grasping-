// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:action/ErrorRecovery.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__ACTION__DETAIL__ERROR_RECOVERY__TRAITS_HPP_
#define FRANKA_MSGS__ACTION__DETAIL__ERROR_RECOVERY__TRAITS_HPP_

#include "franka_msgs/action/detail/error_recovery__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_Goal>()
{
  return "franka_msgs::action::ErrorRecovery_Goal";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_Goal>()
{
  return "franka_msgs/action/ErrorRecovery_Goal";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::action::ErrorRecovery_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_Result>()
{
  return "franka_msgs::action::ErrorRecovery_Result";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_Result>()
{
  return "franka_msgs/action/ErrorRecovery_Result";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::action::ErrorRecovery_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_Feedback>()
{
  return "franka_msgs::action::ErrorRecovery_Feedback";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_Feedback>()
{
  return "franka_msgs/action/ErrorRecovery_Feedback";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::action::ErrorRecovery_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "franka_msgs/action/detail/error_recovery__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_SendGoal_Request>()
{
  return "franka_msgs::action::ErrorRecovery_SendGoal_Request";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_SendGoal_Request>()
{
  return "franka_msgs/action/ErrorRecovery_SendGoal_Request";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::action::ErrorRecovery_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::action::ErrorRecovery_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<franka_msgs::action::ErrorRecovery_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_SendGoal_Response>()
{
  return "franka_msgs::action::ErrorRecovery_SendGoal_Response";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_SendGoal_Response>()
{
  return "franka_msgs/action/ErrorRecovery_SendGoal_Response";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<franka_msgs::action::ErrorRecovery_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_SendGoal>()
{
  return "franka_msgs::action::ErrorRecovery_SendGoal";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_SendGoal>()
{
  return "franka_msgs/action/ErrorRecovery_SendGoal";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_msgs::action::ErrorRecovery_SendGoal_Request>::value &&
    has_fixed_size<franka_msgs::action::ErrorRecovery_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_msgs::action::ErrorRecovery_SendGoal_Request>::value &&
    has_bounded_size<franka_msgs::action::ErrorRecovery_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<franka_msgs::action::ErrorRecovery_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<franka_msgs::action::ErrorRecovery_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_msgs::action::ErrorRecovery_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_GetResult_Request>()
{
  return "franka_msgs::action::ErrorRecovery_GetResult_Request";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_GetResult_Request>()
{
  return "franka_msgs/action/ErrorRecovery_GetResult_Request";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<franka_msgs::action::ErrorRecovery_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "franka_msgs/action/detail/error_recovery__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_GetResult_Response>()
{
  return "franka_msgs::action::ErrorRecovery_GetResult_Response";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_GetResult_Response>()
{
  return "franka_msgs/action/ErrorRecovery_GetResult_Response";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::action::ErrorRecovery_Result>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::action::ErrorRecovery_Result>::value> {};

template<>
struct is_message<franka_msgs::action::ErrorRecovery_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_GetResult>()
{
  return "franka_msgs::action::ErrorRecovery_GetResult";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_GetResult>()
{
  return "franka_msgs/action/ErrorRecovery_GetResult";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<franka_msgs::action::ErrorRecovery_GetResult_Request>::value &&
    has_fixed_size<franka_msgs::action::ErrorRecovery_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<franka_msgs::action::ErrorRecovery_GetResult_Request>::value &&
    has_bounded_size<franka_msgs::action::ErrorRecovery_GetResult_Response>::value
  >
{
};

template<>
struct is_service<franka_msgs::action::ErrorRecovery_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<franka_msgs::action::ErrorRecovery_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franka_msgs::action::ErrorRecovery_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "franka_msgs/action/detail/error_recovery__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franka_msgs::action::ErrorRecovery_FeedbackMessage>()
{
  return "franka_msgs::action::ErrorRecovery_FeedbackMessage";
}

template<>
inline const char * name<franka_msgs::action::ErrorRecovery_FeedbackMessage>()
{
  return "franka_msgs/action/ErrorRecovery_FeedbackMessage";
}

template<>
struct has_fixed_size<franka_msgs::action::ErrorRecovery_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::action::ErrorRecovery_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<franka_msgs::action::ErrorRecovery_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::action::ErrorRecovery_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<franka_msgs::action::ErrorRecovery_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<franka_msgs::action::ErrorRecovery>
  : std::true_type
{
};

template<>
struct is_action_goal<franka_msgs::action::ErrorRecovery_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<franka_msgs::action::ErrorRecovery_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<franka_msgs::action::ErrorRecovery_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // FRANKA_MSGS__ACTION__DETAIL__ERROR_RECOVERY__TRAITS_HPP_
