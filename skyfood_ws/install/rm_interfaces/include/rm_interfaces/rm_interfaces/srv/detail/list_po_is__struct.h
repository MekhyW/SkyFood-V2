// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:srv/ListPOIs.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__LIST_PO_IS__STRUCT_H_
#define RM_INTERFACES__SRV__DETAIL__LIST_PO_IS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListPOIs in the package rm_interfaces.
typedef struct rm_interfaces__srv__ListPOIs_Request
{
  uint8_t structure_needs_at_least_one_member;
} rm_interfaces__srv__ListPOIs_Request;

// Struct for a sequence of rm_interfaces__srv__ListPOIs_Request.
typedef struct rm_interfaces__srv__ListPOIs_Request__Sequence
{
  rm_interfaces__srv__ListPOIs_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__srv__ListPOIs_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/ListPOIs in the package rm_interfaces.
typedef struct rm_interfaces__srv__ListPOIs_Response
{
  rosidl_runtime_c__String__Sequence names;
  geometry_msgs__msg__PoseStamped__Sequence poses;
} rm_interfaces__srv__ListPOIs_Response;

// Struct for a sequence of rm_interfaces__srv__ListPOIs_Response.
typedef struct rm_interfaces__srv__ListPOIs_Response__Sequence
{
  rm_interfaces__srv__ListPOIs_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__srv__ListPOIs_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__SRV__DETAIL__LIST_PO_IS__STRUCT_H_
