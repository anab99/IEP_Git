# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/maria/IEP_GIT/IEP_Git

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maria/IEP_GIT/IEP_Git/BMW

# Include any dependencies generated for this target.
include Ford/CMakeFiles/Ford.dir/depend.make

# Include the progress variables for this target.
include Ford/CMakeFiles/Ford.dir/progress.make

# Include the compile flags for this target's objects.
include Ford/CMakeFiles/Ford.dir/flags.make

Ford/CMakeFiles/Ford.dir/Ford.cpp.o: Ford/CMakeFiles/Ford.dir/flags.make
Ford/CMakeFiles/Ford.dir/Ford.cpp.o: ../Ford/Ford.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maria/IEP_GIT/IEP_Git/BMW/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Ford/CMakeFiles/Ford.dir/Ford.cpp.o"
	cd /home/maria/IEP_GIT/IEP_Git/BMW/Ford && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ford.dir/Ford.cpp.o -c /home/maria/IEP_GIT/IEP_Git/Ford/Ford.cpp

Ford/CMakeFiles/Ford.dir/Ford.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ford.dir/Ford.cpp.i"
	cd /home/maria/IEP_GIT/IEP_Git/BMW/Ford && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maria/IEP_GIT/IEP_Git/Ford/Ford.cpp > CMakeFiles/Ford.dir/Ford.cpp.i

Ford/CMakeFiles/Ford.dir/Ford.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ford.dir/Ford.cpp.s"
	cd /home/maria/IEP_GIT/IEP_Git/BMW/Ford && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maria/IEP_GIT/IEP_Git/Ford/Ford.cpp -o CMakeFiles/Ford.dir/Ford.cpp.s

# Object files for target Ford
Ford_OBJECTS = \
"CMakeFiles/Ford.dir/Ford.cpp.o"

# External object files for target Ford
Ford_EXTERNAL_OBJECTS =

Ford/libFord.a: Ford/CMakeFiles/Ford.dir/Ford.cpp.o
Ford/libFord.a: Ford/CMakeFiles/Ford.dir/build.make
Ford/libFord.a: Ford/CMakeFiles/Ford.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maria/IEP_GIT/IEP_Git/BMW/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libFord.a"
	cd /home/maria/IEP_GIT/IEP_Git/BMW/Ford && $(CMAKE_COMMAND) -P CMakeFiles/Ford.dir/cmake_clean_target.cmake
	cd /home/maria/IEP_GIT/IEP_Git/BMW/Ford && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ford.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Ford/CMakeFiles/Ford.dir/build: Ford/libFord.a

.PHONY : Ford/CMakeFiles/Ford.dir/build

Ford/CMakeFiles/Ford.dir/clean:
	cd /home/maria/IEP_GIT/IEP_Git/BMW/Ford && $(CMAKE_COMMAND) -P CMakeFiles/Ford.dir/cmake_clean.cmake
.PHONY : Ford/CMakeFiles/Ford.dir/clean

Ford/CMakeFiles/Ford.dir/depend:
	cd /home/maria/IEP_GIT/IEP_Git/BMW && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maria/IEP_GIT/IEP_Git /home/maria/IEP_GIT/IEP_Git/Ford /home/maria/IEP_GIT/IEP_Git/BMW /home/maria/IEP_GIT/IEP_Git/BMW/Ford /home/maria/IEP_GIT/IEP_Git/BMW/Ford/CMakeFiles/Ford.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Ford/CMakeFiles/Ford.dir/depend

