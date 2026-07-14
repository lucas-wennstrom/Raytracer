cmake_minimum_required(VERSION 3.20)
project(raytracer)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(raytracer src/main.cpp src/vec3.cpp)
target_compile_options(raytracer PRIVATE -Wall -Wextra)
target_include_directories(raytracer PRIVATE include)

add_executable(raytracer_test src/vec3.cpp src/test.cpp)
target_compile_options(raytracer_test PRIVATE -Wall -Wextra)
target_include_directories(raytracer_test PRIVATE include)

set(CMAKE_CXX_FLAGS_RELEASE "-O3")
