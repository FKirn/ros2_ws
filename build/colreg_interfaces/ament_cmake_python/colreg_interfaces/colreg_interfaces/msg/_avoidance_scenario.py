# generated from rosidl_generator_py/resource/_idl.py.em
# with input from colreg_interfaces:msg/AvoidanceScenario.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvoidanceScenario(type):
    """Metaclass of message 'AvoidanceScenario'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_COLLISION': 1,
        'HEAD_ON': 2,
        'OVERTAKING': 3,
        'CROSSING_PORT': 4,
        'CROSSING_STARBOARD': 5,
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
                'colreg_interfaces.msg.AvoidanceScenario')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__avoidance_scenario
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__avoidance_scenario
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__avoidance_scenario
            cls._TYPE_SUPPORT = module.type_support_msg__msg__avoidance_scenario
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__avoidance_scenario

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_COLLISION': cls.__constants['NO_COLLISION'],
            'HEAD_ON': cls.__constants['HEAD_ON'],
            'OVERTAKING': cls.__constants['OVERTAKING'],
            'CROSSING_PORT': cls.__constants['CROSSING_PORT'],
            'CROSSING_STARBOARD': cls.__constants['CROSSING_STARBOARD'],
        }

    @property
    def NO_COLLISION(self):
        """Message constant 'NO_COLLISION'."""
        return Metaclass_AvoidanceScenario.__constants['NO_COLLISION']

    @property
    def HEAD_ON(self):
        """Message constant 'HEAD_ON'."""
        return Metaclass_AvoidanceScenario.__constants['HEAD_ON']

    @property
    def OVERTAKING(self):
        """Message constant 'OVERTAKING'."""
        return Metaclass_AvoidanceScenario.__constants['OVERTAKING']

    @property
    def CROSSING_PORT(self):
        """Message constant 'CROSSING_PORT'."""
        return Metaclass_AvoidanceScenario.__constants['CROSSING_PORT']

    @property
    def CROSSING_STARBOARD(self):
        """Message constant 'CROSSING_STARBOARD'."""
        return Metaclass_AvoidanceScenario.__constants['CROSSING_STARBOARD']


class AvoidanceScenario(metaclass=Metaclass_AvoidanceScenario):
    """
    Message class 'AvoidanceScenario'.

    Constants:
      NO_COLLISION
      HEAD_ON
      OVERTAKING
      CROSSING_PORT
      CROSSING_STARBOARD
    """

    __slots__ = [
        '_header',
        '_scenario',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'scenario': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.scenario = kwargs.get('scenario', int())

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
        if self.header != other.header:
            return False
        if self.scenario != other.scenario:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def scenario(self):
        """Message field 'scenario'."""
        return self._scenario

    @scenario.setter
    def scenario(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scenario' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'scenario' field must be an unsigned integer in [0, 255]"
        self._scenario = value
