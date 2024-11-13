#include "socket.h"

TcpSocket::TcpSocket(int sockfd) : sockfd_(sockfd) {}

TcpSocket::~TcpSocket() {
  close(sockfd_);
}

int TcpSocket::sendMsg(std::string msg) {
  return 0;
}

int TcpSocket::recvMsg(std::string& msg) {
  return 0;
}
