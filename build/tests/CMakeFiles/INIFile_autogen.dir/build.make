# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/erdem/CocraikeLauncher

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/erdem/CocraikeLauncher/build

# Utility rule file for INIFile_autogen.

# Include any custom commands dependencies for this target.
include tests/CMakeFiles/INIFile_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/INIFile_autogen.dir/progress.make

tests/CMakeFiles/INIFile_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target INIFile"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/cmake -E cmake_autogen /home/erdem/CocraikeLauncher/build/tests/CMakeFiles/INIFile_autogen.dir/AutogenInfo.json Release

INIFile_autogen: tests/CMakeFiles/INIFile_autogen
INIFile_autogen: tests/CMakeFiles/INIFile_autogen.dir/build.make
.PHONY : INIFile_autogen

# Rule to build all files generated by this target.
tests/CMakeFiles/INIFile_autogen.dir/build: INIFile_autogen
.PHONY : tests/CMakeFiles/INIFile_autogen.dir/build

tests/CMakeFiles/INIFile_autogen.dir/clean:
	cd /home/erdem/CocraikeLauncher/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/INIFile_autogen.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/INIFile_autogen.dir/clean

tests/CMakeFiles/INIFile_autogen.dir/depend:
	cd /home/erdem/CocraikeLauncher/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erdem/CocraikeLauncher /home/erdem/CocraikeLauncher/tests /home/erdem/CocraikeLauncher/build /home/erdem/CocraikeLauncher/build/tests /home/erdem/CocraikeLauncher/build/tests/CMakeFiles/INIFile_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/INIFile_autogen.dir/depend

