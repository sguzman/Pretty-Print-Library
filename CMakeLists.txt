cmake_minimum_required(VERSION 3.3)
project(PrettyPrint CXX)

# Debug Flags

# Regular flags
set(MAIN_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z")
set(DEBUG_FLAGS "${MAIN_FLAGS} -g -O -Weverything -Werror -pedantic -pedantic-errors -Wno-c++98-compat")
set(CMAKE_CXX_FLAGS "${MAIN_FLAGS}")

# Sequence source
set(SEQ_SOURCE src/cpp/src/seq/seq.cpp)

# Get all headers for seq
file(GLOB SEQ_HEADERS src/cpp/include/seq/*)
set(SEQ_HEADER_FILES ${SEQ_HEADERS} src/cpp/include/pretty_print.hxx)

# Regular build for sequences
add_executable(SeqPrettyPrint ${SEQ_SOURCE} ${SEQ_HEADER_FILES})

# Debug build for sequences
set(CMAKE_CXX_FLAGS "${DEBUG_FLAGS}")
add_executable(SeqPrettyPrintDebug ${SEQ_SOURCE} ${SEQ_HEADER_FILES})
