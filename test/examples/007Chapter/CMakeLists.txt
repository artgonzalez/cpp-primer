add_executable(exa_07_tests "07_example_tests.cpp")
target_link_libraries(exa_07_tests exa_07_731_lib)
add_test(NAME exa_07_tests COMMAND exa_07_tests -s)