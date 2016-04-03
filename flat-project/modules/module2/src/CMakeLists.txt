set(module_name module2)

include_directories(
    ../include
    ../../module1/include
)
set(source_files
    sum.cpp
    internal/add.cpp
)
add_library(${module_name} STATIC ${source_files})
