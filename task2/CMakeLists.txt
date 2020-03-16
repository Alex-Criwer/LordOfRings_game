cmake_minimum_required(VERSION 2.8)

project(C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

execute_process(COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/A/preparing.py
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/A)

make_directory(${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/B)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/A 
                    ${CMAKE_CURRENT_SOURCE_DIR}/B 
                    ${CMAKE_CURRENT_SOURCE_DIR}/C
                    ${CMAKE_CURRENT_SOURCE_DIR}
                    ${CMAKE_CURRENT_SOURCE_DIR}/lib)

include_directories(${GTEST_INCLUDE_DIRS})


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_executable(C 
                ${CMAKE_CURRENT_SOURCE_DIR}/C/main.cpp 
                ${CMAKE_CURRENT_SOURCE_DIR}/A/index.cpp 
                ${CMAKE_CURRENT_SOURCE_DIR}/A/index.h 
                ${CMAKE_CURRENT_SOURCE_DIR}/B/lib.h 
                ${CMAKE_CURRENT_SOURCE_DIR}/B/lib.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/C/main.h)

add_executable(CTest ${CMAKE_CURRENT_SOURCE_DIR}/A/index.h 
                ${CMAKE_CURRENT_SOURCE_DIR}/B/lib.h 
                ${CMAKE_CURRENT_SOURCE_DIR}/A/index.cpp 
                ${CMAKE_CURRENT_SOURCE_DIR}/B/lib.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/C/test.cpp)

target_link_libraries(C myProject)
target_link_libraries(CTest myProject)
target_link_libraries(CTest ${GTEST_LIBRARIES} pthread)

