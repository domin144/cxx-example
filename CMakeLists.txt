cmake_minimum_required(VERSION 3.0)
project(example)

add_executable(example)

target_sources(
    example
    PRIVATE
        main.cpp)
set_property(TARGET example PROPERTY CXX_STANDARD 20)
set_property(TARGET example PROPERTY CXX_EXTENSIONS OFF)
