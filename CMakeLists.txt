cmake_minimum_required(VERSION 3.5)
project(PersionalStringClass)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)
add_subdirectory(test)
enable_testing()
add_test(NAME AFString COMMAND StringTest)
