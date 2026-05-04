// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
#define RM_INTERFACES__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/srv/detail/save_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Request_save_path
{
public:
  explicit Init_SaveMap_Request_save_path(::rm_interfaces::srv::SaveMap_Request & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::srv::SaveMap_Request save_path(::rm_interfaces::srv::SaveMap_Request::_save_path_type arg)
  {
    msg_.save_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::srv::SaveMap_Request msg_;
};

class Init_SaveMap_Request_map_name
{
public:
  Init_SaveMap_Request_map_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveMap_Request_save_path map_name(::rm_interfaces::srv::SaveMap_Request::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_SaveMap_Request_save_path(msg_);
  }

private:
  ::rm_interfaces::srv::SaveMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::SaveMap_Request>()
{
  return rm_interfaces::srv::builder::Init_SaveMap_Request_map_name();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Response_message
{
public:
  explicit Init_SaveMap_Response_message(::rm_interfaces::srv::SaveMap_Response & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::srv::SaveMap_Response message(::rm_interfaces::srv::SaveMap_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::srv::SaveMap_Response msg_;
};

class Init_SaveMap_Response_success
{
public:
  Init_SaveMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveMap_Response_message success(::rm_interfaces::srv::SaveMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SaveMap_Response_message(msg_);
  }

private:
  ::rm_interfaces::srv::SaveMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::SaveMap_Response>()
{
  return rm_interfaces::srv::builder::Init_SaveMap_Response_success();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
