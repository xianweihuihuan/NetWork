#include "server.h"

TcpServer::TcpServer()
    : listenfd_(socket(AF_INET, SOCK_STREAM, 0)), socket_(nullptr) {}

TcpServer::~TcpServer() {
  if (listenfd_ != -1) {
    close(listenfd_);
  }
}

bool TcpServer::setListen(unsigned short port) {
  sockaddr_in st;
  memset(&st,0,sizeof(st));
  st.sin_addr.s_addr = INADDR_ANY;
  st.sin_family = AF_INET;
  st.sin_port = htons(port);
  socklen_t len = sizeof(st);
  bind(listenfd_,(sockaddr*)&st,len);
  int n = listen(listenfd_,8);
  if(n < 0) {
    std::cout<<"listen error"<<std::endl;
    return false;
  }
  std::cout<<"listen success"<<std::endl;
  return true;
}

bool TcpServer::acceptConn() {
  sockaddr_in st;
  socklen_t len = sizeof(st);
  int fd = accept(listenfd_,(sockaddr*)&st,&len);
  if(fd < 0){
    std::cout<<"accept error"<<std::endl;
    return false;
  }
  std::cout<<"accept a new connect, fd:"<<fd<<std::endl;
  socket_ = std::make_unique<TcpSocket>(fd);
  //std::cout<<socket_->Fd()<<std::endl;
  return true;
}
