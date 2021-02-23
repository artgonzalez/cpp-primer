add_library(exa_07_733_lib "${CMAKE_SOURCE_DIR}/inc/screen.h" "${CMAKE_SOURCE_DIR}/inc/screen.cpp"
                           "${CMAKE_SOURCE_DIR}/inc/window_manager.h" "${CMAKE_SOURCE_DIR}/inc/window_manager.cpp")
add_executable(exa_07_733_exe "main.cpp" "${CMAKE_SOURCE_DIR}/inc/screen.cpp" "${CMAKE_SOURCE_DIR}/inc/window_manager.cpp")
