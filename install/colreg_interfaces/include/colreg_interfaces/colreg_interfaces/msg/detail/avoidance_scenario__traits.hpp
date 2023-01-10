// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from colreg_interfaces:msg/AvoidanceScenario.idl
// generated code does not contain a copyright notice

#ifndef COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__TRAITS_HPP_
#define COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "colreg_interfaces/msg/detail/avoidance_scenario__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace colreg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvoidanceScenario & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: scenario
  {
    out << "scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvoidanceScenario & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: scenario
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvoidanceScenario & msg, bool use_flow_style = false)
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
  const colreg_interfaces::msg::AvoidanceScenario & msg,
  std::ostream & out, size_t indentation = 0)
{
  colreg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use colreg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const colreg_interfaces::msg::AvoidanceScenario & msg)
{
  return colreg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<colreg_interfaces::msg::AvoidanceScenario>()
{
  return "colreg_interfaces::msg::AvoidanceScenario";
}

template<>
inline const char * name<colreg_interfaces::msg::AvoidanceScenario>()
{
  return "colreg_interfaces/msg/AvoidanceScenario";
}

template<>
struct has_fixed_size<colreg_interfaces::msg::AvoidanceScenario>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<colreg_interfaces::msg::AvoidanceScenario>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<colreg_interfaces::msg::AvoidanceScenario>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COLREG_INTERFACES__MSG__DETAIL__AVOIDANCE_SCENARIO__TRAITS_HPP_
