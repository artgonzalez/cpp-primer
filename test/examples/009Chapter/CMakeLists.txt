add_executable(exa_09_tests "09_example_tests.cpp")
target_link_libraries(exa_09_tests exa_09_951_lib)
add_test(NAME exa_09_tests COMMAND exa_09_tests -s)