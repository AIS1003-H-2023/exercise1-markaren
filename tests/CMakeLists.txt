
add_executable(test_functions test_functions.cpp)
add_test(NAME test_functions COMMAND test_functions)
target_include_directories(test_functions PRIVATE "${CMAKE_SOURCE_DIR}/include")
target_link_libraries(test_functions PRIVATE Catch2::Catch2WithMain)
