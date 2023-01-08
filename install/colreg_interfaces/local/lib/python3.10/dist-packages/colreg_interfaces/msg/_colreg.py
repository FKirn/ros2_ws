# generated from rosidl_generator_py/resource/_idl.py.em
# with input from colreg_interfaces:msg/Colreg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Colreg(type):
    """Metaclass of message 'Colreg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('colreg_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'colreg_interfaces.msg.Colreg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__colreg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__colreg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__colreg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__colreg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__colreg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Colreg(metaclass=Metaclass_Colreg):
    """Message class 'Colreg'."""

    __slots__ = [
        '_tcpa',
        '_dcpa',
        '_collision_point_x',
        '_collision_point_y',
        '_x_target',
        '_y_target',
        '_x_own',
        '_y_own',
        '_theta_target',
        '_theta_own',
    ]

    _fields_and_field_types = {
        'tcpa': 'float',
        'dcpa': 'float',
        'collision_point_x': 'float',
        'collision_point_y': 'float',
        'x_target': 'float',
        'y_target': 'float',
        'x_own': 'float',
        'y_own': 'float',
        'theta_target': 'float',
        'theta_own': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tcpa = kwargs.get('tcpa', float())
        self.dcpa = kwargs.get('dcpa', float())
        self.collision_point_x = kwargs.get('collision_point_x', float())
        self.collision_point_y = kwargs.get('collision_point_y', float())
        self.x_target = kwargs.get('x_target', float())
        self.y_target = kwargs.get('y_target', float())
        self.x_own = kwargs.get('x_own', float())
        self.y_own = kwargs.get('y_own', float())
        self.theta_target = kwargs.get('theta_target', float())
        self.theta_own = kwargs.get('theta_own', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.tcpa != other.tcpa:
            return False
        if self.dcpa != other.dcpa:
            return False
        if self.collision_point_x != other.collision_point_x:
            return False
        if self.collision_point_y != other.collision_point_y:
            return False
        if self.x_target != other.x_target:
            return False
        if self.y_target != other.y_target:
            return False
        if self.x_own != other.x_own:
            return False
        if self.y_own != other.y_own:
            return False
        if self.theta_target != other.theta_target:
            return False
        if self.theta_own != other.theta_own:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tcpa(self):
        """Message field 'tcpa'."""
        return self._tcpa

    @tcpa.setter
    def tcpa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tcpa' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'tcpa' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._tcpa = value

    @builtins.property
    def dcpa(self):
        """Message field 'dcpa'."""
        return self._dcpa

    @dcpa.setter
    def dcpa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dcpa' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'dcpa' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._dcpa = value

    @builtins.property
    def collision_point_x(self):
        """Message field 'collision_point_x'."""
        return self._collision_point_x

    @collision_point_x.setter
    def collision_point_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'collision_point_x' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'collision_point_x' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._collision_point_x = value

    @builtins.property
    def collision_point_y(self):
        """Message field 'collision_point_y'."""
        return self._collision_point_y

    @collision_point_y.setter
    def collision_point_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'collision_point_y' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'collision_point_y' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._collision_point_y = value

    @builtins.property
    def x_target(self):
        """Message field 'x_target'."""
        return self._x_target

    @x_target.setter
    def x_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_target' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'x_target' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._x_target = value

    @builtins.property
    def y_target(self):
        """Message field 'y_target'."""
        return self._y_target

    @y_target.setter
    def y_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_target' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'y_target' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._y_target = value

    @builtins.property
    def x_own(self):
        """Message field 'x_own'."""
        return self._x_own

    @x_own.setter
    def x_own(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_own' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'x_own' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._x_own = value

    @builtins.property
    def y_own(self):
        """Message field 'y_own'."""
        return self._y_own

    @y_own.setter
    def y_own(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_own' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'y_own' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._y_own = value

    @builtins.property
    def theta_target(self):
        """Message field 'theta_target'."""
        return self._theta_target

    @theta_target.setter
    def theta_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_target' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'theta_target' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._theta_target = value

    @builtins.property
    def theta_own(self):
        """Message field 'theta_own'."""
        return self._theta_own

    @theta_own.setter
    def theta_own(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_own' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'theta_own' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._theta_own = value
