# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/107/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/107/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex-criwer/CLionProjects/game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex-criwer/CLionProjects/game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game.dir/flags.make

CMakeFiles/game.dir/main.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/main.cpp.o -c /home/alex-criwer/CLionProjects/game/main.cpp

CMakeFiles/game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-criwer/CLionProjects/game/main.cpp > CMakeFiles/game.dir/main.cpp.i

CMakeFiles/game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-criwer/CLionProjects/game/main.cpp -o CMakeFiles/game.dir/main.cpp.s

CMakeFiles/game.dir/realisations/hobbit.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/realisations/hobbit.cpp.o: ../realisations/hobbit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/game.dir/realisations/hobbit.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/realisations/hobbit.cpp.o -c /home/alex-criwer/CLionProjects/game/realisations/hobbit.cpp

CMakeFiles/game.dir/realisations/hobbit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/realisations/hobbit.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-criwer/CLionProjects/game/realisations/hobbit.cpp > CMakeFiles/game.dir/realisations/hobbit.cpp.i

CMakeFiles/game.dir/realisations/hobbit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/realisations/hobbit.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-criwer/CLionProjects/game/realisations/hobbit.cpp -o CMakeFiles/game.dir/realisations/hobbit.cpp.s

CMakeFiles/game.dir/realisations/army.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/realisations/army.cpp.o: ../realisations/army.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/game.dir/realisations/army.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/realisations/army.cpp.o -c /home/alex-criwer/CLionProjects/game/realisations/army.cpp

CMakeFiles/game.dir/realisations/army.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/realisations/army.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-criwer/CLionProjects/game/realisations/army.cpp > CMakeFiles/game.dir/realisations/army.cpp.i

CMakeFiles/game.dir/realisations/army.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/realisations/army.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-criwer/CLionProjects/game/realisations/army.cpp -o CMakeFiles/game.dir/realisations/army.cpp.s

CMakeFiles/game.dir/realisations/elf.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/realisations/elf.cpp.o: ../realisations/elf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/game.dir/realisations/elf.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/realisations/elf.cpp.o -c /home/alex-criwer/CLionProjects/game/realisations/elf.cpp

CMakeFiles/game.dir/realisations/elf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/realisations/elf.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-criwer/CLionProjects/game/realisations/elf.cpp > CMakeFiles/game.dir/realisations/elf.cpp.i

CMakeFiles/game.dir/realisations/elf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/realisations/elf.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-criwer/CLionProjects/game/realisations/elf.cpp -o CMakeFiles/game.dir/realisations/elf.cpp.s

CMakeFiles/game.dir/realisations/dwarf.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/realisations/dwarf.cpp.o: ../realisations/dwarf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/game.dir/realisations/dwarf.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/realisations/dwarf.cpp.o -c /home/alex-criwer/CLionProjects/game/realisations/dwarf.cpp

CMakeFiles/game.dir/realisations/dwarf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/realisations/dwarf.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-criwer/CLionProjects/game/realisations/dwarf.cpp > CMakeFiles/game.dir/realisations/dwarf.cpp.i

CMakeFiles/game.dir/realisations/dwarf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/realisations/dwarf.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-criwer/CLionProjects/game/realisations/dwarf.cpp -o CMakeFiles/game.dir/realisations/dwarf.cpp.s

CMakeFiles/game.dir/realisations/magician.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/realisations/magician.cpp.o: ../realisations/magician.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/game.dir/realisations/magician.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/realisations/magician.cpp.o -c /home/alex-criwer/CLionProjects/game/realisations/magician.cpp

CMakeFiles/game.dir/realisations/magician.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/realisations/magician.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-criwer/CLionProjects/game/realisations/magician.cpp > CMakeFiles/game.dir/realisations/magician.cpp.i

CMakeFiles/game.dir/realisations/magician.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/realisations/magician.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-criwer/CLionProjects/game/realisations/magician.cpp -o CMakeFiles/game.dir/realisations/magician.cpp.s

CMakeFiles/game.dir/realisations/nazgul.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/realisations/nazgul.cpp.o: ../realisations/nazgul.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/game.dir/realisations/nazgul.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/realisations/nazgul.cpp.o -c /home/alex-criwer/CLionProjects/game/realisations/nazgul.cpp

CMakeFiles/game.dir/realisations/nazgul.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/realisations/nazgul.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-criwer/CLionProjects/game/realisations/nazgul.cpp > CMakeFiles/game.dir/realisations/nazgul.cpp.i

CMakeFiles/game.dir/realisations/nazgul.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/realisations/nazgul.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-criwer/CLionProjects/game/realisations/nazgul.cpp -o CMakeFiles/game.dir/realisations/nazgul.cpp.s

CMakeFiles/game.dir/realisations/heros.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/realisations/heros.cpp.o: ../realisations/heros.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/game.dir/realisations/heros.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/realisations/heros.cpp.o -c /home/alex-criwer/CLionProjects/game/realisations/heros.cpp

CMakeFiles/game.dir/realisations/heros.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/realisations/heros.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-criwer/CLionProjects/game/realisations/heros.cpp > CMakeFiles/game.dir/realisations/heros.cpp.i

CMakeFiles/game.dir/realisations/heros.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/realisations/heros.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-criwer/CLionProjects/game/realisations/heros.cpp -o CMakeFiles/game.dir/realisations/heros.cpp.s

CMakeFiles/game.dir/realisations/villains.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/realisations/villains.cpp.o: ../realisations/villains.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/game.dir/realisations/villains.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/realisations/villains.cpp.o -c /home/alex-criwer/CLionProjects/game/realisations/villains.cpp

CMakeFiles/game.dir/realisations/villains.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/realisations/villains.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex-criwer/CLionProjects/game/realisations/villains.cpp > CMakeFiles/game.dir/realisations/villains.cpp.i

CMakeFiles/game.dir/realisations/villains.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/realisations/villains.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex-criwer/CLionProjects/game/realisations/villains.cpp -o CMakeFiles/game.dir/realisations/villains.cpp.s

# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/main.cpp.o" \
"CMakeFiles/game.dir/realisations/hobbit.cpp.o" \
"CMakeFiles/game.dir/realisations/army.cpp.o" \
"CMakeFiles/game.dir/realisations/elf.cpp.o" \
"CMakeFiles/game.dir/realisations/dwarf.cpp.o" \
"CMakeFiles/game.dir/realisations/magician.cpp.o" \
"CMakeFiles/game.dir/realisations/nazgul.cpp.o" \
"CMakeFiles/game.dir/realisations/heros.cpp.o" \
"CMakeFiles/game.dir/realisations/villains.cpp.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

game: CMakeFiles/game.dir/main.cpp.o
game: CMakeFiles/game.dir/realisations/hobbit.cpp.o
game: CMakeFiles/game.dir/realisations/army.cpp.o
game: CMakeFiles/game.dir/realisations/elf.cpp.o
game: CMakeFiles/game.dir/realisations/dwarf.cpp.o
game: CMakeFiles/game.dir/realisations/magician.cpp.o
game: CMakeFiles/game.dir/realisations/nazgul.cpp.o
game: CMakeFiles/game.dir/realisations/heros.cpp.o
game: CMakeFiles/game.dir/realisations/villains.cpp.o
game: CMakeFiles/game.dir/build.make
game: CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game.dir/build: game

.PHONY : CMakeFiles/game.dir/build

CMakeFiles/game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game.dir/clean

CMakeFiles/game.dir/depend:
	cd /home/alex-criwer/CLionProjects/game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex-criwer/CLionProjects/game /home/alex-criwer/CLionProjects/game /home/alex-criwer/CLionProjects/game/cmake-build-debug /home/alex-criwer/CLionProjects/game/cmake-build-debug /home/alex-criwer/CLionProjects/game/cmake-build-debug/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game.dir/depend
