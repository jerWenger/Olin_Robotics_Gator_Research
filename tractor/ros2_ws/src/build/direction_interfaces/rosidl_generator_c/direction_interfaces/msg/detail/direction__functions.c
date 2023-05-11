// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from direction_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice
#include "direction_interfaces/msg/detail/direction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

bool
direction_interfaces__msg__Direction__init(direction_interfaces__msg__Direction * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    direction_interfaces__msg__Direction__fini(msg);
    return false;
  }
  // left_weight
  // center_weight
  // right_weight
  return true;
}

void
direction_interfaces__msg__Direction__fini(direction_interfaces__msg__Direction * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
  // left_weight
  // center_weight
  // right_weight
}

bool
direction_interfaces__msg__Direction__are_equal(const direction_interfaces__msg__Direction * lhs, const direction_interfaces__msg__Direction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // left_weight
  if (lhs->left_weight != rhs->left_weight) {
    return false;
  }
  // center_weight
  if (lhs->center_weight != rhs->center_weight) {
    return false;
  }
  // right_weight
  if (lhs->right_weight != rhs->right_weight) {
    return false;
  }
  return true;
}

bool
direction_interfaces__msg__Direction__copy(
  const direction_interfaces__msg__Direction * input,
  direction_interfaces__msg__Direction * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // left_weight
  output->left_weight = input->left_weight;
  // center_weight
  output->center_weight = input->center_weight;
  // right_weight
  output->right_weight = input->right_weight;
  return true;
}

direction_interfaces__msg__Direction *
direction_interfaces__msg__Direction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  direction_interfaces__msg__Direction * msg = (direction_interfaces__msg__Direction *)allocator.allocate(sizeof(direction_interfaces__msg__Direction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(direction_interfaces__msg__Direction));
  bool success = direction_interfaces__msg__Direction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
direction_interfaces__msg__Direction__destroy(direction_interfaces__msg__Direction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    direction_interfaces__msg__Direction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
direction_interfaces__msg__Direction__Sequence__init(direction_interfaces__msg__Direction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  direction_interfaces__msg__Direction * data = NULL;

  if (size) {
    data = (direction_interfaces__msg__Direction *)allocator.zero_allocate(size, sizeof(direction_interfaces__msg__Direction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = direction_interfaces__msg__Direction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        direction_interfaces__msg__Direction__fini(&data[i - 1]);
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
direction_interfaces__msg__Direction__Sequence__fini(direction_interfaces__msg__Direction__Sequence * array)
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
      direction_interfaces__msg__Direction__fini(&array->data[i]);
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

direction_interfaces__msg__Direction__Sequence *
direction_interfaces__msg__Direction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  direction_interfaces__msg__Direction__Sequence * array = (direction_interfaces__msg__Direction__Sequence *)allocator.allocate(sizeof(direction_interfaces__msg__Direction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = direction_interfaces__msg__Direction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
direction_interfaces__msg__Direction__Sequence__destroy(direction_interfaces__msg__Direction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    direction_interfaces__msg__Direction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
direction_interfaces__msg__Direction__Sequence__are_equal(const direction_interfaces__msg__Direction__Sequence * lhs, const direction_interfaces__msg__Direction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!direction_interfaces__msg__Direction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
direction_interfaces__msg__Direction__Sequence__copy(
  const direction_interfaces__msg__Direction__Sequence * input,
  direction_interfaces__msg__Direction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(direction_interfaces__msg__Direction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    direction_interfaces__msg__Direction * data =
      (direction_interfaces__msg__Direction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!direction_interfaces__msg__Direction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          direction_interfaces__msg__Direction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!direction_interfaces__msg__Direction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
