cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 11)
project(mach-reader)

FILE(GLOB_RECURSE SRC src/*.cc)

add_executable(mach-reader ${SRC})

add_subdirectory(secondpart/reader-util)
target_link_libraries(mach-reader reader-util)