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
include CMakeFiles/pra7_09_strgfun.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pra7_09_strgfun.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pra7_09_strgfun.dir/flags.make

CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.o: CMakeFiles/pra7_09_strgfun.dir/flags.make
CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.o: ../ch7/pra7_09_strgfun.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch7/pra7_09_strgfun.cpp

CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch7/pra7_09_strgfun.cpp > CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.i

CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch7/pra7_09_strgfun.cpp -o CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.s

# Object files for target pra7_09_strgfun
pra7_09_strgfun_OBJECTS = \
"CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.o"

# External object files for target pra7_09_strgfun
pra7_09_strgfun_EXTERNAL_OBJECTS =

pra7_09_strgfun: CMakeFiles/pra7_09_strgfun.dir/ch7/pra7_09_strgfun.cpp.o
pra7_09_strgfun: CMakeFiles/pra7_09_strgfun.dir/build.make
pra7_09_strgfun: CMakeFiles/pra7_09_strgfun.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pra7_09_strgfun"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pra7_09_strgfun.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pra7_09_strgfun.dir/build: pra7_09_strgfun

.PHONY : CMakeFiles/pra7_09_strgfun.dir/build

CMakeFiles/pra7_09_strgfun.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pra7_09_strgfun.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pra7_09_strgfun.dir/clean

CMakeFiles/pra7_09_strgfun.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles/pra7_09_strgfun.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pra7_09_strgfun.dir/depend

