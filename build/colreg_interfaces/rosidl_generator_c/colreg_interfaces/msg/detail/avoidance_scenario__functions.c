// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from colreg_interfaces:msg/AvoidanceScenario.idl
// generated code does not contain a copyright notice
#include "colreg_interfaces/msg/detail/avoidance_scenario__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
colreg_interfaces__msg__AvoidanceScenario__init(colreg_interfaces__msg__AvoidanceScenario * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    colreg_interfaces__msg__AvoidanceScenario__fini(msg);
    return false;
  }
  // scenario
  return true;
}

void
colreg_interfaces__msg__AvoidanceScenario__fini(colreg_interfaces__msg__AvoidanceScenario * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // scenario
}

bool
colreg_interfaces__msg__AvoidanceScenario__are_equal(const colreg_interfaces__msg__AvoidanceScenario * lhs, const colreg_interfaces__msg__AvoidanceScenario * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // scenario
  if (lhs->scenario != rhs->scenario) {
    return false;
  }
  return true;
}

bool
colreg_interfaces__msg__AvoidanceScenario__copy(
  const colreg_interfaces__msg__AvoidanceScenario * input,
  colreg_interfaces__msg__AvoidanceScenario * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // scenario
  output->scenario = input->scenario;
  return true;
}

colreg_interfaces__msg__AvoidanceScenario *
colreg_interfaces__msg__AvoidanceScenario__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  colreg_interfaces__msg__AvoidanceScenario * msg = (colreg_interfaces__msg__AvoidanceScenario *)allocator.allocate(sizeof(colreg_interfaces__msg__AvoidanceScenario), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(colreg_interfaces__msg__AvoidanceScenario));
  bool success = colreg_interfaces__msg__AvoidanceScenario__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
colreg_interfaces__msg__AvoidanceScenario__destroy(colreg_interfaces__msg__AvoidanceScenario * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    colreg_interfaces__msg__AvoidanceScenario__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
colreg_interfaces__msg__AvoidanceScenario__Sequence__init(colreg_interfaces__msg__AvoidanceScenario__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  colreg_interfaces__msg__AvoidanceScenario * data = NULL;

  if (size) {
    data = (colreg_interfaces__msg__AvoidanceScenario *)allocator.zero_allocate(size, sizeof(colreg_interfaces__msg__AvoidanceScenario), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = colreg_interfaces__msg__AvoidanceScenario__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        colreg_interfaces__msg__AvoidanceScenario__fini(&data[i - 1]);
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
colreg_interfaces__msg__AvoidanceScenario__Sequence__fini(colreg_interfaces__msg__AvoidanceScenario__Sequence * array)
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
      colreg_interfaces__msg__AvoidanceScenario__fini(&array->data[i]);
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

colreg_interfaces__msg__AvoidanceScenario__Sequence *
colreg_interfaces__msg__AvoidanceScenario__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  colreg_interfaces__msg__AvoidanceScenario__Sequence * array = (colreg_interfaces__msg__AvoidanceScenario__Sequence *)allocator.allocate(sizeof(colreg_interfaces__msg__AvoidanceScenario__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = colreg_interfaces__msg__AvoidanceScenario__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
colreg_interfaces__msg__AvoidanceScenario__Sequence__destroy(colreg_interfaces__msg__AvoidanceScenario__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    colreg_interfaces__msg__AvoidanceScenario__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
colreg_interfaces__msg__AvoidanceScenario__Sequence__are_equal(const colreg_interfaces__msg__AvoidanceScenario__Sequence * lhs, const colreg_interfaces__msg__AvoidanceScenario__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!colreg_interfaces__msg__AvoidanceScenario__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
colreg_interfaces__msg__AvoidanceScenario__Sequence__copy(
  const colreg_interfaces__msg__AvoidanceScenario__Sequence * input,
  colreg_interfaces__msg__AvoidanceScenario__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(colreg_interfaces__msg__AvoidanceScenario);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    colreg_interfaces__msg__AvoidanceScenario * data =
      (colreg_interfaces__msg__AvoidanceScenario *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!colreg_interfaces__msg__AvoidanceScenario__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          colreg_interfaces__msg__AvoidanceScenario__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!colreg_interfaces__msg__AvoidanceScenario__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
