// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:action/NavigateToPOI.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POI__TRAITS_HPP_
#define RM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/action/detail/navigate_to_poi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToPOI_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: poi_name
  {
    out << "poi_name: ";
    rosidl_generator_traits::value_to_yaml(msg.poi_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToPOI_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poi_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poi_name: ";
    rosidl_generator_traits::value_to_yaml(msg.poi_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToPOI_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::action::NavigateToPOI_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::action::NavigateToPOI_Goal & msg)
{
  return rm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_Goal>()
{
  return "rm_interfaces::action::NavigateToPOI_Goal";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_Goal>()
{
  return "rm_interfaces/action/NavigateToPOI_Goal";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_interfaces::action::NavigateToPOI_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToPOI_Result & msg,
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
  const NavigateToPOI_Result & msg,
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

inline std::string to_yaml(const NavigateToPOI_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::action::NavigateToPOI_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::action::NavigateToPOI_Result & msg)
{
  return rm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_Result>()
{
  return "rm_interfaces::action::NavigateToPOI_Result";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_Result>()
{
  return "rm_interfaces/action/NavigateToPOI_Result";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_interfaces::action::NavigateToPOI_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToPOI_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_remaining
  {
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToPOI_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToPOI_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::action::NavigateToPOI_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::action::NavigateToPOI_Feedback & msg)
{
  return rm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_Feedback>()
{
  return "rm_interfaces::action::NavigateToPOI_Feedback";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_Feedback>()
{
  return "rm_interfaces/action/NavigateToPOI_Feedback";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_interfaces::action::NavigateToPOI_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "rm_interfaces/action/detail/navigate_to_poi__traits.hpp"

namespace rm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToPOI_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToPOI_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToPOI_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::action::NavigateToPOI_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::action::NavigateToPOI_SendGoal_Request & msg)
{
  return rm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_SendGoal_Request>()
{
  return "rm_interfaces::action::NavigateToPOI_SendGoal_Request";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_SendGoal_Request>()
{
  return "rm_interfaces/action/NavigateToPOI_SendGoal_Request";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<rm_interfaces::action::NavigateToPOI_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<rm_interfaces::action::NavigateToPOI_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rm_interfaces::action::NavigateToPOI_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToPOI_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToPOI_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToPOI_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::action::NavigateToPOI_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::action::NavigateToPOI_SendGoal_Response & msg)
{
  return rm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_SendGoal_Response>()
{
  return "rm_interfaces::action::NavigateToPOI_SendGoal_Response";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_SendGoal_Response>()
{
  return "rm_interfaces/action/NavigateToPOI_SendGoal_Response";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rm_interfaces::action::NavigateToPOI_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_SendGoal>()
{
  return "rm_interfaces::action::NavigateToPOI_SendGoal";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_SendGoal>()
{
  return "rm_interfaces/action/NavigateToPOI_SendGoal";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<rm_interfaces::action::NavigateToPOI_SendGoal_Request>::value &&
    has_fixed_size<rm_interfaces::action::NavigateToPOI_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<rm_interfaces::action::NavigateToPOI_SendGoal_Request>::value &&
    has_bounded_size<rm_interfaces::action::NavigateToPOI_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<rm_interfaces::action::NavigateToPOI_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<rm_interfaces::action::NavigateToPOI_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rm_interfaces::action::NavigateToPOI_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToPOI_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToPOI_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToPOI_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::action::NavigateToPOI_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::action::NavigateToPOI_GetResult_Request & msg)
{
  return rm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_GetResult_Request>()
{
  return "rm_interfaces::action::NavigateToPOI_GetResult_Request";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_GetResult_Request>()
{
  return "rm_interfaces/action/NavigateToPOI_GetResult_Request";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rm_interfaces::action::NavigateToPOI_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "rm_interfaces/action/detail/navigate_to_poi__traits.hpp"

namespace rm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToPOI_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToPOI_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToPOI_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::action::NavigateToPOI_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::action::NavigateToPOI_GetResult_Response & msg)
{
  return rm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_GetResult_Response>()
{
  return "rm_interfaces::action::NavigateToPOI_GetResult_Response";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_GetResult_Response>()
{
  return "rm_interfaces/action/NavigateToPOI_GetResult_Response";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<rm_interfaces::action::NavigateToPOI_Result>::value> {};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<rm_interfaces::action::NavigateToPOI_Result>::value> {};

template<>
struct is_message<rm_interfaces::action::NavigateToPOI_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_GetResult>()
{
  return "rm_interfaces::action::NavigateToPOI_GetResult";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_GetResult>()
{
  return "rm_interfaces/action/NavigateToPOI_GetResult";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<rm_interfaces::action::NavigateToPOI_GetResult_Request>::value &&
    has_fixed_size<rm_interfaces::action::NavigateToPOI_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<rm_interfaces::action::NavigateToPOI_GetResult_Request>::value &&
    has_bounded_size<rm_interfaces::action::NavigateToPOI_GetResult_Response>::value
  >
{
};

template<>
struct is_service<rm_interfaces::action::NavigateToPOI_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<rm_interfaces::action::NavigateToPOI_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rm_interfaces::action::NavigateToPOI_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "rm_interfaces/action/detail/navigate_to_poi__traits.hpp"

namespace rm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const NavigateToPOI_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigateToPOI_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigateToPOI_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::action::NavigateToPOI_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::action::NavigateToPOI_FeedbackMessage & msg)
{
  return rm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::action::NavigateToPOI_FeedbackMessage>()
{
  return "rm_interfaces::action::NavigateToPOI_FeedbackMessage";
}

template<>
inline const char * name<rm_interfaces::action::NavigateToPOI_FeedbackMessage>()
{
  return "rm_interfaces/action/NavigateToPOI_FeedbackMessage";
}

template<>
struct has_fixed_size<rm_interfaces::action::NavigateToPOI_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<rm_interfaces::action::NavigateToPOI_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<rm_interfaces::action::NavigateToPOI_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<rm_interfaces::action::NavigateToPOI_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<rm_interfaces::action::NavigateToPOI_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<rm_interfaces::action::NavigateToPOI>
  : std::true_type
{
};

template<>
struct is_action_goal<rm_interfaces::action::NavigateToPOI_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<rm_interfaces::action::NavigateToPOI_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<rm_interfaces::action::NavigateToPOI_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // RM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POI__TRAITS_HPP_
