#
# Autogenerated by Thrift Compiler (0.11.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py:old_style
#

from thrift.Thrift import TType, TMessageType, TFrozenDict, TException, TApplicationException
from thrift.protocol.TProtocol import TProtocolException
from thrift.TRecursive import fix_spec

import sys
import logging
from .ttypes import *
from thrift.Thrift import TProcessor
from thrift.transport import TTransport
all_structs = []


class Iface:
    def myMethod(self, first, second, third, fourth):
        """
        Parameters:
         - first
         - second
         - third
         - fourth
        """
        pass


class Client(Iface):
    def __init__(self, iprot, oprot=None):
        self._iprot = self._oprot = iprot
        if oprot is not None:
            self._oprot = oprot
        self._seqid = 0

    def myMethod(self, first, second, third, fourth):
        """
        Parameters:
         - first
         - second
         - third
         - fourth
        """
        self.send_myMethod(first, second, third, fourth)
        self.recv_myMethod()

    def send_myMethod(self, first, second, third, fourth):
        self._oprot.writeMessageBegin('myMethod', TMessageType.CALL, self._seqid)
        args = myMethod_args()
        args.first = first
        args.second = second
        args.third = third
        args.fourth = fourth
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_myMethod(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = myMethod_result()
        result.read(iprot)
        iprot.readMessageEnd()
        return


class Processor(Iface, TProcessor):
    def __init__(self, handler):
        self._handler = handler
        self._processMap = {}
        self._processMap["myMethod"] = Processor.process_myMethod

    def process(self, iprot, oprot):
        (name, type, seqid) = iprot.readMessageBegin()
        if name not in self._processMap:
            iprot.skip(TType.STRUCT)
            iprot.readMessageEnd()
            x = TApplicationException(TApplicationException.UNKNOWN_METHOD, 'Unknown function %s' % (name))
            oprot.writeMessageBegin(name, TMessageType.EXCEPTION, seqid)
            x.write(oprot)
            oprot.writeMessageEnd()
            oprot.trans.flush()
            return
        else:
            self._processMap[name](self, seqid, iprot, oprot)
        return True

    def process_myMethod(self, seqid, iprot, oprot):
        args = myMethod_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = myMethod_result()
        try:
            self._handler.myMethod(args.first, args.second, args.third, args.fourth)
            msg_type = TMessageType.REPLY
        except TTransport.TTransportException:
            raise
        except TApplicationException as ex:
            logging.exception('TApplication exception in handler')
            msg_type = TMessageType.EXCEPTION
            result = ex
        except Exception:
            logging.exception('Unexpected exception in handler')
            msg_type = TMessageType.EXCEPTION
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("myMethod", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

# HELPER FUNCTIONS AND STRUCTURES


class myMethod_args:
    """
    Attributes:
     - first
     - second
     - third
     - fourth
    """


    def __init__(self, first=None, second=None, third=None, fourth=None,):
        self.first = first
        self.second = second
        self.third = third
        self.fourth = fourth

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 4:
                if ftype == TType.STRING:
                    self.first = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.I16:
                    self.second = iprot.readI16()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.I32:
                    self.third = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.I64:
                    self.fourth = iprot.readI64()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('myMethod_args')
        if self.fourth is not None:
            oprot.writeFieldBegin('fourth', TType.I64, 1)
            oprot.writeI64(self.fourth)
            oprot.writeFieldEnd()
        if self.third is not None:
            oprot.writeFieldBegin('third', TType.I32, 2)
            oprot.writeI32(self.third)
            oprot.writeFieldEnd()
        if self.second is not None:
            oprot.writeFieldBegin('second', TType.I16, 3)
            oprot.writeI16(self.second)
            oprot.writeFieldEnd()
        if self.first is not None:
            oprot.writeFieldBegin('first', TType.STRING, 4)
            oprot.writeString(self.first.encode('utf-8') if sys.version_info[0] == 2 else self.first)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(myMethod_args)
myMethod_args.thrift_spec = (
    None,  # 0
    (1, TType.I64, 'fourth', None, None, ),  # 1
    (2, TType.I32, 'third', None, None, ),  # 2
    (3, TType.I16, 'second', None, None, ),  # 3
    (4, TType.STRING, 'first', 'UTF8', None, ),  # 4
)


class myMethod_result:


    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('myMethod_result')
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(myMethod_result)
myMethod_result.thrift_spec = (
)
fix_spec(all_structs)
del all_structs

