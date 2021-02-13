add_executable(exa_01_tests "01_example_tests.cpp")
target_link_libraries(exa_01_tests exa_01_141_lib exa_01_141_lib exa_01_142_lib)
add_test(NAME exa_01_tests COMMAND exa_01_tests -s)