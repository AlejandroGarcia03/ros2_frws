# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_msg_interfaces:msg/MyParameter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MyParameter(type):
    """Metaclass of message 'MyParameter'."""

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
            module = import_type_support('my_msg_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_msg_interfaces.msg.MyParameter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__my_parameter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__my_parameter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__my_parameter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__my_parameter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__my_parameter

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyParameter(metaclass=Metaclass_MyParameter):
    """Message class 'MyParameter'."""

    __slots__ = [
        '_type',
        '_ampl',
        '_freq',
        '_offset',
        '_time',
        '_signal',
        '_phas',
    ]

    _fields_and_field_types = {
        'type': 'int32',
        'ampl': 'float',
        'freq': 'float',
        'offset': 'float',
        'time': 'int32',
        'signal': 'float',
        'phas': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.ampl = kwargs.get('ampl', float())
        self.freq = kwargs.get('freq', float())
        self.offset = kwargs.get('offset', float())
        self.time = kwargs.get('time', int())
        self.signal = kwargs.get('signal', float())
        self.phas = kwargs.get('phas', float())

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
        if self.type != other.type:
            return False
        if self.ampl != other.ampl:
            return False
        if self.freq != other.freq:
            return False
        if self.offset != other.offset:
            return False
        if self.time != other.time:
            return False
        if self.signal != other.signal:
            return False
        if self.phas != other.phas:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def ampl(self):
        """Message field 'ampl'."""
        return self._ampl

    @ampl.setter
    def ampl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ampl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ampl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ampl = value

    @builtins.property
    def freq(self):
        """Message field 'freq'."""
        return self._freq

    @freq.setter
    def freq(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'freq' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'freq' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._freq = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._offset = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'time' field must be an integer in [-2147483648, 2147483647]"
        self._time = value

    @builtins.property
    def signal(self):
        """Message field 'signal'."""
        return self._signal

    @signal.setter
    def signal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'signal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'signal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._signal = value

    @builtins.property
    def phas(self):
        """Message field 'phas'."""
        return self._phas

    @phas.setter
    def phas(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'phas' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'phas' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._phas = value
