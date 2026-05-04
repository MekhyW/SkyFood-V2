// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__SRV__DETAIL__LOAD_MAP__STRUCT_H_
#define RM_INTERFACES__SRV__DETAIL__LOAD_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadMap in the package rm_interfaces.
typedef struct rm_interfaces__srv__LoadMap_Request
{
  rosidl_runtime_c__String map_path;
} rm_interfaces__srv__LoadMap_Request;

// Struct for a sequence of rm_interfaces__srv__LoadMap_Request.
typedef struct rm_interfaces__srv__LoadMap_Request__Sequence
{
  rm_interfaces__srv__LoadMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__srv__LoadMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadMap in the package rm_interfaces.
typedef struct rm_interfaces__srv__LoadMap_Response
{
  bool success;
  rosidl_runtime_c__String message;
} rm_interfaces__srv__LoadMap_Response;

// Struct for a sequence of rm_interfaces__srv__LoadMap_Response.
typedef struct rm_interfaces__srv__LoadMap_Response__Sequence
{
  rm_interfaces__srv__LoadMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__srv__LoadMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__SRV__DETAIL__LOAD_MAP__STRUCT_H_
