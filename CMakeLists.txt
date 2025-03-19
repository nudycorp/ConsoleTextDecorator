cmake_minimum_required(VERSION 3.20)
project(untitled3)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES
    main.cpp
    src/BackColorDecorator.cpp
    src/ColorDecorator.cpp
    src/Decorator.cpp
    src/ItalicDecorator.cpp
    src/Text.cpp
)

include_directories(include)
add_executable(untitled3 ${SOURCES})
set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc -static-libstdc++")
