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
include CMakeFiles/cctypes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cctypes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cctypes.dir/flags.make

CMakeFiles/cctypes.dir/ch6/cctypes.cpp.o: CMakeFiles/cctypes.dir/flags.make
CMakeFiles/cctypes.dir/ch6/cctypes.cpp.o: ../ch6/cctypes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cctypes.dir/ch6/cctypes.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cctypes.dir/ch6/cctypes.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch6/cctypes.cpp

CMakeFiles/cctypes.dir/ch6/cctypes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cctypes.dir/ch6/cctypes.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch6/cctypes.cpp > CMakeFiles/cctypes.dir/ch6/cctypes.cpp.i

CMakeFiles/cctypes.dir/ch6/cctypes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cctypes.dir/ch6/cctypes.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch6/cctypes.cpp -o CMakeFiles/cctypes.dir/ch6/cctypes.cpp.s

# Object files for target cctypes
cctypes_OBJECTS = \
"CMakeFiles/cctypes.dir/ch6/cctypes.cpp.o"

# External object files for target cctypes
cctypes_EXTERNAL_OBJECTS =

cctypes: CMakeFiles/cctypes.dir/ch6/cctypes.cpp.o
cctypes: CMakeFiles/cctypes.dir/build.make
cctypes: CMakeFiles/cctypes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cctypes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cctypes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cctypes.dir/build: cctypes

.PHONY : CMakeFiles/cctypes.dir/build

CMakeFiles/cctypes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cctypes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cctypes.dir/clean

CMakeFiles/cctypes.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles/cctypes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cctypes.dir/depend

