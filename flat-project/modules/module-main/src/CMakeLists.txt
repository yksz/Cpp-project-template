set(module_name module-main)

include_directories(
    ../../module1/include
    ../../module2/include
)
set(source_files
    main.cpp
)
set(libraries
    module2
)
add_executable(${module_name} ${source_files})
target_link_libraries(${module_name} ${libraries})
