add_executable(exe_01_tests "01_exercise_tests.cpp")
target_link_libraries(exe_01_tests exe_01_109_lib)
add_test(NAME exe_01_tests COMMAND exe_01_tests -s)