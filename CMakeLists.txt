cmake_minimum_required(VERSION 3.20)
project(untitled3)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled3 main.cpp)
set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc -static-libstdc++")
