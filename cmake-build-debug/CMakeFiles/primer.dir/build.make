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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/janko/Projects/cpp/primer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/janko/Projects/cpp/primer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/primer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/primer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/primer.dir/flags.make

CMakeFiles/primer.dir/main.cpp.o: CMakeFiles/primer.dir/flags.make
CMakeFiles/primer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/janko/Projects/cpp/primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/primer.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/primer.dir/main.cpp.o -c /Users/janko/Projects/cpp/primer/main.cpp

CMakeFiles/primer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/primer.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/janko/Projects/cpp/primer/main.cpp > CMakeFiles/primer.dir/main.cpp.i

CMakeFiles/primer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/primer.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/janko/Projects/cpp/primer/main.cpp -o CMakeFiles/primer.dir/main.cpp.s

CMakeFiles/primer.dir/chapter6/myfun.cpp.o: CMakeFiles/primer.dir/flags.make
CMakeFiles/primer.dir/chapter6/myfun.cpp.o: ../chapter6/myfun.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/janko/Projects/cpp/primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/primer.dir/chapter6/myfun.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/primer.dir/chapter6/myfun.cpp.o -c /Users/janko/Projects/cpp/primer/chapter6/myfun.cpp

CMakeFiles/primer.dir/chapter6/myfun.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/primer.dir/chapter6/myfun.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/janko/Projects/cpp/primer/chapter6/myfun.cpp > CMakeFiles/primer.dir/chapter6/myfun.cpp.i

CMakeFiles/primer.dir/chapter6/myfun.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/primer.dir/chapter6/myfun.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/janko/Projects/cpp/primer/chapter6/myfun.cpp -o CMakeFiles/primer.dir/chapter6/myfun.cpp.s

CMakeFiles/primer.dir/chapter7/myClass.cpp.o: CMakeFiles/primer.dir/flags.make
CMakeFiles/primer.dir/chapter7/myClass.cpp.o: ../chapter7/myClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/janko/Projects/cpp/primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/primer.dir/chapter7/myClass.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/primer.dir/chapter7/myClass.cpp.o -c /Users/janko/Projects/cpp/primer/chapter7/myClass.cpp

CMakeFiles/primer.dir/chapter7/myClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/primer.dir/chapter7/myClass.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/janko/Projects/cpp/primer/chapter7/myClass.cpp > CMakeFiles/primer.dir/chapter7/myClass.cpp.i

CMakeFiles/primer.dir/chapter7/myClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/primer.dir/chapter7/myClass.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/janko/Projects/cpp/primer/chapter7/myClass.cpp -o CMakeFiles/primer.dir/chapter7/myClass.cpp.s

# Object files for target primer
primer_OBJECTS = \
"CMakeFiles/primer.dir/main.cpp.o" \
"CMakeFiles/primer.dir/chapter6/myfun.cpp.o" \
"CMakeFiles/primer.dir/chapter7/myClass.cpp.o"

# External object files for target primer
primer_EXTERNAL_OBJECTS =

primer: CMakeFiles/primer.dir/main.cpp.o
primer: CMakeFiles/primer.dir/chapter6/myfun.cpp.o
primer: CMakeFiles/primer.dir/chapter7/myClass.cpp.o
primer: CMakeFiles/primer.dir/build.make
primer: CMakeFiles/primer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/janko/Projects/cpp/primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable primer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/primer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/primer.dir/build: primer

.PHONY : CMakeFiles/primer.dir/build

CMakeFiles/primer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/primer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/primer.dir/clean

CMakeFiles/primer.dir/depend:
	cd /Users/janko/Projects/cpp/primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/janko/Projects/cpp/primer /Users/janko/Projects/cpp/primer /Users/janko/Projects/cpp/primer/cmake-build-debug /Users/janko/Projects/cpp/primer/cmake-build-debug /Users/janko/Projects/cpp/primer/cmake-build-debug/CMakeFiles/primer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/primer.dir/depend

