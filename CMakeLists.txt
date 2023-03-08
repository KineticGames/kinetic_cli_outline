cmake_minimum_required(VERSION 3.00)

set(CMAKE_C_STANDARD 11)

project(kinetic_cli_outline C)

add_library(kinetic_cli_outline INTERFACE)
target_include_directories(kinetic_cli_outline INTERFACE include)
