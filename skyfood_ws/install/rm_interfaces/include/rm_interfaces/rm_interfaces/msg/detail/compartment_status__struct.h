// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/CompartmentStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CompartmentStatus in the package rm_interfaces.
/**
  * Current state of the robot's compartment doors.
  * true = open, false = closed
 */
typedef struct rm_interfaces__msg__CompartmentStatus
{
  bool ul_open;
  bool ur_open;
  bool dl_open;
  bool dr_open;
} rm_interfaces__msg__CompartmentStatus;

// Struct for a sequence of rm_interfaces__msg__CompartmentStatus.
typedef struct rm_interfaces__msg__CompartmentStatus__Sequence
{
  rm_interfaces__msg__CompartmentStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__CompartmentStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__COMPARTMENT_STATUS__STRUCT_H_
