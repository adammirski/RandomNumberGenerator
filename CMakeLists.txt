cmake_minimum_required(VERSION 3.10)

project(RandomNumberGenerator)

set(CMAKE_CXX_STANDARD 14)

# Add include directories
include_directories(${CMAKE_SOURCE_DIR})

# Add source files
set(SOURCES
        h01.cpp
        hw01.h
        print_array.cpp
        triple_number.cpp
        prt_header.cpp
        reverse_digits.cpp
        save_array.cpp
        sort_array.cpp
        sum_digits.cpp
        triple_number.cpp
        array.txt
)

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES})
