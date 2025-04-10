// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:action/ErrorRecovery.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__ACTION__DETAIL__ERROR_RECOVERY__BUILDER_HPP_
#define FRANKA_MSGS__ACTION__DETAIL__ERROR_RECOVERY__BUILDER_HPP_

#include "franka_msgs/action/detail/error_recovery__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace franka_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::ErrorRecovery_Goal>()
{
  return ::franka_msgs::action::ErrorRecovery_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::ErrorRecovery_Result>()
{
  return ::franka_msgs::action::ErrorRecovery_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::ErrorRecovery_Feedback>()
{
  return ::franka_msgs::action::ErrorRecovery_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_ErrorRecovery_SendGoal_Request_goal
{
public:
  explicit Init_ErrorRecovery_SendGoal_Request_goal(::franka_msgs::action::ErrorRecovery_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::ErrorRecovery_SendGoal_Request goal(::franka_msgs::action::ErrorRecovery_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::ErrorRecovery_SendGoal_Request msg_;
};

class Init_ErrorRecovery_SendGoal_Request_goal_id
{
public:
  Init_ErrorRecovery_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorRecovery_SendGoal_Request_goal goal_id(::franka_msgs::action::ErrorRecovery_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ErrorRecovery_SendGoal_Request_goal(msg_);
  }

private:
  ::franka_msgs::action::ErrorRecovery_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::ErrorRecovery_SendGoal_Request>()
{
  return franka_msgs::action::builder::Init_ErrorRecovery_SendGoal_Request_goal_id();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_ErrorRecovery_SendGoal_Response_stamp
{
public:
  explicit Init_ErrorRecovery_SendGoal_Response_stamp(::franka_msgs::action::ErrorRecovery_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::ErrorRecovery_SendGoal_Response stamp(::franka_msgs::action::ErrorRecovery_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::ErrorRecovery_SendGoal_Response msg_;
};

class Init_ErrorRecovery_SendGoal_Response_accepted
{
public:
  Init_ErrorRecovery_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorRecovery_SendGoal_Response_stamp accepted(::franka_msgs::action::ErrorRecovery_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ErrorRecovery_SendGoal_Response_stamp(msg_);
  }

private:
  ::franka_msgs::action::ErrorRecovery_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::ErrorRecovery_SendGoal_Response>()
{
  return franka_msgs::action::builder::Init_ErrorRecovery_SendGoal_Response_accepted();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_ErrorRecovery_GetResult_Request_goal_id
{
public:
  Init_ErrorRecovery_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_msgs::action::ErrorRecovery_GetResult_Request goal_id(::franka_msgs::action::ErrorRecovery_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::ErrorRecovery_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::ErrorRecovery_GetResult_Request>()
{
  return franka_msgs::action::builder::Init_ErrorRecovery_GetResult_Request_goal_id();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_ErrorRecovery_GetResult_Response_result
{
public:
  explicit Init_ErrorRecovery_GetResult_Response_result(::franka_msgs::action::ErrorRecovery_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::ErrorRecovery_GetResult_Response result(::franka_msgs::action::ErrorRecovery_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::ErrorRecovery_GetResult_Response msg_;
};

class Init_ErrorRecovery_GetResult_Response_status
{
public:
  Init_ErrorRecovery_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorRecovery_GetResult_Response_result status(::franka_msgs::action::ErrorRecovery_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ErrorRecovery_GetResult_Response_result(msg_);
  }

private:
  ::franka_msgs::action::ErrorRecovery_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::ErrorRecovery_GetResult_Response>()
{
  return franka_msgs::action::builder::Init_ErrorRecovery_GetResult_Response_status();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_ErrorRecovery_FeedbackMessage_feedback
{
public:
  explicit Init_ErrorRecovery_FeedbackMessage_feedback(::franka_msgs::action::ErrorRecovery_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::ErrorRecovery_FeedbackMessage feedback(::franka_msgs::action::ErrorRecovery_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::ErrorRecovery_FeedbackMessage msg_;
};

class Init_ErrorRecovery_FeedbackMessage_goal_id
{
public:
  Init_ErrorRecovery_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorRecovery_FeedbackMessage_feedback goal_id(::franka_msgs::action::ErrorRecovery_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ErrorRecovery_FeedbackMessage_feedback(msg_);
  }

private:
  ::franka_msgs::action::ErrorRecovery_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::ErrorRecovery_FeedbackMessage>()
{
  return franka_msgs::action::builder::Init_ErrorRecovery_FeedbackMessage_goal_id();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__ACTION__DETAIL__ERROR_RECOVERY__BUILDER_HPP_
