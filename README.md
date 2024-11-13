# TCP 粘包问题

在本次任务中，你需要解决一个 TCP 粘包问题。

## 任务要求
- 使用 C++ 编程
- 掌握 Linux 网络编程

## 环境要求

本项目依赖以下工具：CMake、gRPC、Protobuf

### Ubuntu 用户

Ubuntu 官方库中提供了 Protobuf，但 gRPC 可能需要从源代码编译。

Protobuf 安装
```sh
sudo apt update
sudo apt install -y protobuf-compiler libprotobuf-dev
```

gRPC 安装可以参考 [gRPC C++ 构建](https://github.com/grpc/grpc/blob/master/BUILDING.md)

### Arch 用户
```sh
sudo pacman -S protobuf grpc
```

## 任务需求

你需要完成客户端与服务器的连接和数据传输任务：

- 客户端负责发送字符串，API 位于 [client.h](./client/client.h) 中，你需要在 [client.cpp](./client/client.cpp) 中实现
- 服务端负责接收字符串，API 位于 [server.h](./server/server.h) 中，你需要在 [server.cpp](./server/server.cpp) 中实现

测试时我们会模拟以下苛刻条件：
- 网络干扰
- 网络延迟
- 数据传输时 MTU 小于系统值

传输的数据类型包括 ASCII 和二进制，gRPC 将用于验证字符串传输的正确性。

本任务对 gRPC 和 Protobuf 没有其他要求，有兴趣的同学可以研究代码中如何实现干扰操作。
## 构建运行
clone 该仓库到本地
```sh
git clone git@github.com:xiyou-linuxer/NetWork.git
```

给 [build.sh](./build.sh) 添加可执行权限
```sh
chmod +x build.sh
```

运行该脚本
```sh
./build.sh
```

如果构建成功，会在当前目录下生成两个文件：
- client.out
- server.out

在不同终端同时运行这两个可执行文件，即可开始自动测试

当出现以下输出时，说明你已经通过了所有测试：
```
Congratulations! You Pass The Test!
```

### LICENSE


本项目采用[知识共享署名-相同方式共享 4.0 国际许可协议](https://creativecommons.org/licenses/by-sa/4.0/)进行许可．
贡献本仓库视为同意贡献内容基于上述协议授权．

![知识共享许可协议](https://i.creativecommons.org/l/by-sa/4.0/88x31.png)