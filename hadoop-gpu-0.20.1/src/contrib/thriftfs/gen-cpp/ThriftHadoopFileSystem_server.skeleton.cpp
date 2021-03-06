// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "ThriftHadoopFileSystem.h"
#include <protocol/TBinaryProtocol.h>
#include <server/TSimpleServer.h>
#include <transport/TServerSocket.h>
#include <transport/TBufferTransports.h>

using namespace facebook::thrift;
using namespace facebook::thrift::protocol;
using namespace facebook::thrift::transport;
using namespace facebook::thrift::server;

using boost::shared_ptr;

class ThriftHadoopFileSystemHandler : virtual public ThriftHadoopFileSystemIf {
 public:
  ThriftHadoopFileSystemHandler() {
    // Your initialization goes here
  }

  void setInactivityTimeoutPeriod(const int64_t periodInSeconds) {
    // Your implementation goes here
    printf("setInactivityTimeoutPeriod\n");
  }

  void shutdown(const int32_t status) {
    // Your implementation goes here
    printf("shutdown\n");
  }

  void create(ThriftHandle& _return, const Pathname& path) {
    // Your implementation goes here
    printf("create\n");
  }

  void createFile(ThriftHandle& _return, const Pathname& path, const int16_t mode, const bool overwrite, const int32_t bufferSize, const int16_t block_replication, const int64_t blocksize) {
    // Your implementation goes here
    printf("createFile\n");
  }

  void open(ThriftHandle& _return, const Pathname& path) {
    // Your implementation goes here
    printf("open\n");
  }

  void append(ThriftHandle& _return, const Pathname& path) {
    // Your implementation goes here
    printf("append\n");
  }

  bool write(const ThriftHandle& handle, const std::string& data) {
    // Your implementation goes here
    printf("write\n");
  }

  void read(std::string& _return, const ThriftHandle& handle, const int64_t offset, const int32_t size) {
    // Your implementation goes here
    printf("read\n");
  }

  bool close(const ThriftHandle& out) {
    // Your implementation goes here
    printf("close\n");
  }

  bool rm(const Pathname& path, const bool recursive) {
    // Your implementation goes here
    printf("rm\n");
  }

  bool rename(const Pathname& path, const Pathname& dest) {
    // Your implementation goes here
    printf("rename\n");
  }

  bool mkdirs(const Pathname& path) {
    // Your implementation goes here
    printf("mkdirs\n");
  }

  bool exists(const Pathname& path) {
    // Your implementation goes here
    printf("exists\n");
  }

  void stat(FileStatus& _return, const Pathname& path) {
    // Your implementation goes here
    printf("stat\n");
  }

  void listStatus(std::vector<FileStatus> & _return, const Pathname& path) {
    // Your implementation goes here
    printf("listStatus\n");
  }

  void chmod(const Pathname& path, const int16_t mode) {
    // Your implementation goes here
    printf("chmod\n");
  }

  void chown(const Pathname& path, const std::string& owner, const std::string& group) {
    // Your implementation goes here
    printf("chown\n");
  }

  void setReplication(const Pathname& path, const int16_t replication) {
    // Your implementation goes here
    printf("setReplication\n");
  }

  void getFileBlockLocations(std::vector<BlockLocation> & _return, const Pathname& path, const int64_t start, const int64_t length) {
    // Your implementation goes here
    printf("getFileBlockLocations\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<ThriftHadoopFileSystemHandler> handler(new ThriftHadoopFileSystemHandler());
  shared_ptr<TProcessor> processor(new ThriftHadoopFileSystemProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

