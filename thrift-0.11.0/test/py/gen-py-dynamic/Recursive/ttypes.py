#
# Autogenerated by Thrift Compiler (0.11.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py:dynamic
#

from thrift.Thrift import TType, TMessageType, TFrozenDict, TException, TApplicationException
from thrift.protocol.TProtocol import TProtocolException
from thrift.TRecursive import fix_spec

import sys

from thrift.transport import TTransport
from thrift.protocol.TBase import TBase, TFrozenBase, TExceptionBase, TTransport
all_structs = []


class RecTree(TBase):
    """
    Attributes:
     - children
     - item
    """


    def __init__(self, children=None, item=None,):
        self.children = children
        self.item = item

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class RecList(TBase):
    """
    Attributes:
     - nextitem
     - item
    """


    def __init__(self, nextitem=None, item=None,):
        self.nextitem = nextitem
        self.item = item

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class CoRec(TBase):
    """
    Attributes:
     - other
    """


    def __init__(self, other=None,):
        self.other = other

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class CoRec2(TBase):
    """
    Attributes:
     - other
    """


    def __init__(self, other=None,):
        self.other = other

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class VectorTest(TBase):
    """
    Attributes:
     - lister
    """


    def __init__(self, lister=None,):
        self.lister = lister

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(RecTree)
RecTree.thrift_spec = (
    None,  # 0
    (1, TType.LIST, 'children', (TType.STRUCT, [RecTree, None], False), None, ),  # 1
    (2, TType.I16, 'item', None, None, ),  # 2
)
all_structs.append(RecList)
RecList.thrift_spec = (
    None,  # 0
    (1, TType.STRUCT, 'nextitem', [RecList, None], None, ),  # 1
    None,  # 2
    (3, TType.I16, 'item', None, None, ),  # 3
)
all_structs.append(CoRec)
CoRec.thrift_spec = (
    None,  # 0
    (1, TType.STRUCT, 'other', [CoRec2, None], None, ),  # 1
)
all_structs.append(CoRec2)
CoRec2.thrift_spec = (
    None,  # 0
    (1, TType.STRUCT, 'other', [CoRec, None], None, ),  # 1
)
all_structs.append(VectorTest)
VectorTest.thrift_spec = (
    None,  # 0
    (1, TType.LIST, 'lister', (TType.STRUCT, [RecList, None], False), None, ),  # 1
)
fix_spec(all_structs)
del all_structs
