cmake_minimum_required(VERSION 3.31)
project(testing C)

set(CMAKE_C_STANDARD 11)

add_executable(testing arrlst.c test/testing.c)
