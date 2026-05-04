// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:srv/PlaySound.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__PLAY_SOUND__BUILDER_HPP_
#define RM_INTERFACES__SRV__DETAIL__PLAY_SOUND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/srv/detail/play_sound__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace srv
{

namespace builder
{

class Init_PlaySound_Request_blocking
{
public:
  explicit Init_PlaySound_Request_blocking(::rm_interfaces::srv::PlaySound_Request & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::srv::PlaySound_Request blocking(::rm_interfaces::srv::PlaySound_Request::_blocking_type arg)
  {
    msg_.blocking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::srv::PlaySound_Request msg_;
};

class Init_PlaySound_Request_file_path
{
public:
  Init_PlaySound_Request_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySound_Request_blocking file_path(::rm_interfaces::srv::PlaySound_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return Init_PlaySound_Request_blocking(msg_);
  }

private:
  ::rm_interfaces::srv::PlaySound_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::PlaySound_Request>()
{
  return rm_interfaces::srv::builder::Init_PlaySound_Request_file_path();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace srv
{

namespace builder
{

class Init_PlaySound_Response_message
{
public:
  explicit Init_PlaySound_Response_message(::rm_interfaces::srv::PlaySound_Response & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::srv::PlaySound_Response message(::rm_interfaces::srv::PlaySound_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::srv::PlaySound_Response msg_;
};

class Init_PlaySound_Response_success
{
public:
  Init_PlaySound_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySound_Response_message success(::rm_interfaces::srv::PlaySound_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlaySound_Response_message(msg_);
  }

private:
  ::rm_interfaces::srv::PlaySound_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::PlaySound_Response>()
{
  return rm_interfaces::srv::builder::Init_PlaySound_Response_success();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__SRV__DETAIL__PLAY_SOUND__BUILDER_HPP_
