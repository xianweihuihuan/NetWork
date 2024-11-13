#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <cstring>
#include <iostream>
#include <string>

class TcpSocket {
  public:
  TcpSocket(int sockfd);
  ~TcpSocket();

  /**
   * @brief 发送消息
   * @param msg 要发送的消息
   * @return 成功返回0，失败返回-1
   */
  int sendMsg(std::string msg);

  /**
   * @brief 接收消息
   * @param msg 接收到的消息
   * @return 成功返回0，失败返回-1
   */
  int recvMsg(std::string& msg);

  private:
  int sockfd_;
};
