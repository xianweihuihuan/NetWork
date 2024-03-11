### TCP 部分

如果你的 Ubuntu 不能正常使用 gRPC 的话，可以试试 Docker pull 下来一个 Arch Linux.

```bash
apt install docker docker.io
gpasswd -a 你的用户名 docker
```

- apt 安装docker 并运行一个 archlinux 实例

```bash
docker pull archlinux 
docker run -it --net=host --name=arch_linux archlinux /bin/bash 
```

- docker exec 启动容器中的一个程序 (注意在宿主系统中，不是在容器中)

```bash
docker start arch_linux
docker exec -it arch_linux /bin/bash
```

- docker 给你提供了一个 Arch Linux 的环境

```bash
// 更换镜像源
echo 'Server = https://mirrors.bfsu.edu.cn/archlinux/$repo/os/$arch' > /etc/pacman.d/mirrorlist
# Arch 的滚包
pacman -Syyu
# 安装本lab的一些包
pacman -S grpc cmake gcc make pkgconfig
```

- 使用 cmake
```bash
cd Network
mkdir build
cmake ..
make -j16
# 在build下将会生成两个client.out 和 server.out
```

同时你也可以在 vscode 中下载 docker 插件.

在你的插件左侧一栏中会有你本机的正在运行的容器。可以右键 attach 进去。在 vscode 里开发。

### LICENSE


本项目采用[知识共享署名-相同方式共享 4.0 国际许可协议](https://creativecommons.org/licenses/by-sa/4.0/)进行许可．
贡献本仓库视为同意贡献内容基于上述协议授权．

![知识共享许可协议](https://i.creativecommons.org/l/by-sa/4.0/88x31.png)