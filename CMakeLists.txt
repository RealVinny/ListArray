cmake_minimum_required(VERSION 3.31)
project(${PROJECT_NAME} C)

set(CMAKE_C_STANDARD 11)

add_library(arrlst STATIC src/arrlst.c)

target_include_directories(arrlst PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(tests exampleFiles/full.c)

target_link_libraries(tests PRIVATE arrlst)