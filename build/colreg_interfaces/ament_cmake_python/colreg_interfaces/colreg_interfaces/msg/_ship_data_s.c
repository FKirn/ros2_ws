// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from colreg_interfaces:msg/ShipData.idl
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
#include "colreg_interfaces/msg/detail/ship_data__struct.h"
#include "colreg_interfaces/msg/detail/ship_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool colreg_interfaces__msg__ship_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("colreg_interfaces.msg._ship_data.ShipData", full_classname_dest, 41) == 0);
  }
  colreg_interfaces__msg__ShipData * ros_message = _ros_message;
  {  // tcpa
    PyObject * field = PyObject_GetAttrString(_pymsg, "tcpa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tcpa = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dcpa
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcpa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dcpa = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // collision_point_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_point_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->collision_point_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // collision_point_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_point_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->collision_point_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_own
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_own");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_own = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_own
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_own");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_own = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_own
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_own");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_own = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * colreg_interfaces__msg__ship_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ShipData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("colreg_interfaces.msg._ship_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ShipData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  colreg_interfaces__msg__ShipData * ros_message = (colreg_interfaces__msg__ShipData *)raw_ros_message;
  {  // tcpa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tcpa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tcpa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcpa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dcpa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcpa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_point_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->collision_point_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_point_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_point_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->collision_point_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_point_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_own
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_own);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_own", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_own
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_own);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_own", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_own
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_own);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_own", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
