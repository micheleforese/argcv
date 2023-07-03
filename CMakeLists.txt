cmake_minimum_required(VERSION 3.24)
project(ARGC_ARGV CXX)

option(ARGCV_TESTS "Test for ArgCV" ON)

add_library(argcv)

target_include_directories(argcv PUBLIC include)
target_sources(argcv PUBLIC src/argcv.cpp)

# if(${ARGCV_TESTS})
    add_subdirectory(tests)
# endif(${ARGCV_TESTS})
