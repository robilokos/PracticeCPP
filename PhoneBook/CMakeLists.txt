cmake_minimum_required(VERSION 3.10)  # CMake version check
project(simple_example)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES src/main.cpp src/node.h src/record.h src/functions.h)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(main ${SOURCE_FILES})