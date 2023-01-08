// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from colreg_interfaces:msg/ShipData.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "colreg_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "colreg_interfaces/msg/detail/ship_data__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_colreg_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  colreg_interfaces::msg::ShipData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_colreg_interfaces
get_serialized_size(
  const colreg_interfaces::msg::ShipData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_colreg_interfaces
max_serialized_size_ShipData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace colreg_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_colreg_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, colreg_interfaces, msg, ShipData)();

#ifdef __cplusplus
}
#endif

#endif  // COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
