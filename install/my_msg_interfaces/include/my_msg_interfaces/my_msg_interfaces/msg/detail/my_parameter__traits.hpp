// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_msg_interfaces:msg/MyParameter.idl
// generated code does not contain a copyright notice

#ifndef MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__TRAITS_HPP_
#define MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_msg_interfaces/msg/detail/my_parameter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_msg_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyParameter & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: ampl
  {
    out << "ampl: ";
    rosidl_generator_traits::value_to_yaml(msg.ampl, out);
    out << ", ";
  }

  // member: freq
  {
    out << "freq: ";
    rosidl_generator_traits::value_to_yaml(msg.freq, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: signal
  {
    out << "signal: ";
    rosidl_generator_traits::value_to_yaml(msg.signal, out);
    out << ", ";
  }

  // member: phas
  {
    out << "phas: ";
    rosidl_generator_traits::value_to_yaml(msg.phas, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyParameter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: ampl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ampl: ";
    rosidl_generator_traits::value_to_yaml(msg.ampl, out);
    out << "\n";
  }

  // member: freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq: ";
    rosidl_generator_traits::value_to_yaml(msg.freq, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal: ";
    rosidl_generator_traits::value_to_yaml(msg.signal, out);
    out << "\n";
  }

  // member: phas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phas: ";
    rosidl_generator_traits::value_to_yaml(msg.phas, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyParameter & msg, bool use_flow_style = false)
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

}  // namespace my_msg_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_msg_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_msg_interfaces::msg::MyParameter & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_msg_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_msg_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_msg_interfaces::msg::MyParameter & msg)
{
  return my_msg_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_msg_interfaces::msg::MyParameter>()
{
  return "my_msg_interfaces::msg::MyParameter";
}

template<>
inline const char * name<my_msg_interfaces::msg::MyParameter>()
{
  return "my_msg_interfaces/msg/MyParameter";
}

template<>
struct has_fixed_size<my_msg_interfaces::msg::MyParameter>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_msg_interfaces::msg::MyParameter>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_msg_interfaces::msg::MyParameter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_MSG_INTERFACES__MSG__DETAIL__MY_PARAMETER__TRAITS_HPP_
