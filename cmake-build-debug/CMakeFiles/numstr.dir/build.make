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
include CMakeFiles/numstr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/numstr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/numstr.dir/flags.make

CMakeFiles/numstr.dir/ch4/numstr.cpp.o: CMakeFiles/numstr.dir/flags.make
CMakeFiles/numstr.dir/ch4/numstr.cpp.o: ../ch4/numstr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/numstr.dir/ch4/numstr.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/numstr.dir/ch4/numstr.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch4/numstr.cpp

CMakeFiles/numstr.dir/ch4/numstr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numstr.dir/ch4/numstr.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch4/numstr.cpp > CMakeFiles/numstr.dir/ch4/numstr.cpp.i

CMakeFiles/numstr.dir/ch4/numstr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numstr.dir/ch4/numstr.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch4/numstr.cpp -o CMakeFiles/numstr.dir/ch4/numstr.cpp.s

# Object files for target numstr
numstr_OBJECTS = \
"CMakeFiles/numstr.dir/ch4/numstr.cpp.o"

# External object files for target numstr
numstr_EXTERNAL_OBJECTS =

numstr: CMakeFiles/numstr.dir/ch4/numstr.cpp.o
numstr: CMakeFiles/numstr.dir/build.make
numstr: CMakeFiles/numstr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable numstr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/numstr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/numstr.dir/build: numstr

.PHONY : CMakeFiles/numstr.dir/build

CMakeFiles/numstr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/numstr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/numstr.dir/clean

CMakeFiles/numstr.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles/numstr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/numstr.dir/depend

