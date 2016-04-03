cmake_minimum_required(VERSION 2.8.7)
project(monolithic-project CXX)

set(CMAKE_CXX_FLAGS "-Wall")

include(cmake/monolithic-project.cmake)
set_output_dir(${CMAKE_SOURCE_DIR}/build/Release)

enable_testing()
add_subdirectory(src)
add_subdirectory(test)
