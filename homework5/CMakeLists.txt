cmake_minimum_required(VERSION 3.13)
project(homework5)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework5 main.cpp virtualDestructorExample.cpp PersonData.h PersonData.cpp CustomerData.h CustomerData.cpp PreferredCustomer.h PreferredCustomer.cpp)