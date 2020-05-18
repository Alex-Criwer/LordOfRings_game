cmake_minimum_required(VERSION 3.1)
project(game)

set(CMAKE_CXX_STANDARD 11)
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

set(HEADERS
        implementation/point.h
        implementation/magic_creature.h
        implementation/hobbit.h
        implementation/elf.h
        implementation/dwarf.h
        implementation/magician.h
        implementation/nazgul.h
        implementation/army.h
        implementation/army_factory.h
        implementation/heros.h
        implementation/villains.h
        implementation/Adapter_Traitors.h
        implementation/decorator_magic_creature.h
        implementation/decorator_dwarf.h
        implementation/decorator_elf.h
        implementation/decorator_hobbit.h
        implementation/detachment.h
        implementation/stragedy.h
        implementation/AndrewAlgorithm.h
        implementation/JarvisAlgorithm.h
        implementation/context.h
        implementation/visitor.h
        )

set(SOURCES
        implementation/hobbit.cpp
        implementation/army.cpp
        implementation/elf.cpp
        implementation/dwarf.cpp
        implementation/magician.cpp
        implementation/nazgul.cpp
        implementation/heros.cpp
        implementation/villains.cpp
        implementation/Adapter_Traitors.cpp
        implementation/decorator_magic_creature.cpp
        implementation/decorator_dwarf.cpp
        implementation/decorator_elf.cpp
        implementation/decorator_hobbit.cpp
        implementation/detachment.cpp
        implementation/AndrewAlgorithm.cpp
        implementation/context.cpp
        implementation/JarvisAlgorithm.h.cpp
        implementation/visitor.cpp
        )

add_executable(game main.cpp  ${HEADERS} ${SOURCES} )
add_executable(Test test.cpp ${HEADERS} ${SOURCES})
target_link_libraries(Test ${GTEST_LIBRARIES} pthread)

enable_testing()