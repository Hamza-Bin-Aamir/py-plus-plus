cmake_minimum_required(VERSION 3.27)
project(PyPlusPlus)

set(CMAKE_CXX_STANDARD 17)

add_executable(PyPlusPlus demo.cpp
        pyplusplus.hpp)
