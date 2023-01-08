// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from colreg_interfaces:msg/Colreg.idl
// generated code does not contain a copyright notice
#include "colreg_interfaces/msg/detail/colreg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "colreg_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "colreg_interfaces/msg/detail/colreg__struct.h"
#include "colreg_interfaces/msg/detail/colreg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Colreg__ros_msg_type = colreg_interfaces__msg__Colreg;

static bool _Colreg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Colreg__ros_msg_type * ros_message = static_cast<const _Colreg__ros_msg_type *>(untyped_ros_message);
  // Field name: tcpa
  {
    cdr << ros_message->tcpa;
  }

  // Field name: dcpa
  {
    cdr << ros_message->dcpa;
  }

  // Field name: collision_point_x
  {
    cdr << ros_message->collision_point_x;
  }

  // Field name: collision_point_y
  {
    cdr << ros_message->collision_point_y;
  }

  // Field name: x_target
  {
    cdr << ros_message->x_target;
  }

  // Field name: y_target
  {
    cdr << ros_message->y_target;
  }

  // Field name: x_own
  {
    cdr << ros_message->x_own;
  }

  // Field name: y_own
  {
    cdr << ros_message->y_own;
  }

  // Field name: theta_target
  {
    cdr << ros_message->theta_target;
  }

  // Field name: theta_own
  {
    cdr << ros_message->theta_own;
  }

  return true;
}

static bool _Colreg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Colreg__ros_msg_type * ros_message = static_cast<_Colreg__ros_msg_type *>(untyped_ros_message);
  // Field name: tcpa
  {
    cdr >> ros_message->tcpa;
  }

  // Field name: dcpa
  {
    cdr >> ros_message->dcpa;
  }

  // Field name: collision_point_x
  {
    cdr >> ros_message->collision_point_x;
  }

  // Field name: collision_point_y
  {
    cdr >> ros_message->collision_point_y;
  }

  // Field name: x_target
  {
    cdr >> ros_message->x_target;
  }

  // Field name: y_target
  {
    cdr >> ros_message->y_target;
  }

  // Field name: x_own
  {
    cdr >> ros_message->x_own;
  }

  // Field name: y_own
  {
    cdr >> ros_message->y_own;
  }

  // Field name: theta_target
  {
    cdr >> ros_message->theta_target;
  }

  // Field name: theta_own
  {
    cdr >> ros_message->theta_own;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_colreg_interfaces
size_t get_serialized_size_colreg_interfaces__msg__Colreg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Colreg__ros_msg_type * ros_message = static_cast<const _Colreg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tcpa
  {
    size_t item_size = sizeof(ros_message->tcpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dcpa
  {
    size_t item_size = sizeof(ros_message->dcpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collision_point_x
  {
    size_t item_size = sizeof(ros_message->collision_point_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collision_point_y
  {
    size_t item_size = sizeof(ros_message->collision_point_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_target
  {
    size_t item_size = sizeof(ros_message->x_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_target
  {
    size_t item_size = sizeof(ros_message->y_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_own
  {
    size_t item_size = sizeof(ros_message->x_own);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_own
  {
    size_t item_size = sizeof(ros_message->y_own);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_target
  {
    size_t item_size = sizeof(ros_message->theta_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_own
  {
    size_t item_size = sizeof(ros_message->theta_own);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Colreg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_colreg_interfaces__msg__Colreg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_colreg_interfaces
size_t max_serialized_size_colreg_interfaces__msg__Colreg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: tcpa
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dcpa
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: collision_point_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: collision_point_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_own
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_own
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: theta_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: theta_own
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Colreg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_colreg_interfaces__msg__Colreg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Colreg = {
  "colreg_interfaces::msg",
  "Colreg",
  _Colreg__cdr_serialize,
  _Colreg__cdr_deserialize,
  _Colreg__get_serialized_size,
  _Colreg__max_serialized_size
};

static rosidl_message_type_support_t _Colreg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Colreg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, colreg_interfaces, msg, Colreg)() {
  return &_Colreg__type_support;
}

#if defined(__cplusplus)
}
#endif
