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
include CMakeFiles/ifelse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ifelse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ifelse.dir/flags.make

CMakeFiles/ifelse.dir/ch6/ifelse.cpp.o: CMakeFiles/ifelse.dir/flags.make
CMakeFiles/ifelse.dir/ch6/ifelse.cpp.o: ../ch6/ifelse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ifelse.dir/ch6/ifelse.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ifelse.dir/ch6/ifelse.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch6/ifelse.cpp

CMakeFiles/ifelse.dir/ch6/ifelse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ifelse.dir/ch6/ifelse.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch6/ifelse.cpp > CMakeFiles/ifelse.dir/ch6/ifelse.cpp.i

CMakeFiles/ifelse.dir/ch6/ifelse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ifelse.dir/ch6/ifelse.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch6/ifelse.cpp -o CMakeFiles/ifelse.dir/ch6/ifelse.cpp.s

# Object files for target ifelse
ifelse_OBJECTS = \
"CMakeFiles/ifelse.dir/ch6/ifelse.cpp.o"

# External object files for target ifelse
ifelse_EXTERNAL_OBJECTS =

ifelse: CMakeFiles/ifelse.dir/ch6/ifelse.cpp.o
ifelse: CMakeFiles/ifelse.dir/build.make
ifelse: CMakeFiles/ifelse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ifelse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ifelse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ifelse.dir/build: ifelse

.PHONY : CMakeFiles/ifelse.dir/build

CMakeFiles/ifelse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ifelse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ifelse.dir/clean

CMakeFiles/ifelse.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles/ifelse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ifelse.dir/depend
