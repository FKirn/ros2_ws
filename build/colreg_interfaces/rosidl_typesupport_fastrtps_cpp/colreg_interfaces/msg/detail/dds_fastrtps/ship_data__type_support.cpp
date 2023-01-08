// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from colreg_interfaces:msg/ShipData.idl
// generated code does not contain a copyright notice
#include "colreg_interfaces/msg/detail/ship_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "colreg_interfaces/msg/detail/ship_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace colreg_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_colreg_interfaces
cdr_serialize(
  const colreg_interfaces::msg::ShipData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tcpa
  cdr << ros_message.tcpa;
  // Member: dcpa
  cdr << ros_message.dcpa;
  // Member: collision_point_x
  cdr << ros_message.collision_point_x;
  // Member: collision_point_y
  cdr << ros_message.collision_point_y;
  // Member: x_target
  cdr << ros_message.x_target;
  // Member: y_target
  cdr << ros_message.y_target;
  // Member: x_own
  cdr << ros_message.x_own;
  // Member: y_own
  cdr << ros_message.y_own;
  // Member: theta_target
  cdr << ros_message.theta_target;
  // Member: theta_own
  cdr << ros_message.theta_own;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_colreg_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  colreg_interfaces::msg::ShipData & ros_message)
{
  // Member: tcpa
  cdr >> ros_message.tcpa;

  // Member: dcpa
  cdr >> ros_message.dcpa;

  // Member: collision_point_x
  cdr >> ros_message.collision_point_x;

  // Member: collision_point_y
  cdr >> ros_message.collision_point_y;

  // Member: x_target
  cdr >> ros_message.x_target;

  // Member: y_target
  cdr >> ros_message.y_target;

  // Member: x_own
  cdr >> ros_message.x_own;

  // Member: y_own
  cdr >> ros_message.y_own;

  // Member: theta_target
  cdr >> ros_message.theta_target;

  // Member: theta_own
  cdr >> ros_message.theta_own;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_colreg_interfaces
get_serialized_size(
  const colreg_interfaces::msg::ShipData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tcpa
  {
    size_t item_size = sizeof(ros_message.tcpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dcpa
  {
    size_t item_size = sizeof(ros_message.dcpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: collision_point_x
  {
    size_t item_size = sizeof(ros_message.collision_point_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: collision_point_y
  {
    size_t item_size = sizeof(ros_message.collision_point_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_target
  {
    size_t item_size = sizeof(ros_message.x_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_target
  {
    size_t item_size = sizeof(ros_message.y_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_own
  {
    size_t item_size = sizeof(ros_message.x_own);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_own
  {
    size_t item_size = sizeof(ros_message.y_own);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_target
  {
    size_t item_size = sizeof(ros_message.theta_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_own
  {
    size_t item_size = sizeof(ros_message.theta_own);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_colreg_interfaces
max_serialized_size_ShipData(
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


  // Member: tcpa
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dcpa
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: collision_point_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: collision_point_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_own
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_own
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: theta_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: theta_own
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ShipData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const colreg_interfaces::msg::ShipData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ShipData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<colreg_interfaces::msg::ShipData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ShipData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const colreg_interfaces::msg::ShipData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ShipData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ShipData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ShipData__callbacks = {
  "colreg_interfaces::msg",
  "ShipData",
  _ShipData__cdr_serialize,
  _ShipData__cdr_deserialize,
  _ShipData__get_serialized_size,
  _ShipData__max_serialized_size
};

static rosidl_message_type_support_t _ShipData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ShipData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace colreg_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_colreg_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<colreg_interfaces::msg::ShipData>()
{
  return &colreg_interfaces::msg::typesupport_fastrtps_cpp::_ShipData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, colreg_interfaces, msg, ShipData)() {
  return &colreg_interfaces::msg::typesupport_fastrtps_cpp::_ShipData__handle;
}

#ifdef __cplusplus
}
#endif
