cmake_minimum_required(VERSION 3.21)
project(subset-sum)

set(CMAKE_CXX_STANDARD 23)

find_package(benchmark REQUIRED)
add_executable(subset-sum
        main.cpp
        cansum.cpp cansum.h
        gb.cpp gb.h)

target_link_libraries(subset-sum benchmark::benchmark)

