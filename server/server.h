#include "../socket/socket.h"
#include <memory>

class TcpServer {
  public:
  TcpServer();
  ~TcpServer();

  /**
   * @brief 获取当前连接的通信套接字
   * @return 返回TcpSocket指针
   */
  TcpSocket* getSocket() const { return socket_.get(); }

  /**
   * @brief 设置服务器监听端口
   * @param port 监听的端口号
   * @return 成功返回true，失败返回false
   */
  bool setListen(unsigned short port);

  /**
   * @brief 接受客户端连接
   * @return 成功返回true，失败返回false
   */
  bool acceptConn();

  private:
  // 监听套接字
  int listenfd_;
  // 通信类对象
  std::unique_ptr<TcpSocket> socket_;
};
