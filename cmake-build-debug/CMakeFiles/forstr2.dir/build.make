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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/guiru/CLionProjects/cplusplus-primer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/forstr2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/forstr2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/forstr2.dir/flags.make

CMakeFiles/forstr2.dir/ch5/forstr2.cpp.o: CMakeFiles/forstr2.dir/flags.make
CMakeFiles/forstr2.dir/ch5/forstr2.cpp.o: ../ch5/forstr2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/forstr2.dir/ch5/forstr2.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/forstr2.dir/ch5/forstr2.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch5/forstr2.cpp

CMakeFiles/forstr2.dir/ch5/forstr2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/forstr2.dir/ch5/forstr2.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch5/forstr2.cpp > CMakeFiles/forstr2.dir/ch5/forstr2.cpp.i

CMakeFiles/forstr2.dir/ch5/forstr2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/forstr2.dir/ch5/forstr2.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch5/forstr2.cpp -o CMakeFiles/forstr2.dir/ch5/forstr2.cpp.s

# Object files for target forstr2
forstr2_OBJECTS = \
"CMakeFiles/forstr2.dir/ch5/forstr2.cpp.o"

# External object files for target forstr2
forstr2_EXTERNAL_OBJECTS =

forstr2: CMakeFiles/forstr2.dir/ch5/forstr2.cpp.o
forstr2: CMakeFiles/forstr2.dir/build.make
forstr2: CMakeFiles/forstr2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable forstr2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/forstr2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/forstr2.dir/build: forstr2

.PHONY : CMakeFiles/forstr2.dir/build

CMakeFiles/forstr2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/forstr2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/forstr2.dir/clean

CMakeFiles/forstr2.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles/forstr2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/forstr2.dir/depend
