cmake_minimum_required(VERSION 3.3)
project(PrettyPrint CXX)

# Set clang as compiler of choice
IF(EXISTS /usr/bin/clang)
    set(CMAKE_CXX_COMPILER             "/usr/bin/clang++")
    #set(CMAKE_AR      "/usr/bin/llvm-ar")
    #set(CMAKE_LINKER  "/usr/bin/llvm-ld")
    #set(CMAKE_NM      "/usr/bin/llvm-nm")
    #set(CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
    #set(CMAKE_RANLIB  "/usr/bin/llvm-ranlib")
ELSE()
    set(CMAKE_CXX_COMPILER             "/usr/bin/g++")
ENDIF()

# Debug Flags

# Regular flags
set(MAIN_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z")
set(DEBUG_FLAGS "${MAIN_FLAGS} -g -O -Weverything -Werror -pedantic -pedantic-errors -Wno-c++98-compat")
set(CMAKE_CXX_FLAGS "${MAIN_FLAGS}")

## Sequence stuff
# Sequence source
set(SEQ_SOURCE src/cpp/src/seq/seq.cpp)

# Get all headers for seq
set(SEQ_HEADER src/cpp/include/seq/impl/seq-impl.hxx src/cpp/include/seq/seq.hxx src/cpp/include/seq/array/array.hxx src/cpp/include/seq/vector/vector.hxx src/cpp/include/seq/deque/deque.hxx)

# Regular build for sequences
add_executable(SeqPrettyPrint ${SEQ_SOURCE} src/cpp/include/pretty_print.hxx ${SEQ_HEADER})

# Debug build for sequences
set(CMAKE_CXX_FLAGS "${DEBUG_FLAGS}")
add_executable(SeqPrettyPrintDebug ${SEQ_SOURCE} ${SEQ_HEADER})
