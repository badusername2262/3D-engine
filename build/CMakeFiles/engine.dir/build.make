# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/alexr/Desktop/3d-engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexr/Desktop/3d-engine/build

# Include any dependencies generated for this target.
include CMakeFiles/engine.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/engine.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/engine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/engine.dir/flags.make

CMakeFiles/engine.dir/main.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/main.cpp.o: ../main.cpp
CMakeFiles/engine.dir/main.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/engine.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/main.cpp.o -MF CMakeFiles/engine.dir/main.cpp.o.d -o CMakeFiles/engine.dir/main.cpp.o -c /home/alexr/Desktop/3d-engine/main.cpp

CMakeFiles/engine.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/main.cpp > CMakeFiles/engine.dir/main.cpp.i

CMakeFiles/engine.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/main.cpp -o CMakeFiles/engine.dir/main.cpp.s

CMakeFiles/engine.dir/src/Graphics/window.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/Graphics/window.cpp.o: ../src/Graphics/window.cpp
CMakeFiles/engine.dir/src/Graphics/window.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/engine.dir/src/Graphics/window.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/src/Graphics/window.cpp.o -MF CMakeFiles/engine.dir/src/Graphics/window.cpp.o.d -o CMakeFiles/engine.dir/src/Graphics/window.cpp.o -c /home/alexr/Desktop/3d-engine/src/Graphics/window.cpp

CMakeFiles/engine.dir/src/Graphics/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/Graphics/window.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/src/Graphics/window.cpp > CMakeFiles/engine.dir/src/Graphics/window.cpp.i

CMakeFiles/engine.dir/src/Graphics/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/Graphics/window.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/src/Graphics/window.cpp -o CMakeFiles/engine.dir/src/Graphics/window.cpp.s

CMakeFiles/engine.dir/src/Utils/camera.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/Utils/camera.cpp.o: ../src/Utils/camera.cpp
CMakeFiles/engine.dir/src/Utils/camera.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/engine.dir/src/Utils/camera.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/src/Utils/camera.cpp.o -MF CMakeFiles/engine.dir/src/Utils/camera.cpp.o.d -o CMakeFiles/engine.dir/src/Utils/camera.cpp.o -c /home/alexr/Desktop/3d-engine/src/Utils/camera.cpp

CMakeFiles/engine.dir/src/Utils/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/Utils/camera.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/src/Utils/camera.cpp > CMakeFiles/engine.dir/src/Utils/camera.cpp.i

CMakeFiles/engine.dir/src/Utils/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/Utils/camera.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/src/Utils/camera.cpp -o CMakeFiles/engine.dir/src/Utils/camera.cpp.s

CMakeFiles/engine.dir/include/imgui/imgui.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/include/imgui/imgui.cpp.o: ../include/imgui/imgui.cpp
CMakeFiles/engine.dir/include/imgui/imgui.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/engine.dir/include/imgui/imgui.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/include/imgui/imgui.cpp.o -MF CMakeFiles/engine.dir/include/imgui/imgui.cpp.o.d -o CMakeFiles/engine.dir/include/imgui/imgui.cpp.o -c /home/alexr/Desktop/3d-engine/include/imgui/imgui.cpp

CMakeFiles/engine.dir/include/imgui/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/include/imgui/imgui.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/include/imgui/imgui.cpp > CMakeFiles/engine.dir/include/imgui/imgui.cpp.i

CMakeFiles/engine.dir/include/imgui/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/include/imgui/imgui.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/include/imgui/imgui.cpp -o CMakeFiles/engine.dir/include/imgui/imgui.cpp.s

CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.o: ../include/imgui/imgui_demo.cpp
CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.o -MF CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.o.d -o CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.o -c /home/alexr/Desktop/3d-engine/include/imgui/imgui_demo.cpp

CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/include/imgui/imgui_demo.cpp > CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.i

CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/include/imgui/imgui_demo.cpp -o CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.s

CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.o: ../include/imgui/imgui_draw.cpp
CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.o -MF CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.o.d -o CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.o -c /home/alexr/Desktop/3d-engine/include/imgui/imgui_draw.cpp

CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/include/imgui/imgui_draw.cpp > CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.i

CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/include/imgui/imgui_draw.cpp -o CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.s

CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.o: ../include/imgui/imgui_impl_glfw.cpp
CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.o -MF CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.o.d -o CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.o -c /home/alexr/Desktop/3d-engine/include/imgui/imgui_impl_glfw.cpp

CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/include/imgui/imgui_impl_glfw.cpp > CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.i

CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/include/imgui/imgui_impl_glfw.cpp -o CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.s

CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.o: ../include/imgui/imgui_impl_opengl3.cpp
CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.o -MF CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.o.d -o CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.o -c /home/alexr/Desktop/3d-engine/include/imgui/imgui_impl_opengl3.cpp

CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/include/imgui/imgui_impl_opengl3.cpp > CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.i

CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/include/imgui/imgui_impl_opengl3.cpp -o CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.s

CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.o: ../include/imgui/imgui_tables.cpp
CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.o -MF CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.o.d -o CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.o -c /home/alexr/Desktop/3d-engine/include/imgui/imgui_tables.cpp

CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/include/imgui/imgui_tables.cpp > CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.i

CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/include/imgui/imgui_tables.cpp -o CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.s

CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.o: ../include/imgui/imgui_widgets.cpp
CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.o: CMakeFiles/engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.o -MF CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.o.d -o CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.o -c /home/alexr/Desktop/3d-engine/include/imgui/imgui_widgets.cpp

CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexr/Desktop/3d-engine/include/imgui/imgui_widgets.cpp > CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.i

CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexr/Desktop/3d-engine/include/imgui/imgui_widgets.cpp -o CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.s

# Object files for target engine
engine_OBJECTS = \
"CMakeFiles/engine.dir/main.cpp.o" \
"CMakeFiles/engine.dir/src/Graphics/window.cpp.o" \
"CMakeFiles/engine.dir/src/Utils/camera.cpp.o" \
"CMakeFiles/engine.dir/include/imgui/imgui.cpp.o" \
"CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.o" \
"CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.o" \
"CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.o" \
"CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.o" \
"CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.o" \
"CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.o"

# External object files for target engine
engine_EXTERNAL_OBJECTS =

../bin/engine: CMakeFiles/engine.dir/main.cpp.o
../bin/engine: CMakeFiles/engine.dir/src/Graphics/window.cpp.o
../bin/engine: CMakeFiles/engine.dir/src/Utils/camera.cpp.o
../bin/engine: CMakeFiles/engine.dir/include/imgui/imgui.cpp.o
../bin/engine: CMakeFiles/engine.dir/include/imgui/imgui_demo.cpp.o
../bin/engine: CMakeFiles/engine.dir/include/imgui/imgui_draw.cpp.o
../bin/engine: CMakeFiles/engine.dir/include/imgui/imgui_impl_glfw.cpp.o
../bin/engine: CMakeFiles/engine.dir/include/imgui/imgui_impl_opengl3.cpp.o
../bin/engine: CMakeFiles/engine.dir/include/imgui/imgui_tables.cpp.o
../bin/engine: CMakeFiles/engine.dir/include/imgui/imgui_widgets.cpp.o
../bin/engine: CMakeFiles/engine.dir/build.make
../bin/engine: CMakeFiles/engine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alexr/Desktop/3d-engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ../bin/engine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/engine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/engine.dir/build: ../bin/engine
.PHONY : CMakeFiles/engine.dir/build

CMakeFiles/engine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/engine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/engine.dir/clean

CMakeFiles/engine.dir/depend:
	cd /home/alexr/Desktop/3d-engine/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexr/Desktop/3d-engine /home/alexr/Desktop/3d-engine /home/alexr/Desktop/3d-engine/build /home/alexr/Desktop/3d-engine/build /home/alexr/Desktop/3d-engine/build/CMakeFiles/engine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/engine.dir/depend

