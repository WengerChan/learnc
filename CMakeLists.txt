cmake_minimum_required(VERSION 3.22)
project(learnc C)

set(CMAKE_C_STANDARD 11)

add_executable(learnc
        hello.c
         "add.c")
