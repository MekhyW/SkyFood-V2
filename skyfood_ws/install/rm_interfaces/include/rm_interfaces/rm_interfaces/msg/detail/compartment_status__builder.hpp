// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/CompartmentStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/compartment_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_CompartmentStatus_dr_open
{
public:
  explicit Init_CompartmentStatus_dr_open(::rm_interfaces::msg::CompartmentStatus & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::CompartmentStatus dr_open(::rm_interfaces::msg::CompartmentStatus::_dr_open_type arg)
  {
    msg_.dr_open = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::CompartmentStatus msg_;
};

class Init_CompartmentStatus_dl_open
{
public:
  explicit Init_CompartmentStatus_dl_open(::rm_interfaces::msg::CompartmentStatus & msg)
  : msg_(msg)
  {}
  Init_CompartmentStatus_dr_open dl_open(::rm_interfaces::msg::CompartmentStatus::_dl_open_type arg)
  {
    msg_.dl_open = std::move(arg);
    return Init_CompartmentStatus_dr_open(msg_);
  }

private:
  ::rm_interfaces::msg::CompartmentStatus msg_;
};

class Init_CompartmentStatus_ur_open
{
public:
  explicit Init_CompartmentStatus_ur_open(::rm_interfaces::msg::CompartmentStatus & msg)
  : msg_(msg)
  {}
  Init_CompartmentStatus_dl_open ur_open(::rm_interfaces::msg::CompartmentStatus::_ur_open_type arg)
  {
    msg_.ur_open = std::move(arg);
    return Init_CompartmentStatus_dl_open(msg_);
  }

private:
  ::rm_interfaces::msg::CompartmentStatus msg_;
};

class Init_CompartmentStatus_ul_open
{
public:
  Init_CompartmentStatus_ul_open()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompartmentStatus_ur_open ul_open(::rm_interfaces::msg::CompartmentStatus::_ul_open_type arg)
  {
    msg_.ul_open = std::move(arg);
    return Init_CompartmentStatus_ur_open(msg_);
  }

private:
  ::rm_interfaces::msg::CompartmentStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::CompartmentStatus>()
{
  return rm_interfaces::msg::builder::Init_CompartmentStatus_ul_open();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__BUILDER_HPP_
