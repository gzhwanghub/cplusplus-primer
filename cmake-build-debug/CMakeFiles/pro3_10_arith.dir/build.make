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
include CMakeFiles/pro3_10_arith.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pro3_10_arith.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pro3_10_arith.dir/flags.make

CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.o: CMakeFiles/pro3_10_arith.dir/flags.make
CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.o: ../ch3/pro3_10_arith.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch3/pro3_10_arith.cpp

CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch3/pro3_10_arith.cpp > CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.i

CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch3/pro3_10_arith.cpp -o CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.s

# Object files for target pro3_10_arith
pro3_10_arith_OBJECTS = \
"CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.o"

# External object files for target pro3_10_arith
pro3_10_arith_EXTERNAL_OBJECTS =

pro3_10_arith: CMakeFiles/pro3_10_arith.dir/ch3/pro3_10_arith.cpp.o
pro3_10_arith: CMakeFiles/pro3_10_arith.dir/build.make
pro3_10_arith: CMakeFiles/pro3_10_arith.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pro3_10_arith"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pro3_10_arith.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pro3_10_arith.dir/build: pro3_10_arith

.PHONY : CMakeFiles/pro3_10_arith.dir/build

CMakeFiles/pro3_10_arith.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pro3_10_arith.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pro3_10_arith.dir/clean

CMakeFiles/pro3_10_arith.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles/pro3_10_arith.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pro3_10_arith.dir/depend

