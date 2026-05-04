// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:srv/SavePOI.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__SAVE_POI__BUILDER_HPP_
#define RM_INTERFACES__SRV__DETAIL__SAVE_POI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/srv/detail/save_poi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SavePOI_Request_pose
{
public:
  explicit Init_SavePOI_Request_pose(::rm_interfaces::srv::SavePOI_Request & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::srv::SavePOI_Request pose(::rm_interfaces::srv::SavePOI_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::srv::SavePOI_Request msg_;
};

class Init_SavePOI_Request_name
{
public:
  Init_SavePOI_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SavePOI_Request_pose name(::rm_interfaces::srv::SavePOI_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SavePOI_Request_pose(msg_);
  }

private:
  ::rm_interfaces::srv::SavePOI_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::SavePOI_Request>()
{
  return rm_interfaces::srv::builder::Init_SavePOI_Request_name();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SavePOI_Response_message
{
public:
  explicit Init_SavePOI_Response_message(::rm_interfaces::srv::SavePOI_Response & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::srv::SavePOI_Response message(::rm_interfaces::srv::SavePOI_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::srv::SavePOI_Response msg_;
};

class Init_SavePOI_Response_success
{
public:
  Init_SavePOI_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SavePOI_Response_message success(::rm_interfaces::srv::SavePOI_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SavePOI_Response_message(msg_);
  }

private:
  ::rm_interfaces::srv::SavePOI_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::SavePOI_Response>()
{
  return rm_interfaces::srv::builder::Init_SavePOI_Response_success();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__SRV__DETAIL__SAVE_POI__BUILDER_HPP_
