// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gps_interfaces:msg/CoordinateStamped.idl
// generated code does not contain a copyright notice
#include "gps_interfaces/msg/detail/coordinate_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gps_interfaces__msg__CoordinateStamped__init(gps_interfaces__msg__CoordinateStamped * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // latitude
  // longitude
  return true;
}

void
gps_interfaces__msg__CoordinateStamped__fini(gps_interfaces__msg__CoordinateStamped * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // latitude
  // longitude
}

bool
gps_interfaces__msg__CoordinateStamped__are_equal(const gps_interfaces__msg__CoordinateStamped * lhs, const gps_interfaces__msg__CoordinateStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  return true;
}

bool
gps_interfaces__msg__CoordinateStamped__copy(
  const gps_interfaces__msg__CoordinateStamped * input,
  gps_interfaces__msg__CoordinateStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  return true;
}

gps_interfaces__msg__CoordinateStamped *
gps_interfaces__msg__CoordinateStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_interfaces__msg__CoordinateStamped * msg = (gps_interfaces__msg__CoordinateStamped *)allocator.allocate(sizeof(gps_interfaces__msg__CoordinateStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gps_interfaces__msg__CoordinateStamped));
  bool success = gps_interfaces__msg__CoordinateStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gps_interfaces__msg__CoordinateStamped__destroy(gps_interfaces__msg__CoordinateStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gps_interfaces__msg__CoordinateStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gps_interfaces__msg__CoordinateStamped__Sequence__init(gps_interfaces__msg__CoordinateStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_interfaces__msg__CoordinateStamped * data = NULL;

  if (size) {
    data = (gps_interfaces__msg__CoordinateStamped *)allocator.zero_allocate(size, sizeof(gps_interfaces__msg__CoordinateStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gps_interfaces__msg__CoordinateStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gps_interfaces__msg__CoordinateStamped__fini(&data[i - 1]);
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
gps_interfaces__msg__CoordinateStamped__Sequence__fini(gps_interfaces__msg__CoordinateStamped__Sequence * array)
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
      gps_interfaces__msg__CoordinateStamped__fini(&array->data[i]);
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

gps_interfaces__msg__CoordinateStamped__Sequence *
gps_interfaces__msg__CoordinateStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_interfaces__msg__CoordinateStamped__Sequence * array = (gps_interfaces__msg__CoordinateStamped__Sequence *)allocator.allocate(sizeof(gps_interfaces__msg__CoordinateStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gps_interfaces__msg__CoordinateStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gps_interfaces__msg__CoordinateStamped__Sequence__destroy(gps_interfaces__msg__CoordinateStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gps_interfaces__msg__CoordinateStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gps_interfaces__msg__CoordinateStamped__Sequence__are_equal(const gps_interfaces__msg__CoordinateStamped__Sequence * lhs, const gps_interfaces__msg__CoordinateStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gps_interfaces__msg__CoordinateStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gps_interfaces__msg__CoordinateStamped__Sequence__copy(
  const gps_interfaces__msg__CoordinateStamped__Sequence * input,
  gps_interfaces__msg__CoordinateStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gps_interfaces__msg__CoordinateStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gps_interfaces__msg__CoordinateStamped * data =
      (gps_interfaces__msg__CoordinateStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gps_interfaces__msg__CoordinateStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gps_interfaces__msg__CoordinateStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gps_interfaces__msg__CoordinateStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
