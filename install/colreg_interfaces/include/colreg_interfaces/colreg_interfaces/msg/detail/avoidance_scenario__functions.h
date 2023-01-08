// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from colreg_interfaces:msg/AvoidanceScenario.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__FUNCTIONS_H_
#define COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "colreg_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "colreg_interfaces/msg/detail/avoidance_scenario__struct.h"

/// Initialize msg/AvoidanceScenario message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * colreg_interfaces__msg__AvoidanceScenario
 * )) before or use
 * colreg_interfaces__msg__AvoidanceScenario__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
bool
colreg_interfaces__msg__AvoidanceScenario__init(colreg_interfaces__msg__AvoidanceScenario * msg);

/// Finalize msg/AvoidanceScenario message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
void
colreg_interfaces__msg__AvoidanceScenario__fini(colreg_interfaces__msg__AvoidanceScenario * msg);

/// Create msg/AvoidanceScenario message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * colreg_interfaces__msg__AvoidanceScenario__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
colreg_interfaces__msg__AvoidanceScenario *
colreg_interfaces__msg__AvoidanceScenario__create();

/// Destroy msg/AvoidanceScenario message.
/**
 * It calls
 * colreg_interfaces__msg__AvoidanceScenario__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
void
colreg_interfaces__msg__AvoidanceScenario__destroy(colreg_interfaces__msg__AvoidanceScenario * msg);

/// Check for msg/AvoidanceScenario message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
bool
colreg_interfaces__msg__AvoidanceScenario__are_equal(const colreg_interfaces__msg__AvoidanceScenario * lhs, const colreg_interfaces__msg__AvoidanceScenario * rhs);

/// Copy a msg/AvoidanceScenario message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
bool
colreg_interfaces__msg__AvoidanceScenario__copy(
  const colreg_interfaces__msg__AvoidanceScenario * input,
  colreg_interfaces__msg__AvoidanceScenario * output);

/// Initialize array of msg/AvoidanceScenario messages.
/**
 * It allocates the memory for the number of elements and calls
 * colreg_interfaces__msg__AvoidanceScenario__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
bool
colreg_interfaces__msg__AvoidanceScenario__Sequence__init(colreg_interfaces__msg__AvoidanceScenario__Sequence * array, size_t size);

/// Finalize array of msg/AvoidanceScenario messages.
/**
 * It calls
 * colreg_interfaces__msg__AvoidanceScenario__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
void
colreg_interfaces__msg__AvoidanceScenario__Sequence__fini(colreg_interfaces__msg__AvoidanceScenario__Sequence * array);

/// Create array of msg/AvoidanceScenario messages.
/**
 * It allocates the memory for the array and calls
 * colreg_interfaces__msg__AvoidanceScenario__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
colreg_interfaces__msg__AvoidanceScenario__Sequence *
colreg_interfaces__msg__AvoidanceScenario__Sequence__create(size_t size);

/// Destroy array of msg/AvoidanceScenario messages.
/**
 * It calls
 * colreg_interfaces__msg__AvoidanceScenario__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
void
colreg_interfaces__msg__AvoidanceScenario__Sequence__destroy(colreg_interfaces__msg__AvoidanceScenario__Sequence * array);

/// Check for msg/AvoidanceScenario message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
bool
colreg_interfaces__msg__AvoidanceScenario__Sequence__are_equal(const colreg_interfaces__msg__AvoidanceScenario__Sequence * lhs, const colreg_interfaces__msg__AvoidanceScenario__Sequence * rhs);

/// Copy an array of msg/AvoidanceScenario messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_colreg_interfaces
bool
colreg_interfaces__msg__AvoidanceScenario__Sequence__copy(
  const colreg_interfaces__msg__AvoidanceScenario__Sequence * input,
  colreg_interfaces__msg__AvoidanceScenario__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__FUNCTIONS_H_
