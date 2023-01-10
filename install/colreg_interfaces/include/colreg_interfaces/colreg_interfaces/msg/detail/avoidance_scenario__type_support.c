// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from colreg_interfaces:msg/AvoidanceScenario.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "colreg_interfaces/msg/detail/avoidance_scenario__rosidl_typesupport_introspection_c.h"
#include "colreg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "colreg_interfaces/msg/detail/avoidance_scenario__functions.h"
#include "colreg_interfaces/msg/detail/avoidance_scenario__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  colreg_interfaces__msg__AvoidanceScenario__init(message_memory);
}

void colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_fini_function(void * message_memory)
{
  colreg_interfaces__msg__AvoidanceScenario__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(colreg_interfaces__msg__AvoidanceScenario, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scenario",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(colreg_interfaces__msg__AvoidanceScenario, scenario),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_message_members = {
  "colreg_interfaces__msg",  // message namespace
  "AvoidanceScenario",  // message name
  2,  // number of fields
  sizeof(colreg_interfaces__msg__AvoidanceScenario),
  colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_message_member_array,  // message members
  colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_init_function,  // function to initialize message memory (memory has to be allocated)
  colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_message_type_support_handle = {
  0,
  &colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_colreg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, colreg_interfaces, msg, AvoidanceScenario)() {
  colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_message_type_support_handle.typesupport_identifier) {
    colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &colreg_interfaces__msg__AvoidanceScenario__rosidl_typesupport_introspection_c__AvoidanceScenario_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
