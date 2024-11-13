cmake_minimum_required(VERSION 3.15)
project(Network)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
SET(CMAKE_CXX_STANDARD 17)

SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -g -fsanitize=address")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -g ")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g -O2  -Wall")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}  -Og -g")
SET(CMAKE_BUILE_TYPE "Debug")

# find_package(Protobuf REQUIRED)
find_package(gRPC REQUIRED)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_executable(client.out proto/NetworkTest.grpc.pb.cc proto/NetworkTest.pb.cc test_client.cpp client/client.cpp server/server.cpp socket/socket.cpp)
add_executable(server.out proto/NetworkTest.grpc.pb.cc proto/NetworkTest.pb.cc test_server.cpp server/server.cpp server/server.cpp socket/socket.cpp)

target_link_libraries(
        client.out
        ${PROTOBUF_LIBRARIES}
        gRPC::grpc
        gRPC::grpc++
)
target_link_libraries(
        server.out
        ${PROTOBUF_LIBRARIES}
        gRPC::grpc
        gRPC::grpc++
)