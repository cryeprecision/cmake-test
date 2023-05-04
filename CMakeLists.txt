cmake_minimum_required(VERSION 3.21)

project("cmake-test")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)

add_executable(cmake-test
    src/main.cc
    src/cmake-test/bar.h
    src/cmake-test/baz.h
    src/cmake-test/foo.h
)

target_include_directories(cmake-test PRIVATE src)
