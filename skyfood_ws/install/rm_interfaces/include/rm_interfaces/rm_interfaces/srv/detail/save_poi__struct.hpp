// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:srv/SavePOI.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__SAVE_POI__STRUCT_HPP_
#define RM_INTERFACES__SRV__DETAIL__SAVE_POI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_interfaces__srv__SavePOI_Request __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__srv__SavePOI_Request __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SavePOI_Request_
{
  using Type = SavePOI_Request_<ContainerAllocator>;

  explicit SavePOI_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit SavePOI_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::srv::SavePOI_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::srv::SavePOI_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::srv::SavePOI_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::srv::SavePOI_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::srv::SavePOI_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::srv::SavePOI_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::srv::SavePOI_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::srv::SavePOI_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::srv::SavePOI_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::srv::SavePOI_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__srv__SavePOI_Request
    std::shared_ptr<rm_interfaces::srv::SavePOI_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__srv__SavePOI_Request
    std::shared_ptr<rm_interfaces::srv::SavePOI_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SavePOI_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SavePOI_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SavePOI_Request_

// alias to use template instance with default allocator
using SavePOI_Request =
  rm_interfaces::srv::SavePOI_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rm_interfaces


#ifndef _WIN32
# define DEPRECATED__rm_interfaces__srv__SavePOI_Response __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__srv__SavePOI_Response __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SavePOI_Response_
{
  using Type = SavePOI_Response_<ContainerAllocator>;

  explicit SavePOI_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SavePOI_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::srv::SavePOI_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::srv::SavePOI_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::srv::SavePOI_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::srv::SavePOI_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::srv::SavePOI_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::srv::SavePOI_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::srv::SavePOI_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::srv::SavePOI_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::srv::SavePOI_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::srv::SavePOI_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__srv__SavePOI_Response
    std::shared_ptr<rm_interfaces::srv::SavePOI_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__srv__SavePOI_Response
    std::shared_ptr<rm_interfaces::srv::SavePOI_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SavePOI_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SavePOI_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SavePOI_Response_

// alias to use template instance with default allocator
using SavePOI_Response =
  rm_interfaces::srv::SavePOI_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rm_interfaces

namespace rm_interfaces
{

namespace srv
{

struct SavePOI
{
  using Request = rm_interfaces::srv::SavePOI_Request;
  using Response = rm_interfaces::srv::SavePOI_Response;
};

}  // namespace srv

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__SRV__DETAIL__SAVE_POI__STRUCT_HPP_
