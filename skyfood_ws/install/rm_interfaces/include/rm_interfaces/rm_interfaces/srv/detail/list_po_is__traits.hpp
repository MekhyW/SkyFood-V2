// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:srv/ListPOIs.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__LIST_PO_IS__TRAITS_HPP_
#define RM_INTERFACES__SRV__DETAIL__LIST_PO_IS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/srv/detail/list_po_is__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListPOIs_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListPOIs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListPOIs_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::srv::ListPOIs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::srv::ListPOIs_Request & msg)
{
  return rm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::srv::ListPOIs_Request>()
{
  return "rm_interfaces::srv::ListPOIs_Request";
}

template<>
inline const char * name<rm_interfaces::srv::ListPOIs_Request>()
{
  return "rm_interfaces/srv/ListPOIs_Request";
}

template<>
struct has_fixed_size<rm_interfaces::srv::ListPOIs_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_interfaces::srv::ListPOIs_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_interfaces::srv::ListPOIs_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListPOIs_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListPOIs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListPOIs_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::srv::ListPOIs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::srv::ListPOIs_Response & msg)
{
  return rm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::srv::ListPOIs_Response>()
{
  return "rm_interfaces::srv::ListPOIs_Response";
}

template<>
inline const char * name<rm_interfaces::srv::ListPOIs_Response>()
{
  return "rm_interfaces/srv/ListPOIs_Response";
}

template<>
struct has_fixed_size<rm_interfaces::srv::ListPOIs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_interfaces::srv::ListPOIs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_interfaces::srv::ListPOIs_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rm_interfaces::srv::ListPOIs>()
{
  return "rm_interfaces::srv::ListPOIs";
}

template<>
inline const char * name<rm_interfaces::srv::ListPOIs>()
{
  return "rm_interfaces/srv/ListPOIs";
}

template<>
struct has_fixed_size<rm_interfaces::srv::ListPOIs>
  : std::integral_constant<
    bool,
    has_fixed_size<rm_interfaces::srv::ListPOIs_Request>::value &&
    has_fixed_size<rm_interfaces::srv::ListPOIs_Response>::value
  >
{
};

template<>
struct has_bounded_size<rm_interfaces::srv::ListPOIs>
  : std::integral_constant<
    bool,
    has_bounded_size<rm_interfaces::srv::ListPOIs_Request>::value &&
    has_bounded_size<rm_interfaces::srv::ListPOIs_Response>::value
  >
{
};

template<>
struct is_service<rm_interfaces::srv::ListPOIs>
  : std::true_type
{
};

template<>
struct is_service_request<rm_interfaces::srv::ListPOIs_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rm_interfaces::srv::ListPOIs_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__SRV__DETAIL__LIST_PO_IS__TRAITS_HPP_
