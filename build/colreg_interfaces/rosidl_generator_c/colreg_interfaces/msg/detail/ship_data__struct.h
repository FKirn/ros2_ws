// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from colreg_interfaces:msg/ShipData.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__STRUCT_H_
#define COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ShipData in the package colreg_interfaces.
typedef struct colreg_interfaces__msg__ShipData
{
  float tcpa;
  float dcpa;
  float collision_point_x;
  float collision_point_y;
  float x_target;
  float y_target;
  float x_own;
  float y_own;
  float theta_target;
  float theta_own;
} colreg_interfaces__msg__ShipData;

// Struct for a sequence of colreg_interfaces__msg__ShipData.
typedef struct colreg_interfaces__msg__ShipData__Sequence
{
  colreg_interfaces__msg__ShipData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} colreg_interfaces__msg__ShipData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__STRUCT_H_
