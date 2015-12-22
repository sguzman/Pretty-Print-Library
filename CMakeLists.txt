cmake_minimum_required(VERSION 3.3)
project(PrettyPrint)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z")

set(SOURCE_FILES src/cpp/src/main.cpp)
set(HEADER_FILES src/cpp/include/pretty_print.hxx src/cpp/include/vector.hxx)
add_executable(PrettyPrint ${SOURCE_FILES} ${HEADER_FILES})

# Debug build
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O -Weverything -Werror -pedantic -pedantic-errors -Wno-c++98-compat")
add_executable(PrettyPrintDebug ${SOURCE_FILES})
