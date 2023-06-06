# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maverick/Projects/OpenLeague

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maverick/Projects/OpenLeague/build

# Include any dependencies generated for this target.
include CMakeFiles/openleague.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/openleague.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/openleague.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/openleague.dir/flags.make

CMakeFiles/openleague.dir/src/main.cpp.o: CMakeFiles/openleague.dir/flags.make
CMakeFiles/openleague.dir/src/main.cpp.o: /home/maverick/Projects/OpenLeague/src/main.cpp
CMakeFiles/openleague.dir/src/main.cpp.o: CMakeFiles/openleague.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maverick/Projects/OpenLeague/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/openleague.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/openleague.dir/src/main.cpp.o -MF CMakeFiles/openleague.dir/src/main.cpp.o.d -o CMakeFiles/openleague.dir/src/main.cpp.o -c /home/maverick/Projects/OpenLeague/src/main.cpp

CMakeFiles/openleague.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/openleague.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maverick/Projects/OpenLeague/src/main.cpp > CMakeFiles/openleague.dir/src/main.cpp.i

CMakeFiles/openleague.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/openleague.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maverick/Projects/OpenLeague/src/main.cpp -o CMakeFiles/openleague.dir/src/main.cpp.s

CMakeFiles/openleague.dir/src/rendering.cpp.o: CMakeFiles/openleague.dir/flags.make
CMakeFiles/openleague.dir/src/rendering.cpp.o: /home/maverick/Projects/OpenLeague/src/rendering.cpp
CMakeFiles/openleague.dir/src/rendering.cpp.o: CMakeFiles/openleague.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maverick/Projects/OpenLeague/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/openleague.dir/src/rendering.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/openleague.dir/src/rendering.cpp.o -MF CMakeFiles/openleague.dir/src/rendering.cpp.o.d -o CMakeFiles/openleague.dir/src/rendering.cpp.o -c /home/maverick/Projects/OpenLeague/src/rendering.cpp

CMakeFiles/openleague.dir/src/rendering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/openleague.dir/src/rendering.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maverick/Projects/OpenLeague/src/rendering.cpp > CMakeFiles/openleague.dir/src/rendering.cpp.i

CMakeFiles/openleague.dir/src/rendering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/openleague.dir/src/rendering.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maverick/Projects/OpenLeague/src/rendering.cpp -o CMakeFiles/openleague.dir/src/rendering.cpp.s

# Object files for target openleague
openleague_OBJECTS = \
"CMakeFiles/openleague.dir/src/main.cpp.o" \
"CMakeFiles/openleague.dir/src/rendering.cpp.o"

# External object files for target openleague
openleague_EXTERNAL_OBJECTS =

openleague: CMakeFiles/openleague.dir/src/main.cpp.o
openleague: CMakeFiles/openleague.dir/src/rendering.cpp.o
openleague: CMakeFiles/openleague.dir/build.make
openleague: /usr/lib64/libSDL2.so
openleague: /usr/lib64/libGL.so
openleague: /usr/lib64/libGLU.so
openleague: CMakeFiles/openleague.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maverick/Projects/OpenLeague/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable openleague"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/openleague.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/openleague.dir/build: openleague
.PHONY : CMakeFiles/openleague.dir/build

CMakeFiles/openleague.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/openleague.dir/cmake_clean.cmake
.PHONY : CMakeFiles/openleague.dir/clean

CMakeFiles/openleague.dir/depend:
	cd /home/maverick/Projects/OpenLeague/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maverick/Projects/OpenLeague /home/maverick/Projects/OpenLeague /home/maverick/Projects/OpenLeague/build /home/maverick/Projects/OpenLeague/build /home/maverick/Projects/OpenLeague/build/CMakeFiles/openleague.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/openleague.dir/depend
