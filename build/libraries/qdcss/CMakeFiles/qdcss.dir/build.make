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
include libraries/qdcss/CMakeFiles/qdcss.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libraries/qdcss/CMakeFiles/qdcss.dir/compiler_depend.make

# Include the progress variables for this target.
include libraries/qdcss/CMakeFiles/qdcss.dir/progress.make

# Include the compile flags for this target's objects.
include libraries/qdcss/CMakeFiles/qdcss.dir/flags.make

libraries/qdcss/CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.o: libraries/qdcss/CMakeFiles/qdcss.dir/flags.make
libraries/qdcss/CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.o: libraries/qdcss/qdcss_autogen/mocs_compilation.cpp
libraries/qdcss/CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.o: libraries/qdcss/CMakeFiles/qdcss.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libraries/qdcss/CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.o"
	cd /home/erdem/CocraikeLauncher/build/libraries/qdcss && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libraries/qdcss/CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.o -MF CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.o -c /home/erdem/CocraikeLauncher/build/libraries/qdcss/qdcss_autogen/mocs_compilation.cpp

libraries/qdcss/CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.i"
	cd /home/erdem/CocraikeLauncher/build/libraries/qdcss && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erdem/CocraikeLauncher/build/libraries/qdcss/qdcss_autogen/mocs_compilation.cpp > CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.i

libraries/qdcss/CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.s"
	cd /home/erdem/CocraikeLauncher/build/libraries/qdcss && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erdem/CocraikeLauncher/build/libraries/qdcss/qdcss_autogen/mocs_compilation.cpp -o CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.s

libraries/qdcss/CMakeFiles/qdcss.dir/src/qdcss.cpp.o: libraries/qdcss/CMakeFiles/qdcss.dir/flags.make
libraries/qdcss/CMakeFiles/qdcss.dir/src/qdcss.cpp.o: /home/erdem/CocraikeLauncher/libraries/qdcss/src/qdcss.cpp
libraries/qdcss/CMakeFiles/qdcss.dir/src/qdcss.cpp.o: libraries/qdcss/CMakeFiles/qdcss.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libraries/qdcss/CMakeFiles/qdcss.dir/src/qdcss.cpp.o"
	cd /home/erdem/CocraikeLauncher/build/libraries/qdcss && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libraries/qdcss/CMakeFiles/qdcss.dir/src/qdcss.cpp.o -MF CMakeFiles/qdcss.dir/src/qdcss.cpp.o.d -o CMakeFiles/qdcss.dir/src/qdcss.cpp.o -c /home/erdem/CocraikeLauncher/libraries/qdcss/src/qdcss.cpp

libraries/qdcss/CMakeFiles/qdcss.dir/src/qdcss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qdcss.dir/src/qdcss.cpp.i"
	cd /home/erdem/CocraikeLauncher/build/libraries/qdcss && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erdem/CocraikeLauncher/libraries/qdcss/src/qdcss.cpp > CMakeFiles/qdcss.dir/src/qdcss.cpp.i

libraries/qdcss/CMakeFiles/qdcss.dir/src/qdcss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qdcss.dir/src/qdcss.cpp.s"
	cd /home/erdem/CocraikeLauncher/build/libraries/qdcss && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erdem/CocraikeLauncher/libraries/qdcss/src/qdcss.cpp -o CMakeFiles/qdcss.dir/src/qdcss.cpp.s

# Object files for target qdcss
qdcss_OBJECTS = \
"CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/qdcss.dir/src/qdcss.cpp.o"

# External object files for target qdcss
qdcss_EXTERNAL_OBJECTS =

libraries/qdcss/libqdcss.a: libraries/qdcss/CMakeFiles/qdcss.dir/qdcss_autogen/mocs_compilation.cpp.o
libraries/qdcss/libqdcss.a: libraries/qdcss/CMakeFiles/qdcss.dir/src/qdcss.cpp.o
libraries/qdcss/libqdcss.a: libraries/qdcss/CMakeFiles/qdcss.dir/build.make
libraries/qdcss/libqdcss.a: libraries/qdcss/CMakeFiles/qdcss.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libqdcss.a"
	cd /home/erdem/CocraikeLauncher/build/libraries/qdcss && $(CMAKE_COMMAND) -P CMakeFiles/qdcss.dir/cmake_clean_target.cmake
	cd /home/erdem/CocraikeLauncher/build/libraries/qdcss && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qdcss.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libraries/qdcss/CMakeFiles/qdcss.dir/build: libraries/qdcss/libqdcss.a
.PHONY : libraries/qdcss/CMakeFiles/qdcss.dir/build

libraries/qdcss/CMakeFiles/qdcss.dir/clean:
	cd /home/erdem/CocraikeLauncher/build/libraries/qdcss && $(CMAKE_COMMAND) -P CMakeFiles/qdcss.dir/cmake_clean.cmake
.PHONY : libraries/qdcss/CMakeFiles/qdcss.dir/clean

libraries/qdcss/CMakeFiles/qdcss.dir/depend:
	cd /home/erdem/CocraikeLauncher/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erdem/CocraikeLauncher /home/erdem/CocraikeLauncher/libraries/qdcss /home/erdem/CocraikeLauncher/build /home/erdem/CocraikeLauncher/build/libraries/qdcss /home/erdem/CocraikeLauncher/build/libraries/qdcss/CMakeFiles/qdcss.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : libraries/qdcss/CMakeFiles/qdcss.dir/depend
