// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/CompartmentStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__CompartmentStatus __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__CompartmentStatus __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CompartmentStatus_
{
  using Type = CompartmentStatus_<ContainerAllocator>;

  explicit CompartmentStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ul_open = false;
      this->ur_open = false;
      this->dl_open = false;
      this->dr_open = false;
    }
  }

  explicit CompartmentStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ul_open = false;
      this->ur_open = false;
      this->dl_open = false;
      this->dr_open = false;
    }
  }

  // field types and members
  using _ul_open_type =
    bool;
  _ul_open_type ul_open;
  using _ur_open_type =
    bool;
  _ur_open_type ur_open;
  using _dl_open_type =
    bool;
  _dl_open_type dl_open;
  using _dr_open_type =
    bool;
  _dr_open_type dr_open;

  // setters for named parameter idiom
  Type & set__ul_open(
    const bool & _arg)
  {
    this->ul_open = _arg;
    return *this;
  }
  Type & set__ur_open(
    const bool & _arg)
  {
    this->ur_open = _arg;
    return *this;
  }
  Type & set__dl_open(
    const bool & _arg)
  {
    this->dl_open = _arg;
    return *this;
  }
  Type & set__dr_open(
    const bool & _arg)
  {
    this->dr_open = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::CompartmentStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::CompartmentStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::CompartmentStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::CompartmentStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::CompartmentStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::CompartmentStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::CompartmentStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::CompartmentStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::CompartmentStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::CompartmentStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__CompartmentStatus
    std::shared_ptr<rm_interfaces::msg::CompartmentStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__CompartmentStatus
    std::shared_ptr<rm_interfaces::msg::CompartmentStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompartmentStatus_ & other) const
  {
    if (this->ul_open != other.ul_open) {
      return false;
    }
    if (this->ur_open != other.ur_open) {
      return false;
    }
    if (this->dl_open != other.dl_open) {
      return false;
    }
    if (this->dr_open != other.dr_open) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompartmentStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompartmentStatus_

// alias to use template instance with default allocator
using CompartmentStatus =
  rm_interfaces::msg::CompartmentStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__STRUCT_HPP_
