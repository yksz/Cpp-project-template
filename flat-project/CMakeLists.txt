cmake_minimum_required(VERSION 2.8.7)
project(flat-project CXX)

set(CMAKE_CXX_FLAGS "-Wall")

include(cmake/flat-project.cmake)
set_output_dir(${CMAKE_SOURCE_DIR}/build/Release)

enable_testing()
add_subdirectory(modules)
