cmake_minimum_required(VERSION 3.26)
project(eads_lab1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_executable(eads_lab1 sequence_test.cpp sequence.h)
target_compile_options(eads_lab1 PRIVATE -O2 -Wall -Wextra -Wpedantic -Werror)
