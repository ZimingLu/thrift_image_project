/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ServiceForExceptionWithAMap_H
#define ServiceForExceptionWithAMap_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "DebugProtoTest_types.h"

namespace thrift { namespace test { namespace debug {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class ServiceForExceptionWithAMapIf {
 public:
  virtual ~ServiceForExceptionWithAMapIf() {}
  virtual void methodThatThrowsAnException() = 0;
};

class ServiceForExceptionWithAMapIfFactory {
 public:
  typedef ServiceForExceptionWithAMapIf Handler;

  virtual ~ServiceForExceptionWithAMapIfFactory() {}

  virtual ServiceForExceptionWithAMapIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ServiceForExceptionWithAMapIf* /* handler */) = 0;
};

class ServiceForExceptionWithAMapIfSingletonFactory : virtual public ServiceForExceptionWithAMapIfFactory {
 public:
  ServiceForExceptionWithAMapIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<ServiceForExceptionWithAMapIf>& iface) : iface_(iface) {}
  virtual ~ServiceForExceptionWithAMapIfSingletonFactory() {}

  virtual ServiceForExceptionWithAMapIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ServiceForExceptionWithAMapIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<ServiceForExceptionWithAMapIf> iface_;
};

class ServiceForExceptionWithAMapNull : virtual public ServiceForExceptionWithAMapIf {
 public:
  virtual ~ServiceForExceptionWithAMapNull() {}
  void methodThatThrowsAnException() {
    return;
  }
};


class ServiceForExceptionWithAMap_methodThatThrowsAnException_args {
 public:

  ServiceForExceptionWithAMap_methodThatThrowsAnException_args(const ServiceForExceptionWithAMap_methodThatThrowsAnException_args&);
  ServiceForExceptionWithAMap_methodThatThrowsAnException_args& operator=(const ServiceForExceptionWithAMap_methodThatThrowsAnException_args&);
  ServiceForExceptionWithAMap_methodThatThrowsAnException_args() {
  }

  virtual ~ServiceForExceptionWithAMap_methodThatThrowsAnException_args() throw();

  bool operator == (const ServiceForExceptionWithAMap_methodThatThrowsAnException_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ServiceForExceptionWithAMap_methodThatThrowsAnException_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServiceForExceptionWithAMap_methodThatThrowsAnException_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ServiceForExceptionWithAMap_methodThatThrowsAnException_pargs {
 public:


  virtual ~ServiceForExceptionWithAMap_methodThatThrowsAnException_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ServiceForExceptionWithAMap_methodThatThrowsAnException_result__isset {
  _ServiceForExceptionWithAMap_methodThatThrowsAnException_result__isset() : xwamap(false) {}
  bool xwamap :1;
} _ServiceForExceptionWithAMap_methodThatThrowsAnException_result__isset;

class ServiceForExceptionWithAMap_methodThatThrowsAnException_result {
 public:

  ServiceForExceptionWithAMap_methodThatThrowsAnException_result(const ServiceForExceptionWithAMap_methodThatThrowsAnException_result&);
  ServiceForExceptionWithAMap_methodThatThrowsAnException_result& operator=(const ServiceForExceptionWithAMap_methodThatThrowsAnException_result&);
  ServiceForExceptionWithAMap_methodThatThrowsAnException_result() {
  }

  virtual ~ServiceForExceptionWithAMap_methodThatThrowsAnException_result() throw();
  ExceptionWithAMap xwamap;

  _ServiceForExceptionWithAMap_methodThatThrowsAnException_result__isset __isset;

  void __set_xwamap(const ExceptionWithAMap& val);

  bool operator == (const ServiceForExceptionWithAMap_methodThatThrowsAnException_result & rhs) const
  {
    if (!(xwamap == rhs.xwamap))
      return false;
    return true;
  }
  bool operator != (const ServiceForExceptionWithAMap_methodThatThrowsAnException_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServiceForExceptionWithAMap_methodThatThrowsAnException_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ServiceForExceptionWithAMap_methodThatThrowsAnException_presult__isset {
  _ServiceForExceptionWithAMap_methodThatThrowsAnException_presult__isset() : xwamap(false) {}
  bool xwamap :1;
} _ServiceForExceptionWithAMap_methodThatThrowsAnException_presult__isset;

class ServiceForExceptionWithAMap_methodThatThrowsAnException_presult {
 public:


  virtual ~ServiceForExceptionWithAMap_methodThatThrowsAnException_presult() throw();
  ExceptionWithAMap xwamap;

  _ServiceForExceptionWithAMap_methodThatThrowsAnException_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class ServiceForExceptionWithAMapClient : virtual public ServiceForExceptionWithAMapIf {
 public:
  ServiceForExceptionWithAMapClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ServiceForExceptionWithAMapClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void methodThatThrowsAnException();
  void send_methodThatThrowsAnException();
  void recv_methodThatThrowsAnException();
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ServiceForExceptionWithAMapProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<ServiceForExceptionWithAMapIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ServiceForExceptionWithAMapProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_methodThatThrowsAnException(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ServiceForExceptionWithAMapProcessor(::apache::thrift::stdcxx::shared_ptr<ServiceForExceptionWithAMapIf> iface) :
    iface_(iface) {
    processMap_["methodThatThrowsAnException"] = &ServiceForExceptionWithAMapProcessor::process_methodThatThrowsAnException;
  }

  virtual ~ServiceForExceptionWithAMapProcessor() {}
};

class ServiceForExceptionWithAMapProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ServiceForExceptionWithAMapProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< ServiceForExceptionWithAMapIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< ServiceForExceptionWithAMapIfFactory > handlerFactory_;
};

class ServiceForExceptionWithAMapMultiface : virtual public ServiceForExceptionWithAMapIf {
 public:
  ServiceForExceptionWithAMapMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<ServiceForExceptionWithAMapIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ServiceForExceptionWithAMapMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<ServiceForExceptionWithAMapIf> > ifaces_;
  ServiceForExceptionWithAMapMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<ServiceForExceptionWithAMapIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void methodThatThrowsAnException() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->methodThatThrowsAnException();
    }
    ifaces_[i]->methodThatThrowsAnException();
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class ServiceForExceptionWithAMapConcurrentClient : virtual public ServiceForExceptionWithAMapIf {
 public:
  ServiceForExceptionWithAMapConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ServiceForExceptionWithAMapConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void methodThatThrowsAnException();
  int32_t send_methodThatThrowsAnException();
  void recv_methodThatThrowsAnException(const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

}}} // namespace

#endif
