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

# Include any dependencies generated for this target.
include libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/compiler_depend.make

# Include the progress variables for this target.
include libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/progress.make

# Include the compile flags for this target's objects.
include libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/flags.make

libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.o: libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/flags.make
libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.o: libraries/rainbow/Launcher_rainbow_autogen/mocs_compilation.cpp
libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.o: libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.o"
	cd /home/erdem/CocraikeLauncher/build/libraries/rainbow && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.o -c /home/erdem/CocraikeLauncher/build/libraries/rainbow/Launcher_rainbow_autogen/mocs_compilation.cpp

libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.i"
	cd /home/erdem/CocraikeLauncher/build/libraries/rainbow && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erdem/CocraikeLauncher/build/libraries/rainbow/Launcher_rainbow_autogen/mocs_compilation.cpp > CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.i

libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.s"
	cd /home/erdem/CocraikeLauncher/build/libraries/rainbow && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erdem/CocraikeLauncher/build/libraries/rainbow/Launcher_rainbow_autogen/mocs_compilation.cpp -o CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.s

libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.o: libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/flags.make
libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.o: /home/erdem/CocraikeLauncher/libraries/rainbow/src/rainbow.cpp
libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.o: libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.o"
	cd /home/erdem/CocraikeLauncher/build/libraries/rainbow && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.o -MF CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.o.d -o CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.o -c /home/erdem/CocraikeLauncher/libraries/rainbow/src/rainbow.cpp

libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.i"
	cd /home/erdem/CocraikeLauncher/build/libraries/rainbow && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erdem/CocraikeLauncher/libraries/rainbow/src/rainbow.cpp > CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.i

libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.s"
	cd /home/erdem/CocraikeLauncher/build/libraries/rainbow && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erdem/CocraikeLauncher/libraries/rainbow/src/rainbow.cpp -o CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.s

# Object files for target Launcher_rainbow
Launcher_rainbow_OBJECTS = \
"CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.o"

# External object files for target Launcher_rainbow
Launcher_rainbow_EXTERNAL_OBJECTS =

libraries/rainbow/libLauncher_rainbow.a: libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/Launcher_rainbow_autogen/mocs_compilation.cpp.o
libraries/rainbow/libLauncher_rainbow.a: libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/src/rainbow.cpp.o
libraries/rainbow/libLauncher_rainbow.a: libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/build.make
libraries/rainbow/libLauncher_rainbow.a: libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libLauncher_rainbow.a"
	cd /home/erdem/CocraikeLauncher/build/libraries/rainbow && $(CMAKE_COMMAND) -P CMakeFiles/Launcher_rainbow.dir/cmake_clean_target.cmake
	cd /home/erdem/CocraikeLauncher/build/libraries/rainbow && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Launcher_rainbow.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/build: libraries/rainbow/libLauncher_rainbow.a
.PHONY : libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/build

libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/clean:
	cd /home/erdem/CocraikeLauncher/build/libraries/rainbow && $(CMAKE_COMMAND) -P CMakeFiles/Launcher_rainbow.dir/cmake_clean.cmake
.PHONY : libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/clean

libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/depend:
	cd /home/erdem/CocraikeLauncher/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erdem/CocraikeLauncher /home/erdem/CocraikeLauncher/libraries/rainbow /home/erdem/CocraikeLauncher/build /home/erdem/CocraikeLauncher/build/libraries/rainbow /home/erdem/CocraikeLauncher/build/libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : libraries/rainbow/CMakeFiles/Launcher_rainbow.dir/depend
