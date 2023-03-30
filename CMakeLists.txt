cmake_minimum_required(VERSION 3.24)
project(library_test)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_OSX_ARCHITECTURES "x86_64")

add_library(test SHARED library.cpp library.h)

add_executable(library_test main.cpp)
target_link_libraries(library_test test)

set_target_properties(library_test PROPERTIES
        BUILD_WITH_INSTALL_RPATH TRUE
        INSTALL_RPATH "$ORIGIN")
