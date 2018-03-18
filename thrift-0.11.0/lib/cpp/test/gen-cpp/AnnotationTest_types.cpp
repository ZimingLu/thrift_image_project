/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "AnnotationTest_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>



int _kweekdaysValues[] = {
  weekdays::SUNDAY,
  weekdays::MONDAY,
  weekdays::TUESDAY,
  weekdays::WEDNESDAY,
  weekdays::THURSDAY,
  weekdays::FRIDAY,
  weekdays::SATURDAY
};
const char* _kweekdaysNames[] = {
  "SUNDAY",
  "MONDAY",
  "TUESDAY",
  "WEDNESDAY",
  "THURSDAY",
  "FRIDAY",
  "SATURDAY"
};
const std::map<int, const char*> _weekdays_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(7, _kweekdaysValues, _kweekdaysNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const weekdays::type& val) {
  std::map<int, const char*>::const_iterator it = _weekdays_VALUES_TO_NAMES.find(val);
  if (it != _weekdays_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}


foo::~foo() throw() {
}


void foo::__set_bar(const int32_t val) {
  this->bar = val;
}

void foo::__set_baz(const int32_t val) {
  this->baz = val;
}

void foo::__set_qux(const int32_t val) {
  this->qux = val;
}

void foo::__set_bop(const int32_t val) {
  this->bop = val;
}
std::ostream& operator<<(std::ostream& out, const foo& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t foo::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->bar);
          this->__isset.bar = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->baz);
          this->__isset.baz = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->qux);
          this->__isset.qux = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->bop);
          this->__isset.bop = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t foo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("foo");

  xfer += oprot->writeFieldBegin("bar", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->bar);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("baz", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->baz);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("qux", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->qux);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("bop", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->bop);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(foo &a, foo &b) {
  using ::std::swap;
  swap(a.bar, b.bar);
  swap(a.baz, b.baz);
  swap(a.qux, b.qux);
  swap(a.bop, b.bop);
  swap(a.__isset, b.__isset);
}

foo::foo(const foo& other0) {
  bar = other0.bar;
  baz = other0.baz;
  qux = other0.qux;
  bop = other0.bop;
  __isset = other0.__isset;
}
foo& foo::operator=(const foo& other1) {
  bar = other1.bar;
  baz = other1.baz;
  qux = other1.qux;
  bop = other1.bop;
  __isset = other1.__isset;
  return *this;
}
void foo::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "foo(";
  out << "bar=" << to_string(bar);
  out << ", " << "baz=" << to_string(baz);
  out << ", " << "qux=" << to_string(qux);
  out << ", " << "bop=" << to_string(bop);
  out << ")";
}


foo_error::~foo_error() throw() {
}


void foo_error::__set_error_code(const int32_t val) {
  this->error_code = val;
}

void foo_error::__set_error_msg(const std::string& val) {
  this->error_msg = val;
}
std::ostream& operator<<(std::ostream& out, const foo_error& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t foo_error::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->error_code);
          this->__isset.error_code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->error_msg);
          this->__isset.error_msg = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t foo_error::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("foo_error");

  xfer += oprot->writeFieldBegin("error_code", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->error_code);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("error_msg", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->error_msg);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(foo_error &a, foo_error &b) {
  using ::std::swap;
  swap(a.error_code, b.error_code);
  swap(a.error_msg, b.error_msg);
  swap(a.__isset, b.__isset);
}

foo_error::foo_error(const foo_error& other2) : TException() {
  error_code = other2.error_code;
  error_msg = other2.error_msg;
  __isset = other2.__isset;
}
foo_error& foo_error::operator=(const foo_error& other3) {
  error_code = other3.error_code;
  error_msg = other3.error_msg;
  __isset = other3.__isset;
  return *this;
}
void foo_error::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "foo_error(";
  out << "error_code=" << to_string(error_code);
  out << ", " << "error_msg=" << to_string(error_msg);
  out << ")";
}

const char* foo_error::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: foo_error";
  }
}


ostr_default::~ostr_default() throw() {
}


void ostr_default::__set_bar(const int32_t val) {
  this->bar = val;
}
std::ostream& operator<<(std::ostream& out, const ostr_default& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t ostr_default::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->bar);
          this->__isset.bar = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ostr_default::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ostr_default");

  xfer += oprot->writeFieldBegin("bar", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->bar);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ostr_default &a, ostr_default &b) {
  using ::std::swap;
  swap(a.bar, b.bar);
  swap(a.__isset, b.__isset);
}

ostr_default::ostr_default(const ostr_default& other4) {
  bar = other4.bar;
  __isset = other4.__isset;
}
ostr_default& ostr_default::operator=(const ostr_default& other5) {
  bar = other5.bar;
  __isset = other5.__isset;
  return *this;
}
void ostr_default::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ostr_default(";
  out << "bar=" << to_string(bar);
  out << ")";
}


ostr_custom::~ostr_custom() throw() {
}


void ostr_custom::__set_bar(const int32_t val) {
  this->bar = val;
}

uint32_t ostr_custom::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->bar);
          this->__isset.bar = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ostr_custom::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ostr_custom");

  xfer += oprot->writeFieldBegin("bar", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->bar);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ostr_custom &a, ostr_custom &b) {
  using ::std::swap;
  swap(a.bar, b.bar);
  swap(a.__isset, b.__isset);
}

ostr_custom::ostr_custom(const ostr_custom& other6) {
  bar = other6.bar;
  __isset = other6.__isset;
}
ostr_custom& ostr_custom::operator=(const ostr_custom& other7) {
  bar = other7.bar;
  __isset = other7.__isset;
  return *this;
}

