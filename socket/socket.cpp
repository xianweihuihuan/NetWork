#include "socket.h"
int i = 1;
int j = 1;
TcpSocket::TcpSocket(int sockfd) : sockfd_(sockfd) {}

TcpSocket::~TcpSocket()
{
  close(sockfd_);
}

int TcpSocket::sendMsg(std::string msg)
{
  std::string message = std::to_string(msg.size()) + Sep + msg + Sep;
  int n = send(sockfd_, message.c_str(), message.size(), 0);
  if (n < 0)
  {
    std::cout<<"send fail"<<std::endl;
    return -1;
  }
  //std::cout<<message<<std::endl;
  std::cout<<"send success"<<j++<<std::endl;
  return 0;
}

int TcpSocket::recvMsg(std::string &msg)
{
  char buffer[1024 * 8];
  int n = recv(sockfd_,buffer,sizeof(buffer),0);
  if(n > 0){
    buffer[n] = 0;
    std::cout<<"recv success"<< i++ <<std::endl;
    //std::cout<<buffer<<std::endl;
  }
  if(n < 0){
    std::cout<<"recv error"<<std::endl;
    return -1;
  }
  msg = buffer;
  if(!std::isdigit(msg[0])){
    return -1;
  }
  auto pos = msg.find(Sep);
  if(pos > 6){
    return -1;
  }
  //std::cout<<msg.size()<<std::endl;
  //std::cout<<pos<<std::endl;
  if(pos == -1) {
    return -1;
  }

  //std::cout<<msg<<std::endl;
  std::string sz = msg.substr(0, pos);
  //std::cout<<sz<<std::endl;
  int size = std::stoi(sz);
  //std::cout<<"1111111111111111111111111111"<<std::endl;
  int msz = sz.size() + size + 2 * Sepsz;
  if (msg.size() >= msz)
  {
    std::string message = msg.substr(pos + Sepsz, msz - 2 * Sepsz);
    msg.clear();
    return 0;
  }
  return -1;
}

