# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/guiru/CLionProjects/cplusplus-primer/ch11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/guiru/CLionProjects/cplusplus-primer/ch11/build

# Include any dependencies generated for this target.
include CMakeFiles/ch11.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ch11.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ch11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ch11.dir/flags.make

CMakeFiles/ch11.dir/strngbad.cpp.o: CMakeFiles/ch11.dir/flags.make
CMakeFiles/ch11.dir/strngbad.cpp.o: ../strngbad.cpp
CMakeFiles/ch11.dir/strngbad.cpp.o: CMakeFiles/ch11.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/ch11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ch11.dir/strngbad.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ch11.dir/strngbad.cpp.o -MF CMakeFiles/ch11.dir/strngbad.cpp.o.d -o CMakeFiles/ch11.dir/strngbad.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch11/strngbad.cpp

CMakeFiles/ch11.dir/strngbad.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ch11.dir/strngbad.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch11/strngbad.cpp > CMakeFiles/ch11.dir/strngbad.cpp.i

CMakeFiles/ch11.dir/strngbad.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ch11.dir/strngbad.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch11/strngbad.cpp -o CMakeFiles/ch11.dir/strngbad.cpp.s

CMakeFiles/ch11.dir/vegnews.cpp.o: CMakeFiles/ch11.dir/flags.make
CMakeFiles/ch11.dir/vegnews.cpp.o: ../vegnews.cpp
CMakeFiles/ch11.dir/vegnews.cpp.o: CMakeFiles/ch11.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/ch11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ch11.dir/vegnews.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ch11.dir/vegnews.cpp.o -MF CMakeFiles/ch11.dir/vegnews.cpp.o.d -o CMakeFiles/ch11.dir/vegnews.cpp.o -c /Users/guiru/CLionProjects/cplusplus-primer/ch11/vegnews.cpp

CMakeFiles/ch11.dir/vegnews.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ch11.dir/vegnews.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/guiru/CLionProjects/cplusplus-primer/ch11/vegnews.cpp > CMakeFiles/ch11.dir/vegnews.cpp.i

CMakeFiles/ch11.dir/vegnews.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ch11.dir/vegnews.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/guiru/CLionProjects/cplusplus-primer/ch11/vegnews.cpp -o CMakeFiles/ch11.dir/vegnews.cpp.s

# Object files for target ch11
ch11_OBJECTS = \
"CMakeFiles/ch11.dir/strngbad.cpp.o" \
"CMakeFiles/ch11.dir/vegnews.cpp.o"

# External object files for target ch11
ch11_EXTERNAL_OBJECTS =

../bin/ch11: CMakeFiles/ch11.dir/strngbad.cpp.o
../bin/ch11: CMakeFiles/ch11.dir/vegnews.cpp.o
../bin/ch11: CMakeFiles/ch11.dir/build.make
../bin/ch11: CMakeFiles/ch11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/guiru/CLionProjects/cplusplus-primer/ch11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/ch11"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ch11.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ch11.dir/build: ../bin/ch11
.PHONY : CMakeFiles/ch11.dir/build

CMakeFiles/ch11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ch11.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ch11.dir/clean

CMakeFiles/ch11.dir/depend:
	cd /Users/guiru/CLionProjects/cplusplus-primer/ch11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/guiru/CLionProjects/cplusplus-primer/ch11 /Users/guiru/CLionProjects/cplusplus-primer/ch11 /Users/guiru/CLionProjects/cplusplus-primer/ch11/build /Users/guiru/CLionProjects/cplusplus-primer/ch11/build /Users/guiru/CLionProjects/cplusplus-primer/ch11/build/CMakeFiles/ch11.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ch11.dir/depend

