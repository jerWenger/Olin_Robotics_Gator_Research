// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from direction_interfaces:msg/Direction.idl
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
#include "direction_interfaces/msg/detail/direction__struct.h"
#include "direction_interfaces/msg/detail/direction__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool direction_interfaces__msg__direction__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("direction_interfaces.msg._direction.Direction", full_classname_dest, 45) == 0);
  }
  direction_interfaces__msg__Direction * ros_message = _ros_message;
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->direction, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // left_weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_weight = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_weight = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_weight = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * direction_interfaces__msg__direction__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Direction */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("direction_interfaces.msg._direction");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Direction");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  direction_interfaces__msg__Direction * ros_message = (direction_interfaces__msg__Direction *)raw_ros_message;
  {  // direction
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->direction.data,
      strlen(ros_message->direction.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
