// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:srv/PlaySound.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__PLAY_SOUND__TRAITS_HPP_
#define RM_INTERFACES__SRV__DETAIL__PLAY_SOUND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/srv/detail/play_sound__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlaySound_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: file_path
  {
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
    out << ", ";
  }

  // member: blocking
  {
    out << "blocking: ";
    rosidl_generator_traits::value_to_yaml(msg.blocking, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaySound_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
    out << "\n";
  }

  // member: blocking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blocking: ";
    rosidl_generator_traits::value_to_yaml(msg.blocking, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaySound_Request & msg, bool use_flow_style = false)
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
  const rm_interfaces::srv::PlaySound_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::srv::PlaySound_Request & msg)
{
  return rm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::srv::PlaySound_Request>()
{
  return "rm_interfaces::srv::PlaySound_Request";
}

template<>
inline const char * name<rm_interfaces::srv::PlaySound_Request>()
{
  return "rm_interfaces/srv/PlaySound_Request";
}

template<>
struct has_fixed_size<rm_interfaces::srv::PlaySound_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_interfaces::srv::PlaySound_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_interfaces::srv::PlaySound_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlaySound_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaySound_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaySound_Response & msg, bool use_flow_style = false)
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
  const rm_interfaces::srv::PlaySound_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::srv::PlaySound_Response & msg)
{
  return rm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::srv::PlaySound_Response>()
{
  return "rm_interfaces::srv::PlaySound_Response";
}

template<>
inline const char * name<rm_interfaces::srv::PlaySound_Response>()
{
  return "rm_interfaces/srv/PlaySound_Response";
}

template<>
struct has_fixed_size<rm_interfaces::srv::PlaySound_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_interfaces::srv::PlaySound_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_interfaces::srv::PlaySound_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rm_interfaces::srv::PlaySound>()
{
  return "rm_interfaces::srv::PlaySound";
}

template<>
inline const char * name<rm_interfaces::srv::PlaySound>()
{
  return "rm_interfaces/srv/PlaySound";
}

template<>
struct has_fixed_size<rm_interfaces::srv::PlaySound>
  : std::integral_constant<
    bool,
    has_fixed_size<rm_interfaces::srv::PlaySound_Request>::value &&
    has_fixed_size<rm_interfaces::srv::PlaySound_Response>::value
  >
{
};

template<>
struct has_bounded_size<rm_interfaces::srv::PlaySound>
  : std::integral_constant<
    bool,
    has_bounded_size<rm_interfaces::srv::PlaySound_Request>::value &&
    has_bounded_size<rm_interfaces::srv::PlaySound_Response>::value
  >
{
};

template<>
struct is_service<rm_interfaces::srv::PlaySound>
  : std::true_type
{
};

template<>
struct is_service_request<rm_interfaces::srv::PlaySound_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rm_interfaces::srv::PlaySound_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__SRV__DETAIL__PLAY_SOUND__TRAITS_HPP_
