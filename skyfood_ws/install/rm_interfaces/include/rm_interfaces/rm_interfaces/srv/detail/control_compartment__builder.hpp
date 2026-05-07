// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:srv/ControlCompartment.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__CONTROL_COMPARTMENT__BUILDER_HPP_
#define RM_INTERFACES__SRV__DETAIL__CONTROL_COMPARTMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/srv/detail/control_compartment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlCompartment_Request_open
{
public:
  explicit Init_ControlCompartment_Request_open(::rm_interfaces::srv::ControlCompartment_Request & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::srv::ControlCompartment_Request open(::rm_interfaces::srv::ControlCompartment_Request::_open_type arg)
  {
    msg_.open = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::srv::ControlCompartment_Request msg_;
};

class Init_ControlCompartment_Request_door_id
{
public:
  Init_ControlCompartment_Request_door_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCompartment_Request_open door_id(::rm_interfaces::srv::ControlCompartment_Request::_door_id_type arg)
  {
    msg_.door_id = std::move(arg);
    return Init_ControlCompartment_Request_open(msg_);
  }

private:
  ::rm_interfaces::srv::ControlCompartment_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::ControlCompartment_Request>()
{
  return rm_interfaces::srv::builder::Init_ControlCompartment_Request_door_id();
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlCompartment_Response_message
{
public:
  explicit Init_ControlCompartment_Response_message(::rm_interfaces::srv::ControlCompartment_Response & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::srv::ControlCompartment_Response message(::rm_interfaces::srv::ControlCompartment_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::srv::ControlCompartment_Response msg_;
};

class Init_ControlCompartment_Response_success
{
public:
  Init_ControlCompartment_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCompartment_Response_message success(::rm_interfaces::srv::ControlCompartment_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ControlCompartment_Response_message(msg_);
  }

private:
  ::rm_interfaces::srv::ControlCompartment_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::ControlCompartment_Response>()
{
  return rm_interfaces::srv::builder::Init_ControlCompartment_Response_success();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__SRV__DETAIL__CONTROL_COMPARTMENT__BUILDER_HPP_
