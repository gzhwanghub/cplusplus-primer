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
include CMakeFiles/pra4_12_assgn_st.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pra4_12_assgn_st.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pra4_12_assgn_st.dir/flags.make

CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.o: CMakeFiles/pra4_12_assgn_st.dir/flags.make
CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.o: ../ch4/pra4_12_assgn_st.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch4/pra4_12_assgn_st.cpp

CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch4/pra4_12_assgn_st.cpp > CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.i

CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch4/pra4_12_assgn_st.cpp -o CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.s

# Object files for target pra4_12_assgn_st
pra4_12_assgn_st_OBJECTS = \
"CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.o"

# External object files for target pra4_12_assgn_st
pra4_12_assgn_st_EXTERNAL_OBJECTS =

pra4_12_assgn_st: CMakeFiles/pra4_12_assgn_st.dir/ch4/pra4_12_assgn_st.cpp.o
pra4_12_assgn_st: CMakeFiles/pra4_12_assgn_st.dir/build.make
pra4_12_assgn_st: CMakeFiles/pra4_12_assgn_st.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pra4_12_assgn_st"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pra4_12_assgn_st.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pra4_12_assgn_st.dir/build: pra4_12_assgn_st

.PHONY : CMakeFiles/pra4_12_assgn_st.dir/build

CMakeFiles/pra4_12_assgn_st.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pra4_12_assgn_st.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pra4_12_assgn_st.dir/clean

CMakeFiles/pra4_12_assgn_st.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug /Users/guiru/CLionProjects/cplusplus-primer/cmake-build-debug/CMakeFiles/pra4_12_assgn_st.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pra4_12_assgn_st.dir/depend

