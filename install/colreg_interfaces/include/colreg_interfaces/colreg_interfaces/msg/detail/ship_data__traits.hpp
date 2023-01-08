// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from colreg_interfaces:msg/ShipData.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__TRAITS_HPP_
#define COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "colreg_interfaces/msg/detail/ship_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace colreg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ShipData & msg,
  std::ostream & out)
{
  out << "{";
  // member: tcpa
  {
    out << "tcpa: ";
    rosidl_generator_traits::value_to_yaml(msg.tcpa, out);
    out << ", ";
  }

  // member: dcpa
  {
    out << "dcpa: ";
    rosidl_generator_traits::value_to_yaml(msg.dcpa, out);
    out << ", ";
  }

  // member: collision_point_x
  {
    out << "collision_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_point_x, out);
    out << ", ";
  }

  // member: collision_point_y
  {
    out << "collision_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_point_y, out);
    out << ", ";
  }

  // member: x_target
  {
    out << "x_target: ";
    rosidl_generator_traits::value_to_yaml(msg.x_target, out);
    out << ", ";
  }

  // member: y_target
  {
    out << "y_target: ";
    rosidl_generator_traits::value_to_yaml(msg.y_target, out);
    out << ", ";
  }

  // member: x_own
  {
    out << "x_own: ";
    rosidl_generator_traits::value_to_yaml(msg.x_own, out);
    out << ", ";
  }

  // member: y_own
  {
    out << "y_own: ";
    rosidl_generator_traits::value_to_yaml(msg.y_own, out);
    out << ", ";
  }

  // member: theta_target
  {
    out << "theta_target: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_target, out);
    out << ", ";
  }

  // member: theta_own
  {
    out << "theta_own: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_own, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ShipData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tcpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tcpa: ";
    rosidl_generator_traits::value_to_yaml(msg.tcpa, out);
    out << "\n";
  }

  // member: dcpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcpa: ";
    rosidl_generator_traits::value_to_yaml(msg.dcpa, out);
    out << "\n";
  }

  // member: collision_point_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_point_x, out);
    out << "\n";
  }

  // member: collision_point_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_point_y, out);
    out << "\n";
  }

  // member: x_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_target: ";
    rosidl_generator_traits::value_to_yaml(msg.x_target, out);
    out << "\n";
  }

  // member: y_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_target: ";
    rosidl_generator_traits::value_to_yaml(msg.y_target, out);
    out << "\n";
  }

  // member: x_own
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_own: ";
    rosidl_generator_traits::value_to_yaml(msg.x_own, out);
    out << "\n";
  }

  // member: y_own
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_own: ";
    rosidl_generator_traits::value_to_yaml(msg.y_own, out);
    out << "\n";
  }

  // member: theta_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_target: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_target, out);
    out << "\n";
  }

  // member: theta_own
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_own: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_own, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ShipData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace colreg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use colreg_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const colreg_interfaces::msg::ShipData & msg,
  std::ostream & out, size_t indentation = 0)
{
  colreg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use colreg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const colreg_interfaces::msg::ShipData & msg)
{
  return colreg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<colreg_interfaces::msg::ShipData>()
{
  return "colreg_interfaces::msg::ShipData";
}

template<>
inline const char * name<colreg_interfaces::msg::ShipData>()
{
  return "colreg_interfaces/msg/ShipData";
}

template<>
struct has_fixed_size<colreg_interfaces::msg::ShipData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<colreg_interfaces::msg::ShipData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<colreg_interfaces::msg::ShipData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COLREG_INTERFACES__MSG__DETAIL__SHIP_DATA__TRAITS_HPP_
