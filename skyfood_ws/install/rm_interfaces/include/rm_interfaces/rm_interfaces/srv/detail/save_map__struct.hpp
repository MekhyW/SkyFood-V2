// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__SAVE_MAP__STRUCT_HPP_
#define RM_INTERFACES__SRV__DETAIL__SAVE_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_interfaces__srv__SaveMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__srv__SaveMap_Request __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveMap_Request_
{
  using Type = SaveMap_Request_<ContainerAllocator>;

  explicit SaveMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->save_path = "";
    }
  }

  explicit SaveMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_name(_alloc),
    save_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_name = "";
      this->save_path = "";
    }
  }

  // field types and members
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _save_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _save_path_type save_path;

  // setters for named parameter idiom
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__save_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->save_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::srv::SaveMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::srv::SaveMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::srv::SaveMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::srv::SaveMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::srv::SaveMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::srv::SaveMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::srv::SaveMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::srv::SaveMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::srv::SaveMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::srv::SaveMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__srv__SaveMap_Request
    std::shared_ptr<rm_interfaces::srv::SaveMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__srv__SaveMap_Request
    std::shared_ptr<rm_interfaces::srv::SaveMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveMap_Request_ & other) const
  {
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->save_path != other.save_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveMap_Request_

// alias to use template instance with default allocator
using SaveMap_Request =
  rm_interfaces::srv::SaveMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rm_interfaces


#ifndef _WIN32
# define DEPRECATED__rm_interfaces__srv__SaveMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__srv__SaveMap_Response __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveMap_Response_
{
  using Type = SaveMap_Response_<ContainerAllocator>;

  explicit SaveMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SaveMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rm_interfaces::srv::SaveMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::srv::SaveMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::srv::SaveMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::srv::SaveMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::srv::SaveMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::srv::SaveMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::srv::SaveMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::srv::SaveMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::srv::SaveMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::srv::SaveMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__srv__SaveMap_Response
    std::shared_ptr<rm_interfaces::srv::SaveMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__srv__SaveMap_Response
    std::shared_ptr<rm_interfaces::srv::SaveMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveMap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveMap_Response_

// alias to use template instance with default allocator
using SaveMap_Response =
  rm_interfaces::srv::SaveMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rm_interfaces

namespace rm_interfaces
{

namespace srv
{

struct SaveMap
{
  using Request = rm_interfaces::srv::SaveMap_Request;
  using Response = rm_interfaces::srv::SaveMap_Response;
};

}  // namespace srv

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__SRV__DETAIL__SAVE_MAP__STRUCT_HPP_
