cmake_minimum_required(VERSION 3.6)
project(Mipstestcases)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp makeTestCases.cpp makeTestCases.h)
add_executable(Mipstestcases ${SOURCE_FILES})