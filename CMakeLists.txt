cmake_minimum_required(VERSION 3.30)
project(EEMS)

set(CMAKE_CXX_STANDARD 20)

add_executable(EEMS src/main.cpp
        src/employee.cpp
        src/database.cpp)
