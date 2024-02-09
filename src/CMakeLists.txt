cmake_minimum_required(VERSION 3.12)

project(ip-conversation-parser LANGUAGES CXX C)

set(CMAKE_BUILD_TYPE Debug)

add_executable(ip-conversational-parser main.cpp conversation-id.cpp block-reader.c)
