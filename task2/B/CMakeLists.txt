cmake_minimum_required(VERSION 2.8)

project(myProject)

add_library(myProject lib.h lib.cpp)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../lib)