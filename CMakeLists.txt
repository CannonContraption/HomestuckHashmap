cmake_minimum_required(VERSION 2.6)
project(homestuckhashmap)

add_executable(homestuckhashmap main.cpp)

install(TARGETS homestuckhashmap RUNTIME DESTINATION bin)
