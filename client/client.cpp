#include "client.h"

TcpClient::TcpClient()
    : fd_(socket(AF_INET, SOCK_STREAM, 0)),
      socket_(std::make_unique<TcpSocket>(fd_)) {}

TcpClient::~TcpClient()
{
  close(fd_);
}

bool TcpClient::connectToHost(const char *ip, unsigned short port)
{
  sockaddr_in st;
  memset(&st, 0, sizeof(st));
  st.sin_addr.s_addr = inet_addr(ip);
  st.sin_port = htons(port);
  st.sin_family = AF_INET;
  socklen_t len = sizeof(st);
  int n = connect(fd_, (sockaddr *)&st, len);
  if (n < 0)
  {
    std::cout<<"connect error"<<std::endl;
    return false;
  }
  std::cout<<"connect success"<<std::endl;
  return true;
}