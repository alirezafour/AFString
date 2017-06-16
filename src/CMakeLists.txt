cmake_minimum_required(VERSION 3.5)
project(sampleAFStringUse)

set(SOURCE_FILES main.cpp AFString.cpp AFString.h)

add_library(AFString AFString.cpp AFString.h)

include_directories(/usr/local/include/boost)
add_executable(samplesTestCode ${SOURCE_FILES})
