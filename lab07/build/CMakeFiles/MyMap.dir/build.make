# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/stud2020/0gawron/PPO/lab07

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stud2020/0gawron/PPO/lab07/build

# Include any dependencies generated for this target.
include CMakeFiles/MyMap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyMap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyMap.dir/flags.make

CMakeFiles/MyMap.dir/src/MapPoint.cpp.o: CMakeFiles/MyMap.dir/flags.make
CMakeFiles/MyMap.dir/src/MapPoint.cpp.o: ../src/MapPoint.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stud2020/0gawron/PPO/lab07/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyMap.dir/src/MapPoint.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyMap.dir/src/MapPoint.cpp.o -c /home/stud2020/0gawron/PPO/lab07/src/MapPoint.cpp

CMakeFiles/MyMap.dir/src/MapPoint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyMap.dir/src/MapPoint.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stud2020/0gawron/PPO/lab07/src/MapPoint.cpp > CMakeFiles/MyMap.dir/src/MapPoint.cpp.i

CMakeFiles/MyMap.dir/src/MapPoint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyMap.dir/src/MapPoint.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stud2020/0gawron/PPO/lab07/src/MapPoint.cpp -o CMakeFiles/MyMap.dir/src/MapPoint.cpp.s

# Object files for target MyMap
MyMap_OBJECTS = \
"CMakeFiles/MyMap.dir/src/MapPoint.cpp.o"

# External object files for target MyMap
MyMap_EXTERNAL_OBJECTS =

libMyMap.a: CMakeFiles/MyMap.dir/src/MapPoint.cpp.o
libMyMap.a: CMakeFiles/MyMap.dir/build.make
libMyMap.a: CMakeFiles/MyMap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stud2020/0gawron/PPO/lab07/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMyMap.a"
	$(CMAKE_COMMAND) -P CMakeFiles/MyMap.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyMap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyMap.dir/build: libMyMap.a

.PHONY : CMakeFiles/MyMap.dir/build

CMakeFiles/MyMap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyMap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyMap.dir/clean

CMakeFiles/MyMap.dir/depend:
	cd /home/stud2020/0gawron/PPO/lab07/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stud2020/0gawron/PPO/lab07 /home/stud2020/0gawron/PPO/lab07 /home/stud2020/0gawron/PPO/lab07/build /home/stud2020/0gawron/PPO/lab07/build /home/stud2020/0gawron/PPO/lab07/build/CMakeFiles/MyMap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyMap.dir/depend

