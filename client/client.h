#include "../socket/socket.h"
#include <memory>

class TcpClient {
  public:
  TcpClient();
  ~TcpClient();

  /**
   * @brief 获取当前连接的通信套接字
   * @return 返回TcpSocket指针
   */
  TcpSocket* getSocket() const { return socket_.get(); }

  /**
   * @brief 连接到主机
   * @param ip 主机的IP地址
   * @param port 主机的端口号
   * @return 成功返回true，失败返回false
   */
  bool connectToHost(const char* ip, unsigned short port);

  private:
  // 通信套接字
  int fd_;
  // 通信类对象
  std::unique_ptr<TcpSocket> socket_;
};
