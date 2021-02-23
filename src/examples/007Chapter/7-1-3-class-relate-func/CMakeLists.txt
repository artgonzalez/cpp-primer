add_library(exa_07_713_lib "${CMAKE_SOURCE_DIR}/inc/salesdata.h" "${CMAKE_SOURCE_DIR}/inc/salesdata.cpp"
                            "sales_data_free_functions.h" "sales_data_free_functions.cpp")
add_executable(exa_07_713_exe "main.cpp" "${CMAKE_SOURCE_DIR}/inc/salesdata.cpp" "sales_data_free_functions.cpp")
