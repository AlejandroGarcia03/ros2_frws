// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_msg_interfaces:msg/MyParameter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_msg_interfaces/msg/detail/my_parameter__rosidl_typesupport_introspection_c.h"
#include "my_msg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_msg_interfaces/msg/detail/my_parameter__functions.h"
#include "my_msg_interfaces/msg/detail/my_parameter__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_msg_interfaces__msg__MyParameter__init(message_memory);
}

void my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_fini_function(void * message_memory)
{
  my_msg_interfaces__msg__MyParameter__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_message_member_array[7] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msg_interfaces__msg__MyParameter, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ampl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msg_interfaces__msg__MyParameter, ampl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "freq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msg_interfaces__msg__MyParameter, freq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msg_interfaces__msg__MyParameter, offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msg_interfaces__msg__MyParameter, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msg_interfaces__msg__MyParameter, signal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msg_interfaces__msg__MyParameter, phas),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_message_members = {
  "my_msg_interfaces__msg",  // message namespace
  "MyParameter",  // message name
  7,  // number of fields
  sizeof(my_msg_interfaces__msg__MyParameter),
  my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_message_member_array,  // message members
  my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_init_function,  // function to initialize message memory (memory has to be allocated)
  my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_message_type_support_handle = {
  0,
  &my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_msg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_msg_interfaces, msg, MyParameter)() {
  if (!my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_message_type_support_handle.typesupport_identifier) {
    my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_msg_interfaces__msg__MyParameter__rosidl_typesupport_introspection_c__MyParameter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
