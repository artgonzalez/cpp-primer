add_executable(exa_06_tests "06_example_tests.cpp")
target_link_libraries(exa_06_tests exa_06_611_lib exa_06_621_lib exa_06_622_lib exa_06_632_lib)
add_test(NAME exa_06_tests COMMAND exa_06_tests -s)