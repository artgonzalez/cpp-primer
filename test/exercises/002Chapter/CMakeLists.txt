add_executable(exe_02_tests "02_exercise_tests.cpp")
target_link_libraries(exe_02_tests exe_02_231_lib exe_02_232_lib)
add_test(NAME exe_02_tests COMMAND exe_02_tests -s)