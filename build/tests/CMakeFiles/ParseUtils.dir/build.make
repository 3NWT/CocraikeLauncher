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
include tests/CMakeFiles/ParseUtils.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/ParseUtils.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/ParseUtils.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/ParseUtils.dir/flags.make

tests/CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/ParseUtils.dir/flags.make
tests/CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.o: tests/ParseUtils_autogen/mocs_compilation.cpp
tests/CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/ParseUtils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.o"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.o -c /home/erdem/CocraikeLauncher/build/tests/ParseUtils_autogen/mocs_compilation.cpp

tests/CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.i"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erdem/CocraikeLauncher/build/tests/ParseUtils_autogen/mocs_compilation.cpp > CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.i

tests/CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.s"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erdem/CocraikeLauncher/build/tests/ParseUtils_autogen/mocs_compilation.cpp -o CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.s

tests/CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.o: tests/CMakeFiles/ParseUtils.dir/flags.make
tests/CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.o: /home/erdem/CocraikeLauncher/tests/ParseUtils_test.cpp
tests/CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.o: tests/CMakeFiles/ParseUtils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.o"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.o -MF CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.o.d -o CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.o -c /home/erdem/CocraikeLauncher/tests/ParseUtils_test.cpp

tests/CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.i"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erdem/CocraikeLauncher/tests/ParseUtils_test.cpp > CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.i

tests/CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.s"
	cd /home/erdem/CocraikeLauncher/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erdem/CocraikeLauncher/tests/ParseUtils_test.cpp -o CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.s

# Object files for target ParseUtils
ParseUtils_OBJECTS = \
"CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.o"

# External object files for target ParseUtils
ParseUtils_EXTERNAL_OBJECTS =

ParseUtils: tests/CMakeFiles/ParseUtils.dir/ParseUtils_autogen/mocs_compilation.cpp.o
ParseUtils: tests/CMakeFiles/ParseUtils.dir/ParseUtils_test.cpp.o
ParseUtils: tests/CMakeFiles/ParseUtils.dir/build.make
ParseUtils: launcher/libLauncher_logic.a
ParseUtils: /usr/lib/libQt6Test.so.6.6.0
ParseUtils: libraries/systeminfo/libsysteminfo.a
ParseUtils: libraries/murmur2/libLauncher_murmur2.a
ParseUtils: libraries/libnbtplusplus/libnbt++.a
ParseUtils: /usr/lib/libz.so
ParseUtils: libraries/qdcss/libqdcss.a
ParseUtils: buildconfig/libBuildConfig.a
ParseUtils: libraries/katabasis/libKatabasis.a
ParseUtils: /usr/lib/libQt6Widgets.so.6.6.0
ParseUtils: libraries/gamemode/libgamemode.a
ParseUtils: /usr/lib/libQt6Xml.so.6.6.0
ParseUtils: /usr/lib/libQt6Concurrent.so.6.6.0
ParseUtils: libraries/quazip/quazip/libquazip1-qt6.a
ParseUtils: /usr/lib/libz.so
ParseUtils: libraries/cmark/src/libcmark.a
ParseUtils: libraries/LocalPeer/libLocalPeer.a
ParseUtils: /usr/lib/libQt6Network.so.6.6.0
ParseUtils: /usr/lib/libQt6Core5Compat.so.6.6.0
ParseUtils: libraries/rainbow/libLauncher_rainbow.a
ParseUtils: /usr/lib/libQt6Gui.so.6.6.0
ParseUtils: /usr/lib/libGLX.so
ParseUtils: /usr/lib/libOpenGL.so
ParseUtils: /usr/lib/libQt6Core.so.6.6.0
ParseUtils: tests/CMakeFiles/ParseUtils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/erdem/CocraikeLauncher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../ParseUtils"
	cd /home/erdem/CocraikeLauncher/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ParseUtils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/ParseUtils.dir/build: ParseUtils
.PHONY : tests/CMakeFiles/ParseUtils.dir/build

tests/CMakeFiles/ParseUtils.dir/clean:
	cd /home/erdem/CocraikeLauncher/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/ParseUtils.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/ParseUtils.dir/clean

tests/CMakeFiles/ParseUtils.dir/depend:
	cd /home/erdem/CocraikeLauncher/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erdem/CocraikeLauncher /home/erdem/CocraikeLauncher/tests /home/erdem/CocraikeLauncher/build /home/erdem/CocraikeLauncher/build/tests /home/erdem/CocraikeLauncher/build/tests/CMakeFiles/ParseUtils.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/ParseUtils.dir/depend
