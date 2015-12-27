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

# Regular flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z")

# Release flags
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

# Debug flags
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -g -O -Weverything -Werror -pedantic -pedantic-errors -Wno-c++98-compat")

## Sequence stuff
# Sequence source
set(SEQ_SOURCE src/cpp/src/seq/seq.cpp)

# Get all headers for seq
set(SEQ_HEADER src/cpp/include/seq/impl/seq-impl.hxx src/cpp/include/seq/seq.hxx src/cpp/include/seq/array/array.hxx src/cpp/include/seq/vector/vector.hxx src/cpp/include/seq/deque/deque.hxx src/cpp/include/seq/raw/raw.hxx src/cpp/include/seq/forward_list/forward.hxx src/cpp/include/seq/list/list.hxx)

# Debug build for sequences
add_executable(SeqPrettyPrintDebug ${SEQ_SOURCE} ${SEQ_HEADER})
