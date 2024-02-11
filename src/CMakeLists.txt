cmake_minimum_required(VERSION 3.12)

project(ip-conversation-parser LANGUAGES CXX C)

set(CMAKE_BUILD_TYPE Debug)

add_executable(ip-conversation-parser main.cpp block-reader.cpp conversation-id.cpp conversation-counter.cpp types.cpp)
