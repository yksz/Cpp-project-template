file(GLOB_RECURSE source_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
project_add_library(module2 STATIC
    ${source_files}
)
