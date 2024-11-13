#include "server.h"

TcpServer::TcpServer()
    : listenfd_(socket(AF_INET, SOCK_STREAM, 0)), socket_(nullptr) {}

TcpServer::~TcpServer() {
  if (listenfd_ != -1) {
    close(listenfd_);
  }
}

bool TcpServer::setListen(unsigned short port) {
  return true;
}

bool TcpServer::acceptConn() {
  return true;
}
