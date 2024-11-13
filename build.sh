#!/bin/bash

# 设置 proto 文件目录
PROTO_DIR="./proto"

# 生成 proto 文件
protoc --cpp_out=. $PROTO_DIR/NetworkTest.proto
protoc --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` $PROTO_DIR/NetworkTest.proto

if [ $? -eq 0 ]; then
  echo "Proto files generated successfully."

  # 创建并进入 build 目录
  mkdir -p build
  cd build

  # 运行 cmake 和 make
  cmake ..
  make -j8

  if [ $? -eq 0 ]; then
    echo "Build successful. Running tests..."
  else
    echo "Build failed."
  fi
else
  echo "Failed to generate proto files."
fi