// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:action/NavigateToPOI.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POI__BUILDER_HPP_
#define RM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/action/detail/navigate_to_poi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToPOI_Goal_poi_name
{
public:
  Init_NavigateToPOI_Goal_poi_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_interfaces::action::NavigateToPOI_Goal poi_name(::rm_interfaces::action::NavigateToPOI_Goal::_poi_name_type arg)
  {
    msg_.poi_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::action::NavigateToPOI_Goal>()
{
  return rm_interfaces::action::builder::Init_NavigateToPOI_Goal_poi_name();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToPOI_Result_message
{
public:
  explicit Init_NavigateToPOI_Result_message(::rm_interfaces::action::NavigateToPOI_Result & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::action::NavigateToPOI_Result message(::rm_interfaces::action::NavigateToPOI_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_Result msg_;
};

class Init_NavigateToPOI_Result_success
{
public:
  Init_NavigateToPOI_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPOI_Result_message success(::rm_interfaces::action::NavigateToPOI_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_NavigateToPOI_Result_message(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::action::NavigateToPOI_Result>()
{
  return rm_interfaces::action::builder::Init_NavigateToPOI_Result_success();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToPOI_Feedback_status
{
public:
  explicit Init_NavigateToPOI_Feedback_status(::rm_interfaces::action::NavigateToPOI_Feedback & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::action::NavigateToPOI_Feedback status(::rm_interfaces::action::NavigateToPOI_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_Feedback msg_;
};

class Init_NavigateToPOI_Feedback_distance_remaining
{
public:
  Init_NavigateToPOI_Feedback_distance_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPOI_Feedback_status distance_remaining(::rm_interfaces::action::NavigateToPOI_Feedback::_distance_remaining_type arg)
  {
    msg_.distance_remaining = std::move(arg);
    return Init_NavigateToPOI_Feedback_status(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::action::NavigateToPOI_Feedback>()
{
  return rm_interfaces::action::builder::Init_NavigateToPOI_Feedback_distance_remaining();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToPOI_SendGoal_Request_goal
{
public:
  explicit Init_NavigateToPOI_SendGoal_Request_goal(::rm_interfaces::action::NavigateToPOI_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::action::NavigateToPOI_SendGoal_Request goal(::rm_interfaces::action::NavigateToPOI_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_SendGoal_Request msg_;
};

class Init_NavigateToPOI_SendGoal_Request_goal_id
{
public:
  Init_NavigateToPOI_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPOI_SendGoal_Request_goal goal_id(::rm_interfaces::action::NavigateToPOI_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToPOI_SendGoal_Request_goal(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::action::NavigateToPOI_SendGoal_Request>()
{
  return rm_interfaces::action::builder::Init_NavigateToPOI_SendGoal_Request_goal_id();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToPOI_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateToPOI_SendGoal_Response_stamp(::rm_interfaces::action::NavigateToPOI_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::action::NavigateToPOI_SendGoal_Response stamp(::rm_interfaces::action::NavigateToPOI_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_SendGoal_Response msg_;
};

class Init_NavigateToPOI_SendGoal_Response_accepted
{
public:
  Init_NavigateToPOI_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPOI_SendGoal_Response_stamp accepted(::rm_interfaces::action::NavigateToPOI_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateToPOI_SendGoal_Response_stamp(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::action::NavigateToPOI_SendGoal_Response>()
{
  return rm_interfaces::action::builder::Init_NavigateToPOI_SendGoal_Response_accepted();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToPOI_GetResult_Request_goal_id
{
public:
  Init_NavigateToPOI_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_interfaces::action::NavigateToPOI_GetResult_Request goal_id(::rm_interfaces::action::NavigateToPOI_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::action::NavigateToPOI_GetResult_Request>()
{
  return rm_interfaces::action::builder::Init_NavigateToPOI_GetResult_Request_goal_id();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToPOI_GetResult_Response_result
{
public:
  explicit Init_NavigateToPOI_GetResult_Response_result(::rm_interfaces::action::NavigateToPOI_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::action::NavigateToPOI_GetResult_Response result(::rm_interfaces::action::NavigateToPOI_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_GetResult_Response msg_;
};

class Init_NavigateToPOI_GetResult_Response_status
{
public:
  Init_NavigateToPOI_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPOI_GetResult_Response_result status(::rm_interfaces::action::NavigateToPOI_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateToPOI_GetResult_Response_result(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::action::NavigateToPOI_GetResult_Response>()
{
  return rm_interfaces::action::builder::Init_NavigateToPOI_GetResult_Response_status();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateToPOI_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateToPOI_FeedbackMessage_feedback(::rm_interfaces::action::NavigateToPOI_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::action::NavigateToPOI_FeedbackMessage feedback(::rm_interfaces::action::NavigateToPOI_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_FeedbackMessage msg_;
};

class Init_NavigateToPOI_FeedbackMessage_goal_id
{
public:
  Init_NavigateToPOI_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToPOI_FeedbackMessage_feedback goal_id(::rm_interfaces::action::NavigateToPOI_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateToPOI_FeedbackMessage_feedback(msg_);
  }

private:
  ::rm_interfaces::action::NavigateToPOI_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::action::NavigateToPOI_FeedbackMessage>()
{
  return rm_interfaces::action::builder::Init_NavigateToPOI_FeedbackMessage_goal_id();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POI__BUILDER_HPP_
