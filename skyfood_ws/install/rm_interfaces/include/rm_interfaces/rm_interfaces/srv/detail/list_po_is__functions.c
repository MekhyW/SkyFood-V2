// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:srv/ListPOIs.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/srv/detail/list_po_is__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rm_interfaces__srv__ListPOIs_Request__init(rm_interfaces__srv__ListPOIs_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rm_interfaces__srv__ListPOIs_Request__fini(rm_interfaces__srv__ListPOIs_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rm_interfaces__srv__ListPOIs_Request__are_equal(const rm_interfaces__srv__ListPOIs_Request * lhs, const rm_interfaces__srv__ListPOIs_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rm_interfaces__srv__ListPOIs_Request__copy(
  const rm_interfaces__srv__ListPOIs_Request * input,
  rm_interfaces__srv__ListPOIs_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rm_interfaces__srv__ListPOIs_Request *
rm_interfaces__srv__ListPOIs_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__srv__ListPOIs_Request * msg = (rm_interfaces__srv__ListPOIs_Request *)allocator.allocate(sizeof(rm_interfaces__srv__ListPOIs_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__srv__ListPOIs_Request));
  bool success = rm_interfaces__srv__ListPOIs_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__srv__ListPOIs_Request__destroy(rm_interfaces__srv__ListPOIs_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_interfaces__srv__ListPOIs_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_interfaces__srv__ListPOIs_Request__Sequence__init(rm_interfaces__srv__ListPOIs_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__srv__ListPOIs_Request * data = NULL;

  if (size) {
    data = (rm_interfaces__srv__ListPOIs_Request *)allocator.zero_allocate(size, sizeof(rm_interfaces__srv__ListPOIs_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__srv__ListPOIs_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__srv__ListPOIs_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_interfaces__srv__ListPOIs_Request__Sequence__fini(rm_interfaces__srv__ListPOIs_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__srv__ListPOIs_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_interfaces__srv__ListPOIs_Request__Sequence *
rm_interfaces__srv__ListPOIs_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__srv__ListPOIs_Request__Sequence * array = (rm_interfaces__srv__ListPOIs_Request__Sequence *)allocator.allocate(sizeof(rm_interfaces__srv__ListPOIs_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__srv__ListPOIs_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_interfaces__srv__ListPOIs_Request__Sequence__destroy(rm_interfaces__srv__ListPOIs_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_interfaces__srv__ListPOIs_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_interfaces__srv__ListPOIs_Request__Sequence__are_equal(const rm_interfaces__srv__ListPOIs_Request__Sequence * lhs, const rm_interfaces__srv__ListPOIs_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__srv__ListPOIs_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__srv__ListPOIs_Request__Sequence__copy(
  const rm_interfaces__srv__ListPOIs_Request__Sequence * input,
  rm_interfaces__srv__ListPOIs_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__srv__ListPOIs_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_interfaces__srv__ListPOIs_Request * data =
      (rm_interfaces__srv__ListPOIs_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__srv__ListPOIs_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_interfaces__srv__ListPOIs_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_interfaces__srv__ListPOIs_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
rm_interfaces__srv__ListPOIs_Response__init(rm_interfaces__srv__ListPOIs_Response * msg)
{
  if (!msg) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    rm_interfaces__srv__ListPOIs_Response__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->poses, 0)) {
    rm_interfaces__srv__ListPOIs_Response__fini(msg);
    return false;
  }
  return true;
}

void
rm_interfaces__srv__ListPOIs_Response__fini(rm_interfaces__srv__ListPOIs_Response * msg)
{
  if (!msg) {
    return;
  }
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
  // poses
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->poses);
}

bool
rm_interfaces__srv__ListPOIs_Response__are_equal(const rm_interfaces__srv__ListPOIs_Response * lhs, const rm_interfaces__srv__ListPOIs_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  return true;
}

bool
rm_interfaces__srv__ListPOIs_Response__copy(
  const rm_interfaces__srv__ListPOIs_Response * input,
  rm_interfaces__srv__ListPOIs_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseStamped__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  return true;
}

rm_interfaces__srv__ListPOIs_Response *
rm_interfaces__srv__ListPOIs_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__srv__ListPOIs_Response * msg = (rm_interfaces__srv__ListPOIs_Response *)allocator.allocate(sizeof(rm_interfaces__srv__ListPOIs_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__srv__ListPOIs_Response));
  bool success = rm_interfaces__srv__ListPOIs_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__srv__ListPOIs_Response__destroy(rm_interfaces__srv__ListPOIs_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_interfaces__srv__ListPOIs_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_interfaces__srv__ListPOIs_Response__Sequence__init(rm_interfaces__srv__ListPOIs_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__srv__ListPOIs_Response * data = NULL;

  if (size) {
    data = (rm_interfaces__srv__ListPOIs_Response *)allocator.zero_allocate(size, sizeof(rm_interfaces__srv__ListPOIs_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__srv__ListPOIs_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__srv__ListPOIs_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_interfaces__srv__ListPOIs_Response__Sequence__fini(rm_interfaces__srv__ListPOIs_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__srv__ListPOIs_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_interfaces__srv__ListPOIs_Response__Sequence *
rm_interfaces__srv__ListPOIs_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__srv__ListPOIs_Response__Sequence * array = (rm_interfaces__srv__ListPOIs_Response__Sequence *)allocator.allocate(sizeof(rm_interfaces__srv__ListPOIs_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__srv__ListPOIs_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_interfaces__srv__ListPOIs_Response__Sequence__destroy(rm_interfaces__srv__ListPOIs_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_interfaces__srv__ListPOIs_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_interfaces__srv__ListPOIs_Response__Sequence__are_equal(const rm_interfaces__srv__ListPOIs_Response__Sequence * lhs, const rm_interfaces__srv__ListPOIs_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__srv__ListPOIs_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__srv__ListPOIs_Response__Sequence__copy(
  const rm_interfaces__srv__ListPOIs_Response__Sequence * input,
  rm_interfaces__srv__ListPOIs_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__srv__ListPOIs_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_interfaces__srv__ListPOIs_Response * data =
      (rm_interfaces__srv__ListPOIs_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__srv__ListPOIs_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_interfaces__srv__ListPOIs_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_interfaces__srv__ListPOIs_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
