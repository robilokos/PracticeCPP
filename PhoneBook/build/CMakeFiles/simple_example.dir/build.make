# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/runner/PracticeCPP/PhoneBook

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/runner/PracticeCPP/PhoneBook/build

# Include any dependencies generated for this target.
include CMakeFiles/simple_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simple_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple_example.dir/flags.make

CMakeFiles/simple_example.dir/main.cpp.o: CMakeFiles/simple_example.dir/flags.make
CMakeFiles/simple_example.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/PracticeCPP/PhoneBook/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple_example.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_example.dir/main.cpp.o -c /home/runner/PracticeCPP/PhoneBook/main.cpp

CMakeFiles/simple_example.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_example.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/runner/PracticeCPP/PhoneBook/main.cpp > CMakeFiles/simple_example.dir/main.cpp.i

CMakeFiles/simple_example.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_example.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/runner/PracticeCPP/PhoneBook/main.cpp -o CMakeFiles/simple_example.dir/main.cpp.s

CMakeFiles/simple_example.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/simple_example.dir/main.cpp.o.requires

CMakeFiles/simple_example.dir/main.cpp.o.provides: CMakeFiles/simple_example.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/simple_example.dir/build.make CMakeFiles/simple_example.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/simple_example.dir/main.cpp.o.provides

CMakeFiles/simple_example.dir/main.cpp.o.provides.build: CMakeFiles/simple_example.dir/main.cpp.o


# Object files for target simple_example
simple_example_OBJECTS = \
"CMakeFiles/simple_example.dir/main.cpp.o"

# External object files for target simple_example
simple_example_EXTERNAL_OBJECTS =

simple_example: CMakeFiles/simple_example.dir/main.cpp.o
simple_example: CMakeFiles/simple_example.dir/build.make
simple_example: CMakeFiles/simple_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/runner/PracticeCPP/PhoneBook/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable simple_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple_example.dir/build: simple_example

.PHONY : CMakeFiles/simple_example.dir/build

CMakeFiles/simple_example.dir/requires: CMakeFiles/simple_example.dir/main.cpp.o.requires

.PHONY : CMakeFiles/simple_example.dir/requires

CMakeFiles/simple_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple_example.dir/clean

CMakeFiles/simple_example.dir/depend:
	cd /home/runner/PracticeCPP/PhoneBook/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/runner/PracticeCPP/PhoneBook /home/runner/PracticeCPP/PhoneBook /home/runner/PracticeCPP/PhoneBook/build /home/runner/PracticeCPP/PhoneBook/build /home/runner/PracticeCPP/PhoneBook/build/CMakeFiles/simple_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple_example.dir/depend

