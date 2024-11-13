#include "client.h"

TcpClient::TcpClient()
    : fd_(socket(AF_INET, SOCK_STREAM, 0)),
      socket_(std::make_unique<TcpSocket>(fd_)) {}

TcpClient::~TcpClient() {
  close(fd_);
}

bool TcpClient::connectToHost(const char* ip, unsigned short port) {
  return true;
}
