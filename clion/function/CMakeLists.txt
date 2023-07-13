cmake_minimum_required(VERSION 3.19)
project(function C)

set(CMAKE_C_STANDARD 99)

add_executable(function main.c func.c func.h)