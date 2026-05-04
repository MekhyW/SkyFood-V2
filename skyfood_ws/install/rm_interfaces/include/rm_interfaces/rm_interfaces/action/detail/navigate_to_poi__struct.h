// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:action/NavigateToPOI.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POI__STRUCT_H_
#define RM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'poi_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateToPOI in the package rm_interfaces.
typedef struct rm_interfaces__action__NavigateToPOI_Goal
{
  rosidl_runtime_c__String poi_name;
} rm_interfaces__action__NavigateToPOI_Goal;

// Struct for a sequence of rm_interfaces__action__NavigateToPOI_Goal.
typedef struct rm_interfaces__action__NavigateToPOI_Goal__Sequence
{
  rm_interfaces__action__NavigateToPOI_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__action__NavigateToPOI_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateToPOI in the package rm_interfaces.
typedef struct rm_interfaces__action__NavigateToPOI_Result
{
  bool success;
  rosidl_runtime_c__String message;
} rm_interfaces__action__NavigateToPOI_Result;

// Struct for a sequence of rm_interfaces__action__NavigateToPOI_Result.
typedef struct rm_interfaces__action__NavigateToPOI_Result__Sequence
{
  rm_interfaces__action__NavigateToPOI_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__action__NavigateToPOI_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateToPOI in the package rm_interfaces.
typedef struct rm_interfaces__action__NavigateToPOI_Feedback
{
  float distance_remaining;
  rosidl_runtime_c__String status;
} rm_interfaces__action__NavigateToPOI_Feedback;

// Struct for a sequence of rm_interfaces__action__NavigateToPOI_Feedback.
typedef struct rm_interfaces__action__NavigateToPOI_Feedback__Sequence
{
  rm_interfaces__action__NavigateToPOI_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__action__NavigateToPOI_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rm_interfaces/action/detail/navigate_to_poi__struct.h"

/// Struct defined in action/NavigateToPOI in the package rm_interfaces.
typedef struct rm_interfaces__action__NavigateToPOI_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rm_interfaces__action__NavigateToPOI_Goal goal;
} rm_interfaces__action__NavigateToPOI_SendGoal_Request;

// Struct for a sequence of rm_interfaces__action__NavigateToPOI_SendGoal_Request.
typedef struct rm_interfaces__action__NavigateToPOI_SendGoal_Request__Sequence
{
  rm_interfaces__action__NavigateToPOI_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__action__NavigateToPOI_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateToPOI in the package rm_interfaces.
typedef struct rm_interfaces__action__NavigateToPOI_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rm_interfaces__action__NavigateToPOI_SendGoal_Response;

// Struct for a sequence of rm_interfaces__action__NavigateToPOI_SendGoal_Response.
typedef struct rm_interfaces__action__NavigateToPOI_SendGoal_Response__Sequence
{
  rm_interfaces__action__NavigateToPOI_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__action__NavigateToPOI_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateToPOI in the package rm_interfaces.
typedef struct rm_interfaces__action__NavigateToPOI_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rm_interfaces__action__NavigateToPOI_GetResult_Request;

// Struct for a sequence of rm_interfaces__action__NavigateToPOI_GetResult_Request.
typedef struct rm_interfaces__action__NavigateToPOI_GetResult_Request__Sequence
{
  rm_interfaces__action__NavigateToPOI_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__action__NavigateToPOI_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rm_interfaces/action/detail/navigate_to_poi__struct.h"

/// Struct defined in action/NavigateToPOI in the package rm_interfaces.
typedef struct rm_interfaces__action__NavigateToPOI_GetResult_Response
{
  int8_t status;
  rm_interfaces__action__NavigateToPOI_Result result;
} rm_interfaces__action__NavigateToPOI_GetResult_Response;

// Struct for a sequence of rm_interfaces__action__NavigateToPOI_GetResult_Response.
typedef struct rm_interfaces__action__NavigateToPOI_GetResult_Response__Sequence
{
  rm_interfaces__action__NavigateToPOI_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__action__NavigateToPOI_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rm_interfaces/action/detail/navigate_to_poi__struct.h"

/// Struct defined in action/NavigateToPOI in the package rm_interfaces.
typedef struct rm_interfaces__action__NavigateToPOI_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rm_interfaces__action__NavigateToPOI_Feedback feedback;
} rm_interfaces__action__NavigateToPOI_FeedbackMessage;

// Struct for a sequence of rm_interfaces__action__NavigateToPOI_FeedbackMessage.
typedef struct rm_interfaces__action__NavigateToPOI_FeedbackMessage__Sequence
{
  rm_interfaces__action__NavigateToPOI_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__action__NavigateToPOI_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POI__STRUCT_H_
