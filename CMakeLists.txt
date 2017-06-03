cmake_minimum_required(VERSION 3.5)
project(samplesTestCode)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(src)
add_subdirectory(test)
enable_testing()
add_test(NAME AFString COMMAND StringTest)
