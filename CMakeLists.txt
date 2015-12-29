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

# Clean cmake files
add_custom_target(
        cclean
        COMMAND rm CMakeCache.txt
        COMMAND rm -r CMakeFiles
        COMMAND rm cmake_install.cmake
        COMMAND rm Makefile
        COMMENT "Clean up cmake specific files"
        VERBATIM
)

# Regular flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -stdlib=libc++")

# Release flags
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

# Debug flags
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -g -O -Weverything -Werror -pedantic -pedantic-errors -Wno-c++98-compat")

file(GLOB UTIL_HEADER src/cpp/include/util/*.hxx)

## Sequence stuff
# Sequence source
set(SEQ_SOURCE src/cpp/src/seq/seq.cxx)

# Get all headers for seq
file(GLOB_RECURSE SEQ_HEADER src/cpp/include/seq/*.hxx)

# Debug build for sequences
add_executable(SeqPrettyPrintDebug ${SEQ_SOURCE} ${UTIL_HEADER} ${SEQ_HEADER})

## Associative stuff
# Associative source
set(ASS_SOURCE src/cpp/src/ass/ass.cxx)

# Get all headers for ass
file(GLOB_RECURSE ASS_HEADER src/cpp/include/ass/*.hxx)

# Debug build for associatives
add_executable(AssPrettyPrintDebug ${ASS_SOURCE} ${UTIL_HEADER} ${ASS_HEADER} src/cpp/include/seq/impl/seq-impl.hxx)

## Unordered Associative stuff
# Unordered Associative stuff
set(UNO_SOURCE src/cpp/src/uno/uno.cxx)

# Get all headers for uno
file(GLOB_RECURSE UNO_HEADER src/cpp/include/uno/*.hxx)

# Debug build for unordered
add_executable(UnoPrettyPrintDebug ${UNO_SOURCE} ${UTIL_HEADER} ${UNO_HEADER} src/cpp/include/seq/impl/seq-impl.hxx)
