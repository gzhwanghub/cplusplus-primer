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
include CMakeFiles/twoarg.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/twoarg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/twoarg.dir/flags.make

CMakeFiles/twoarg.dir/ch7/twoarg.cpp.o: CMakeFiles/twoarg.dir/flags.make
CMakeFiles/twoarg.dir/ch7/twoarg.cpp.o: ../ch7/twoarg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/twoarg.dir/ch7/twoarg.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/twoarg.dir/ch7/twoarg.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch7/twoarg.cpp

CMakeFiles/twoarg.dir/ch7/twoarg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/twoarg.dir/ch7/twoarg.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch7/twoarg.cpp > CMakeFiles/twoarg.dir/ch7/twoarg.cpp.i

CMakeFiles/twoarg.dir/ch7/twoarg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/twoarg.dir/ch7/twoarg.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch7/twoarg.cpp -o CMakeFiles/twoarg.dir/ch7/twoarg.cpp.s

# Object files for target twoarg
twoarg_OBJECTS = \
"CMakeFiles/twoarg.dir/ch7/twoarg.cpp.o"

# External object files for target twoarg
twoarg_EXTERNAL_OBJECTS =

twoarg: CMakeFiles/twoarg.dir/ch7/twoarg.cpp.o
twoarg: CMakeFiles/twoarg.dir/build.make
twoarg: CMakeFiles/twoarg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable twoarg"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/twoarg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/twoarg.dir/build: twoarg

.PHONY : CMakeFiles/twoarg.dir/build

CMakeFiles/twoarg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/twoarg.dir/cmake_clean.cmake
.PHONY : CMakeFiles/twoarg.dir/clean

CMakeFiles/twoarg.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles/twoarg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/twoarg.dir/depend

