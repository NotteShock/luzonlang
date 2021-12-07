cmake_minimum_required(VERSION 3.5)

project(luzonlang LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SOURCES
    src/base/luzon.cpp
    src/shell/inputloop.cpp
    src/shell/inputloop.h
    src/shell/inputparser.cpp
    src/shell/inputparser.h
    src/shell/console.cpp
    src/shell/console.h)

add_executable(luzon ${SOURCES})
