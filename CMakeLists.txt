cmake_minimum_required(VERSION 3.1)
project(game)

set(CMAKE_CXX_STANDARD 11)
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

set(HEADERS realisations/constants.h
        realisations/point.h
        realisations/magic_creature.h
        realisations/hobbit.h
        realisations/elf.h
        realisations/dwarf.h
        realisations/magician.h
        realisations/nazgul.h
        realisations/army.h
        realisations/army_factory.h
        realisations/heros.h
        realisations/villains.h
        )

set(SOURCES
        realisations/hobbit.cpp
        realisations/army.cpp
        realisations/elf.cpp
        realisations/dwarf.cpp
        realisations/magician.cpp
        realisations/nazgul.cpp
        realisations/heros.cpp
        realisations/villains.cpp
        )

add_executable(game main.cpp  ${HEADERS} ${SOURCES})
add_executable(Test test.cpp ${HEADERS} ${SOURCES})
target_link_libraries(Test ${GTEST_LIBRARIES} pthread)

enable_testing()