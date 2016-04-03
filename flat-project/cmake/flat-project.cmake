include(CMakeParseArguments)

set(output_dir ${CMAKE_BINARY_DIR}/Release)
set(EXECUTABLE_OUTPUT_PATH ${output_dir}/bin)
set(LIBRARY_OUTPUT_PATH ${output_dir}/lib)
set(test_output_path ${output_dir}/test)

# set_output_dir(<path>)
macro(set_output_dir path)
    set(EXECUTABLE_OUTPUT_PATH ${path}/bin)
    set(LIBRARY_OUTPUT_PATH ${path}/lib)
    set(test_output_path ${path}/test)
endmacro(set_output_dir)

# project_add_googletest(<module_name>
#                        [DEPENDS [depends1 [depends2 ...]]]
#                        test_name1 [test_name2 ...])
macro(project_add_googletest module_name)
    set(options "")
    set(oneValueArgs "")
    set(multiValueArgs DEPENDS)
    cmake_parse_arguments(arg "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    set(EXECUTABLE_OUTPUT_PATH ${test_output_path})
    include_directories(
        /usr/local/include # googletest
    )
    link_directories(
        /usr/local/lib # googletest
    )
    set(test_libraries ${arg_DEPENDS}
        gtest
        gtest_main
        pthread
    )
    foreach(test_path IN LISTS arg_UNPARSED_ARGUMENTS)
        string(REPLACE "/" "_" test_name ${test_path})
        set(test ${module_name}_${test_name})
        add_executable(${test} ${test_path}.cpp)
        target_link_libraries(${test} ${test_libraries})
        add_test(${test} ${EXECUTABLE_OUTPUT_PATH}/${test})
    endforeach()
endmacro(project_add_googletest)
