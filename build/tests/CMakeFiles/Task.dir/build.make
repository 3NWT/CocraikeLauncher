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
include tests/CMakeFiles/Task.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/Task.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/Task.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/Task.dir/flags.make

tests/CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/Task.dir/flags.make
tests/CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.o: tests/Task_autogen/mocs_compilation.cpp
tests/CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/Task.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.o"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.o -c /home/erdem/CocraikeLauncher/build/tests/Task_autogen/mocs_compilation.cpp

tests/CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.i"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erdem/CocraikeLauncher/build/tests/Task_autogen/mocs_compilation.cpp > CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.i

tests/CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.s"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erdem/CocraikeLauncher/build/tests/Task_autogen/mocs_compilation.cpp -o CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.s

tests/CMakeFiles/Task.dir/Task_test.cpp.o: tests/CMakeFiles/Task.dir/flags.make
tests/CMakeFiles/Task.dir/Task_test.cpp.o: /home/erdem/CocraikeLauncher/tests/Task_test.cpp
tests/CMakeFiles/Task.dir/Task_test.cpp.o: tests/CMakeFiles/Task.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/Task.dir/Task_test.cpp.o"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/Task.dir/Task_test.cpp.o -MF CMakeFiles/Task.dir/Task_test.cpp.o.d -o CMakeFiles/Task.dir/Task_test.cpp.o -c /home/erdem/CocraikeLauncher/tests/Task_test.cpp

tests/CMakeFiles/Task.dir/Task_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task.dir/Task_test.cpp.i"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erdem/CocraikeLauncher/tests/Task_test.cpp > CMakeFiles/Task.dir/Task_test.cpp.i

tests/CMakeFiles/Task.dir/Task_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task.dir/Task_test.cpp.s"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erdem/CocraikeLauncher/tests/Task_test.cpp -o CMakeFiles/Task.dir/Task_test.cpp.s

# Object files for target Task
Task_OBJECTS = \
"CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Task.dir/Task_test.cpp.o"

# External object files for target Task
Task_EXTERNAL_OBJECTS =

Task: tests/CMakeFiles/Task.dir/Task_autogen/mocs_compilation.cpp.o
Task: tests/CMakeFiles/Task.dir/Task_test.cpp.o
Task: tests/CMakeFiles/Task.dir/build.make
Task: launcher/libLauncher_logic.a
Task: /usr/lib/libQt6Test.so.6.6.0
Task: libraries/systeminfo/libsysteminfo.a
Task: libraries/murmur2/libLauncher_murmur2.a
Task: libraries/libnbtplusplus/libnbt++.a
Task: /usr/lib/libz.so
Task: libraries/qdcss/libqdcss.a
Task: buildconfig/libBuildConfig.a
Task: libraries/katabasis/libKatabasis.a
Task: /usr/lib/libQt6Widgets.so.6.6.0
Task: libraries/gamemode/libgamemode.a
Task: /usr/lib/libQt6Xml.so.6.6.0
Task: /usr/lib/libQt6Concurrent.so.6.6.0
Task: libraries/quazip/quazip/libquazip1-qt6.a
Task: /usr/lib/libz.so
Task: libraries/cmark/src/libcmark.a
Task: libraries/LocalPeer/libLocalPeer.a
Task: /usr/lib/libQt6Network.so.6.6.0
Task: /usr/lib/libQt6Core5Compat.so.6.6.0
Task: libraries/rainbow/libLauncher_rainbow.a
Task: /usr/lib/libQt6Gui.so.6.6.0
Task: /usr/lib/libGLX.so
Task: /usr/lib/libOpenGL.so
Task: /usr/lib/libQt6Core.so.6.6.0
Task: tests/CMakeFiles/Task.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../Task"
	cd /home/erdem/CocraikeLauncher/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/Task.dir/build: Task
.PHONY : tests/CMakeFiles/Task.dir/build

tests/CMakeFiles/Task.dir/clean:
	cd /home/erdem/CocraikeLauncher/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/Task.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/Task.dir/clean

tests/CMakeFiles/Task.dir/depend:
	cd /home/erdem/CocraikeLauncher/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erdem/CocraikeLauncher /home/erdem/CocraikeLauncher/tests /home/erdem/CocraikeLauncher/build /home/erdem/CocraikeLauncher/build/tests /home/erdem/CocraikeLauncher/build/tests/CMakeFiles/Task.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/Task.dir/depend
