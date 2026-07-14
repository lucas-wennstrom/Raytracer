cmake_minimum_required(VERSION 3.20)
project(Raytracer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(raytracer src/main.cpp)
target_compile_options(raytracer PRIVATE -Wall -Wextra)

set(CMAKE_CXX_FLAGS_RELEASE "-O3")
