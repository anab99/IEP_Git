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
CMAKE_BINARY_DIR = /home/maria/IEP_GIT/IEP_Git/build

# Include any dependencies generated for this target.
include BMW/CMakeFiles/BMW.dir/depend.make

# Include the progress variables for this target.
include BMW/CMakeFiles/BMW.dir/progress.make

# Include the compile flags for this target's objects.
include BMW/CMakeFiles/BMW.dir/flags.make

BMW/CMakeFiles/BMW.dir/BMW.cpp.o: BMW/CMakeFiles/BMW.dir/flags.make
BMW/CMakeFiles/BMW.dir/BMW.cpp.o: ../BMW/BMW.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maria/IEP_GIT/IEP_Git/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object BMW/CMakeFiles/BMW.dir/BMW.cpp.o"
	cd /home/maria/IEP_GIT/IEP_Git/build/BMW && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BMW.dir/BMW.cpp.o -c /home/maria/IEP_GIT/IEP_Git/BMW/BMW.cpp

BMW/CMakeFiles/BMW.dir/BMW.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BMW.dir/BMW.cpp.i"
	cd /home/maria/IEP_GIT/IEP_Git/build/BMW && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maria/IEP_GIT/IEP_Git/BMW/BMW.cpp > CMakeFiles/BMW.dir/BMW.cpp.i

BMW/CMakeFiles/BMW.dir/BMW.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BMW.dir/BMW.cpp.s"
	cd /home/maria/IEP_GIT/IEP_Git/build/BMW && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maria/IEP_GIT/IEP_Git/BMW/BMW.cpp -o CMakeFiles/BMW.dir/BMW.cpp.s

# Object files for target BMW
BMW_OBJECTS = \
"CMakeFiles/BMW.dir/BMW.cpp.o"

# External object files for target BMW
BMW_EXTERNAL_OBJECTS =

BMW/libBMW.a: BMW/CMakeFiles/BMW.dir/BMW.cpp.o
BMW/libBMW.a: BMW/CMakeFiles/BMW.dir/build.make
BMW/libBMW.a: BMW/CMakeFiles/BMW.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maria/IEP_GIT/IEP_Git/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libBMW.a"
	cd /home/maria/IEP_GIT/IEP_Git/build/BMW && $(CMAKE_COMMAND) -P CMakeFiles/BMW.dir/cmake_clean_target.cmake
	cd /home/maria/IEP_GIT/IEP_Git/build/BMW && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BMW.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
BMW/CMakeFiles/BMW.dir/build: BMW/libBMW.a

.PHONY : BMW/CMakeFiles/BMW.dir/build

BMW/CMakeFiles/BMW.dir/clean:
	cd /home/maria/IEP_GIT/IEP_Git/build/BMW && $(CMAKE_COMMAND) -P CMakeFiles/BMW.dir/cmake_clean.cmake
.PHONY : BMW/CMakeFiles/BMW.dir/clean

BMW/CMakeFiles/BMW.dir/depend:
	cd /home/maria/IEP_GIT/IEP_Git/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maria/IEP_GIT/IEP_Git /home/maria/IEP_GIT/IEP_Git/BMW /home/maria/IEP_GIT/IEP_Git/build /home/maria/IEP_GIT/IEP_Git/build/BMW /home/maria/IEP_GIT/IEP_Git/build/BMW/CMakeFiles/BMW.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : BMW/CMakeFiles/BMW.dir/depend

