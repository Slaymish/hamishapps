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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.6/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.6/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hamishburke/Documents/Coding/hamishapps/base/work

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hamishburke/Documents/Coding/hamishapps/base/build

# Include any dependencies generated for this target.
include CMakeFiles/imgui.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/imgui.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/imgui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/imgui.dir/flags.make

CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.o: CMakeFiles/imgui.dir/flags.make
CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.o: /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui.cpp
CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.o: CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/hamishburke/Documents/Coding/hamishapps/base/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.o -MF CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.o.d -o CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.o -c /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui.cpp

CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui.cpp > CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.i

CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui.cpp -o CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.s

CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.o: CMakeFiles/imgui.dir/flags.make
CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.o: /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_demo.cpp
CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.o: CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/hamishburke/Documents/Coding/hamishapps/base/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.o -MF CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.o.d -o CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.o -c /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_demo.cpp

CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_demo.cpp > CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.i

CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_demo.cpp -o CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.s

CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.o: CMakeFiles/imgui.dir/flags.make
CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.o: /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_draw.cpp
CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.o: CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/hamishburke/Documents/Coding/hamishapps/base/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.o -MF CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.o.d -o CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.o -c /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_draw.cpp

CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_draw.cpp > CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.i

CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_draw.cpp -o CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.s

CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.o: CMakeFiles/imgui.dir/flags.make
CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.o: /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_widgets.cpp
CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.o: CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/hamishburke/Documents/Coding/hamishapps/base/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.o -MF CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.o.d -o CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.o -c /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_widgets.cpp

CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_widgets.cpp > CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.i

CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hamishburke/Documents/Coding/hamishapps/base/work/lib/imgui/src/imgui_widgets.cpp -o CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.s

# Object files for target imgui
imgui_OBJECTS = \
"CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.o" \
"CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.o" \
"CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.o" \
"CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.o"

# External object files for target imgui
imgui_EXTERNAL_OBJECTS =

libimgui.a: CMakeFiles/imgui.dir/lib/imgui/src/imgui.cpp.o
libimgui.a: CMakeFiles/imgui.dir/lib/imgui/src/imgui_demo.cpp.o
libimgui.a: CMakeFiles/imgui.dir/lib/imgui/src/imgui_draw.cpp.o
libimgui.a: CMakeFiles/imgui.dir/lib/imgui/src/imgui_widgets.cpp.o
libimgui.a: CMakeFiles/imgui.dir/build.make
libimgui.a: CMakeFiles/imgui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/hamishburke/Documents/Coding/hamishapps/base/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libimgui.a"
	$(CMAKE_COMMAND) -P CMakeFiles/imgui.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imgui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/imgui.dir/build: libimgui.a
.PHONY : CMakeFiles/imgui.dir/build

CMakeFiles/imgui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/imgui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/imgui.dir/clean

CMakeFiles/imgui.dir/depend:
	cd /Users/hamishburke/Documents/Coding/hamishapps/base/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hamishburke/Documents/Coding/hamishapps/base/work /Users/hamishburke/Documents/Coding/hamishapps/base/work /Users/hamishburke/Documents/Coding/hamishapps/base/build /Users/hamishburke/Documents/Coding/hamishapps/base/build /Users/hamishburke/Documents/Coding/hamishapps/base/build/CMakeFiles/imgui.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/imgui.dir/depend

