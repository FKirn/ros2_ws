// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from colreg_interfaces:msg/Colreg.idl
// generated code does not contain a copyright notice
#include "colreg_interfaces/msg/detail/colreg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
colreg_interfaces__msg__Colreg__init(colreg_interfaces__msg__Colreg * msg)
{
  if (!msg) {
    return false;
  }
  // tcpa
  // dcpa
  // collision_point_x
  // collision_point_y
  // x_target
  // y_target
  // x_own
  // y_own
  // theta_target
  // theta_own
  return true;
}

void
colreg_interfaces__msg__Colreg__fini(colreg_interfaces__msg__Colreg * msg)
{
  if (!msg) {
    return;
  }
  // tcpa
  // dcpa
  // collision_point_x
  // collision_point_y
  // x_target
  // y_target
  // x_own
  // y_own
  // theta_target
  // theta_own
}

bool
colreg_interfaces__msg__Colreg__are_equal(const colreg_interfaces__msg__Colreg * lhs, const colreg_interfaces__msg__Colreg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tcpa
  if (lhs->tcpa != rhs->tcpa) {
    return false;
  }
  // dcpa
  if (lhs->dcpa != rhs->dcpa) {
    return false;
  }
  // collision_point_x
  if (lhs->collision_point_x != rhs->collision_point_x) {
    return false;
  }
  // collision_point_y
  if (lhs->collision_point_y != rhs->collision_point_y) {
    return false;
  }
  // x_target
  if (lhs->x_target != rhs->x_target) {
    return false;
  }
  // y_target
  if (lhs->y_target != rhs->y_target) {
    return false;
  }
  // x_own
  if (lhs->x_own != rhs->x_own) {
    return false;
  }
  // y_own
  if (lhs->y_own != rhs->y_own) {
    return false;
  }
  // theta_target
  if (lhs->theta_target != rhs->theta_target) {
    return false;
  }
  // theta_own
  if (lhs->theta_own != rhs->theta_own) {
    return false;
  }
  return true;
}

bool
colreg_interfaces__msg__Colreg__copy(
  const colreg_interfaces__msg__Colreg * input,
  colreg_interfaces__msg__Colreg * output)
{
  if (!input || !output) {
    return false;
  }
  // tcpa
  output->tcpa = input->tcpa;
  // dcpa
  output->dcpa = input->dcpa;
  // collision_point_x
  output->collision_point_x = input->collision_point_x;
  // collision_point_y
  output->collision_point_y = input->collision_point_y;
  // x_target
  output->x_target = input->x_target;
  // y_target
  output->y_target = input->y_target;
  // x_own
  output->x_own = input->x_own;
  // y_own
  output->y_own = input->y_own;
  // theta_target
  output->theta_target = input->theta_target;
  // theta_own
  output->theta_own = input->theta_own;
  return true;
}

colreg_interfaces__msg__Colreg *
colreg_interfaces__msg__Colreg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  colreg_interfaces__msg__Colreg * msg = (colreg_interfaces__msg__Colreg *)allocator.allocate(sizeof(colreg_interfaces__msg__Colreg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(colreg_interfaces__msg__Colreg));
  bool success = colreg_interfaces__msg__Colreg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
colreg_interfaces__msg__Colreg__destroy(colreg_interfaces__msg__Colreg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    colreg_interfaces__msg__Colreg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
colreg_interfaces__msg__Colreg__Sequence__init(colreg_interfaces__msg__Colreg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  colreg_interfaces__msg__Colreg * data = NULL;

  if (size) {
    data = (colreg_interfaces__msg__Colreg *)allocator.zero_allocate(size, sizeof(colreg_interfaces__msg__Colreg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = colreg_interfaces__msg__Colreg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        colreg_interfaces__msg__Colreg__fini(&data[i - 1]);
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
colreg_interfaces__msg__Colreg__Sequence__fini(colreg_interfaces__msg__Colreg__Sequence * array)
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
      colreg_interfaces__msg__Colreg__fini(&array->data[i]);
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

colreg_interfaces__msg__Colreg__Sequence *
colreg_interfaces__msg__Colreg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  colreg_interfaces__msg__Colreg__Sequence * array = (colreg_interfaces__msg__Colreg__Sequence *)allocator.allocate(sizeof(colreg_interfaces__msg__Colreg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = colreg_interfaces__msg__Colreg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
colreg_interfaces__msg__Colreg__Sequence__destroy(colreg_interfaces__msg__Colreg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    colreg_interfaces__msg__Colreg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
colreg_interfaces__msg__Colreg__Sequence__are_equal(const colreg_interfaces__msg__Colreg__Sequence * lhs, const colreg_interfaces__msg__Colreg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!colreg_interfaces__msg__Colreg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
colreg_interfaces__msg__Colreg__Sequence__copy(
  const colreg_interfaces__msg__Colreg__Sequence * input,
  colreg_interfaces__msg__Colreg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(colreg_interfaces__msg__Colreg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    colreg_interfaces__msg__Colreg * data =
      (colreg_interfaces__msg__Colreg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!colreg_interfaces__msg__Colreg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          colreg_interfaces__msg__Colreg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!colreg_interfaces__msg__Colreg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
