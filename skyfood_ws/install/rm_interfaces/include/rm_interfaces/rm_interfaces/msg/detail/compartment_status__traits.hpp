// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/CompartmentStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/msg/detail/compartment_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CompartmentStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: ul_open
  {
    out << "ul_open: ";
    rosidl_generator_traits::value_to_yaml(msg.ul_open, out);
    out << ", ";
  }

  // member: ur_open
  {
    out << "ur_open: ";
    rosidl_generator_traits::value_to_yaml(msg.ur_open, out);
    out << ", ";
  }

  // member: dl_open
  {
    out << "dl_open: ";
    rosidl_generator_traits::value_to_yaml(msg.dl_open, out);
    out << ", ";
  }

  // member: dr_open
  {
    out << "dr_open: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_open, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CompartmentStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ul_open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ul_open: ";
    rosidl_generator_traits::value_to_yaml(msg.ul_open, out);
    out << "\n";
  }

  // member: ur_open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ur_open: ";
    rosidl_generator_traits::value_to_yaml(msg.ur_open, out);
    out << "\n";
  }

  // member: dl_open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dl_open: ";
    rosidl_generator_traits::value_to_yaml(msg.dl_open, out);
    out << "\n";
  }

  // member: dr_open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dr_open: ";
    rosidl_generator_traits::value_to_yaml(msg.dr_open, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CompartmentStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::msg::CompartmentStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::msg::CompartmentStatus & msg)
{
  return rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::msg::CompartmentStatus>()
{
  return "rm_interfaces::msg::CompartmentStatus";
}

template<>
inline const char * name<rm_interfaces::msg::CompartmentStatus>()
{
  return "rm_interfaces/msg/CompartmentStatus";
}

template<>
struct has_fixed_size<rm_interfaces::msg::CompartmentStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_interfaces::msg::CompartmentStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_interfaces::msg::CompartmentStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__TRAITS_HPP_
