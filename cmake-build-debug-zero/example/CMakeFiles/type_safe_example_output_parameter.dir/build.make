# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rp4/Work/type_safe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rp4/Work/type_safe/cmake-build-debug-zero

# Include any dependencies generated for this target.
include example/CMakeFiles/type_safe_example_output_parameter.dir/depend.make

# Include the progress variables for this target.
include example/CMakeFiles/type_safe_example_output_parameter.dir/progress.make

# Include the compile flags for this target's objects.
include example/CMakeFiles/type_safe_example_output_parameter.dir/flags.make

example/CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.o: example/CMakeFiles/type_safe_example_output_parameter.dir/flags.make
example/CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.o: ../example/output_parameter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rp4/Work/type_safe/cmake-build-debug-zero/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.o"
	cd /home/rp4/Work/type_safe/cmake-build-debug-zero/example && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.o -c /home/rp4/Work/type_safe/example/output_parameter.cpp

example/CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.i"
	cd /home/rp4/Work/type_safe/cmake-build-debug-zero/example && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rp4/Work/type_safe/example/output_parameter.cpp > CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.i

example/CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.s"
	cd /home/rp4/Work/type_safe/cmake-build-debug-zero/example && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rp4/Work/type_safe/example/output_parameter.cpp -o CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.s

# Object files for target type_safe_example_output_parameter
type_safe_example_output_parameter_OBJECTS = \
"CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.o"

# External object files for target type_safe_example_output_parameter
type_safe_example_output_parameter_EXTERNAL_OBJECTS =

example/type_safe_example_output_parameter: example/CMakeFiles/type_safe_example_output_parameter.dir/output_parameter.cpp.o
example/type_safe_example_output_parameter: example/CMakeFiles/type_safe_example_output_parameter.dir/build.make
example/type_safe_example_output_parameter: example/CMakeFiles/type_safe_example_output_parameter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rp4/Work/type_safe/cmake-build-debug-zero/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable type_safe_example_output_parameter"
	cd /home/rp4/Work/type_safe/cmake-build-debug-zero/example && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/type_safe_example_output_parameter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
example/CMakeFiles/type_safe_example_output_parameter.dir/build: example/type_safe_example_output_parameter

.PHONY : example/CMakeFiles/type_safe_example_output_parameter.dir/build

example/CMakeFiles/type_safe_example_output_parameter.dir/clean:
	cd /home/rp4/Work/type_safe/cmake-build-debug-zero/example && $(CMAKE_COMMAND) -P CMakeFiles/type_safe_example_output_parameter.dir/cmake_clean.cmake
.PHONY : example/CMakeFiles/type_safe_example_output_parameter.dir/clean

example/CMakeFiles/type_safe_example_output_parameter.dir/depend:
	cd /home/rp4/Work/type_safe/cmake-build-debug-zero && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rp4/Work/type_safe /home/rp4/Work/type_safe/example /home/rp4/Work/type_safe/cmake-build-debug-zero /home/rp4/Work/type_safe/cmake-build-debug-zero/example /home/rp4/Work/type_safe/cmake-build-debug-zero/example/CMakeFiles/type_safe_example_output_parameter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : example/CMakeFiles/type_safe_example_output_parameter.dir/depend

