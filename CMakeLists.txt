cmake_minimum_required(VERSION 3.20)
project(password)

set(CMAKE_CXX_STANDARD 14)

add_executable(password main.cpp pwgeneration.cpp pwgeneration.h customer.cpp customer.h randomservice.cpp randomservice.h)
