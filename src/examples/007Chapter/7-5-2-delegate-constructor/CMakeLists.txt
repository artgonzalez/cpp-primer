add_library(exa_07_752_lib "${CMAKE_SOURCE_DIR}/inc/salesdata.h" "${CMAKE_SOURCE_DIR}/inc/salesdata.cpp")
add_executable(exa_07_752_exe "main.cpp" "${CMAKE_SOURCE_DIR}/inc/salesdata.cpp")
