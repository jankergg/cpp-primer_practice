# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.13.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.13.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/janko/Projects/cpp/learncpp/learncpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/janko/Projects/cpp/learncpp/learncpp/build

# Include any dependencies generated for this target.
include CMakeFiles/learncpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/learncpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learncpp.dir/flags.make

CMakeFiles/learncpp.dir/main.o: CMakeFiles/learncpp.dir/flags.make
CMakeFiles/learncpp.dir/main.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/janko/Projects/cpp/learncpp/learncpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/learncpp.dir/main.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/learncpp.dir/main.o -c /Users/janko/Projects/cpp/learncpp/learncpp/main.cpp

CMakeFiles/learncpp.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/learncpp.dir/main.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/janko/Projects/cpp/learncpp/learncpp/main.cpp > CMakeFiles/learncpp.dir/main.i

CMakeFiles/learncpp.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/learncpp.dir/main.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/janko/Projects/cpp/learncpp/learncpp/main.cpp -o CMakeFiles/learncpp.dir/main.s

# Object files for target learncpp
learncpp_OBJECTS = \
"CMakeFiles/learncpp.dir/main.o"

# External object files for target learncpp
learncpp_EXTERNAL_OBJECTS =

learncpp: CMakeFiles/learncpp.dir/main.o
learncpp: CMakeFiles/learncpp.dir/build.make
learncpp: CMakeFiles/learncpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/janko/Projects/cpp/learncpp/learncpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable learncpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/learncpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learncpp.dir/build: learncpp

.PHONY : CMakeFiles/learncpp.dir/build

CMakeFiles/learncpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/learncpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/learncpp.dir/clean

CMakeFiles/learncpp.dir/depend:
	cd /Users/janko/Projects/cpp/learncpp/learncpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/janko/Projects/cpp/learncpp/learncpp /Users/janko/Projects/cpp/learncpp/learncpp /Users/janko/Projects/cpp/learncpp/learncpp/build /Users/janko/Projects/cpp/learncpp/learncpp/build /Users/janko/Projects/cpp/learncpp/learncpp/build/CMakeFiles/learncpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/learncpp.dir/depend

