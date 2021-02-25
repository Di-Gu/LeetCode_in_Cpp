cmake_minimum_required(VERSION 3.17)
project(LeetCode_in_Cpp)

set(CMAKE_CXX_STANDARD 11)

include_directories(util
        A_LinkedList)

add_subdirectory(A_LinkedList)

add_executable(LeetCode main.cpp)
TARGET_LINK_LIBRARIES(LeetCode linkedlist)