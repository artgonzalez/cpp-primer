add_executable(exa_02_tests "02_example_tests.cpp")
target_link_libraries(exa_02_tests exa_02_212_lib exa_02_221_lib)
add_test(NAME exa_02_tests COMMAND exa_02_tests -s)