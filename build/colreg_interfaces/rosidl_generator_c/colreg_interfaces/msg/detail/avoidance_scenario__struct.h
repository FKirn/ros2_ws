// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from colreg_interfaces:msg/AvoidanceScenario.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__STRUCT_H_
#define COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_COLLISION'.
enum
{
  colreg_interfaces__msg__AvoidanceScenario__NO_COLLISION = 1
};

/// Constant 'HEAD_ON'.
enum
{
  colreg_interfaces__msg__AvoidanceScenario__HEAD_ON = 2
};

/// Constant 'OVERTAKING'.
enum
{
  colreg_interfaces__msg__AvoidanceScenario__OVERTAKING = 3
};

/// Constant 'CROSSING_PORT'.
enum
{
  colreg_interfaces__msg__AvoidanceScenario__CROSSING_PORT = 4
};

/// Constant 'CROSSING_STARBOARD'.
enum
{
  colreg_interfaces__msg__AvoidanceScenario__CROSSING_STARBOARD = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/AvoidanceScenario in the package colreg_interfaces.
typedef struct colreg_interfaces__msg__AvoidanceScenario
{
  std_msgs__msg__Header header;
  uint8_t scenario;
} colreg_interfaces__msg__AvoidanceScenario;

// Struct for a sequence of colreg_interfaces__msg__AvoidanceScenario.
typedef struct colreg_interfaces__msg__AvoidanceScenario__Sequence
{
  colreg_interfaces__msg__AvoidanceScenario * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} colreg_interfaces__msg__AvoidanceScenario__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__STRUCT_H_
