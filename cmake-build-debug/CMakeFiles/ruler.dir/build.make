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
include CMakeFiles/ruler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ruler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ruler.dir/flags.make

CMakeFiles/ruler.dir/ch7/ruler.cpp.o: CMakeFiles/ruler.dir/flags.make
CMakeFiles/ruler.dir/ch7/ruler.cpp.o: ../ch7/ruler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ruler.dir/ch7/ruler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ruler.dir/ch7/ruler.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch7/ruler.cpp

CMakeFiles/ruler.dir/ch7/ruler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ruler.dir/ch7/ruler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch7/ruler.cpp > CMakeFiles/ruler.dir/ch7/ruler.cpp.i

CMakeFiles/ruler.dir/ch7/ruler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ruler.dir/ch7/ruler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch7/ruler.cpp -o CMakeFiles/ruler.dir/ch7/ruler.cpp.s

# Object files for target ruler
ruler_OBJECTS = \
"CMakeFiles/ruler.dir/ch7/ruler.cpp.o"

# External object files for target ruler
ruler_EXTERNAL_OBJECTS =

ruler: CMakeFiles/ruler.dir/ch7/ruler.cpp.o
ruler: CMakeFiles/ruler.dir/build.make
ruler: CMakeFiles/ruler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ruler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ruler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ruler.dir/build: ruler

.PHONY : CMakeFiles/ruler.dir/build

CMakeFiles/ruler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ruler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ruler.dir/clean

CMakeFiles/ruler.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles/ruler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ruler.dir/depend

