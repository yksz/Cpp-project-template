include_directories(
    ../include
    ../../module1/include
)
project_add_googletest(module2
    sum_test
    internal/add_test

    DEPENDS
    module2
)
