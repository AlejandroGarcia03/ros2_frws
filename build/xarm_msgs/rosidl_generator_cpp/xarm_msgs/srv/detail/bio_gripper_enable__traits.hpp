// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xarm_msgs:srv/BioGripperEnable.idl
// generated code does not contain a copyright notice

#ifndef XARM_MSGS__SRV__DETAIL__BIO_GRIPPER_ENABLE__TRAITS_HPP_
#define XARM_MSGS__SRV__DETAIL__BIO_GRIPPER_ENABLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xarm_msgs/srv/detail/bio_gripper_enable__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xarm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BioGripperEnable_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: wait
  {
    out << "wait: ";
    rosidl_generator_traits::value_to_yaml(msg.wait, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BioGripperEnable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: wait
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wait: ";
    rosidl_generator_traits::value_to_yaml(msg.wait, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BioGripperEnable_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xarm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarm_msgs::srv::BioGripperEnable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xarm_msgs::srv::BioGripperEnable_Request & msg)
{
  return xarm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xarm_msgs::srv::BioGripperEnable_Request>()
{
  return "xarm_msgs::srv::BioGripperEnable_Request";
}

template<>
inline const char * name<xarm_msgs::srv::BioGripperEnable_Request>()
{
  return "xarm_msgs/srv/BioGripperEnable_Request";
}

template<>
struct has_fixed_size<xarm_msgs::srv::BioGripperEnable_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xarm_msgs::srv::BioGripperEnable_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xarm_msgs::srv::BioGripperEnable_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xarm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BioGripperEnable_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ret
  {
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BioGripperEnable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ret
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BioGripperEnable_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xarm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarm_msgs::srv::BioGripperEnable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xarm_msgs::srv::BioGripperEnable_Response & msg)
{
  return xarm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xarm_msgs::srv::BioGripperEnable_Response>()
{
  return "xarm_msgs::srv::BioGripperEnable_Response";
}

template<>
inline const char * name<xarm_msgs::srv::BioGripperEnable_Response>()
{
  return "xarm_msgs/srv/BioGripperEnable_Response";
}

template<>
struct has_fixed_size<xarm_msgs::srv::BioGripperEnable_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xarm_msgs::srv::BioGripperEnable_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xarm_msgs::srv::BioGripperEnable_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xarm_msgs::srv::BioGripperEnable>()
{
  return "xarm_msgs::srv::BioGripperEnable";
}

template<>
inline const char * name<xarm_msgs::srv::BioGripperEnable>()
{
  return "xarm_msgs/srv/BioGripperEnable";
}

template<>
struct has_fixed_size<xarm_msgs::srv::BioGripperEnable>
  : std::integral_constant<
    bool,
    has_fixed_size<xarm_msgs::srv::BioGripperEnable_Request>::value &&
    has_fixed_size<xarm_msgs::srv::BioGripperEnable_Response>::value
  >
{
};

template<>
struct has_bounded_size<xarm_msgs::srv::BioGripperEnable>
  : std::integral_constant<
    bool,
    has_bounded_size<xarm_msgs::srv::BioGripperEnable_Request>::value &&
    has_bounded_size<xarm_msgs::srv::BioGripperEnable_Response>::value
  >
{
};

template<>
struct is_service<xarm_msgs::srv::BioGripperEnable>
  : std::true_type
{
};

template<>
struct is_service_request<xarm_msgs::srv::BioGripperEnable_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xarm_msgs::srv::BioGripperEnable_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XARM_MSGS__SRV__DETAIL__BIO_GRIPPER_ENABLE__TRAITS_HPP_
