// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:srv/ListPOIs.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__LIST_PO_IS__BUILDER_HPP_
#define RM_INTERFACES__SRV__DETAIL__LIST_PO_IS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/srv/detail/list_po_is__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::ListPOIs_Request>()
{
  return ::rm_interfaces::srv::ListPOIs_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ListPOIs_Response_poses
{
public:
  explicit Init_ListPOIs_Response_poses(::rm_interfaces::srv::ListPOIs_Response & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::srv::ListPOIs_Response poses(::rm_interfaces::srv::ListPOIs_Response::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::srv::ListPOIs_Response msg_;
};

class Init_ListPOIs_Response_names
{
public:
  Init_ListPOIs_Response_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListPOIs_Response_poses names(::rm_interfaces::srv::ListPOIs_Response::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_ListPOIs_Response_poses(msg_);
  }

private:
  ::rm_interfaces::srv::ListPOIs_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::srv::ListPOIs_Response>()
{
  return rm_interfaces::srv::builder::Init_ListPOIs_Response_names();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__SRV__DETAIL__LIST_PO_IS__BUILDER_HPP_
