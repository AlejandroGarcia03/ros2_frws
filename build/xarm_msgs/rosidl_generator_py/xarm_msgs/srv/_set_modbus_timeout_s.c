// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xarm_msgs:srv/SetModbusTimeout.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "xarm_msgs/srv/detail/set_modbus_timeout__struct.h"
#include "xarm_msgs/srv/detail/set_modbus_timeout__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool xarm_msgs__srv__set_modbus_timeout__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("xarm_msgs.srv._set_modbus_timeout.SetModbusTimeout_Request", full_classname_dest, 58) == 0);
  }
  xarm_msgs__srv__SetModbusTimeout_Request * ros_message = _ros_message;
  {  // timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timeout = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_transparent_transmission
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_transparent_transmission");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_transparent_transmission = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xarm_msgs__srv__set_modbus_timeout__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetModbusTimeout_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xarm_msgs.srv._set_modbus_timeout");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetModbusTimeout_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xarm_msgs__srv__SetModbusTimeout_Request * ros_message = (xarm_msgs__srv__SetModbusTimeout_Request *)raw_ros_message;
  {  // timeout
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->timeout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_transparent_transmission
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_transparent_transmission ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_transparent_transmission", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "xarm_msgs/srv/detail/set_modbus_timeout__struct.h"
// already included above
// #include "xarm_msgs/srv/detail/set_modbus_timeout__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool xarm_msgs__srv__set_modbus_timeout__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("xarm_msgs.srv._set_modbus_timeout.SetModbusTimeout_Response", full_classname_dest, 59) == 0);
  }
  xarm_msgs__srv__SetModbusTimeout_Response * ros_message = _ros_message;
  {  // ret
    PyObject * field = PyObject_GetAttrString(_pymsg, "ret");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ret = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xarm_msgs__srv__set_modbus_timeout__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetModbusTimeout_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xarm_msgs.srv._set_modbus_timeout");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetModbusTimeout_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xarm_msgs__srv__SetModbusTimeout_Response * ros_message = (xarm_msgs__srv__SetModbusTimeout_Response *)raw_ros_message;
  {  // ret
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ret);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ret", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
