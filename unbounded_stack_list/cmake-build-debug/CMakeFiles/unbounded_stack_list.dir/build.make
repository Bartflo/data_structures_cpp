# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\barte\Desktop\cpp\unbounded_stack_list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\barte\Desktop\cpp\unbounded_stack_list\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/unbounded_stack_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/unbounded_stack_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/unbounded_stack_list.dir/flags.make

CMakeFiles/unbounded_stack_list.dir/stack_test.cpp.obj: CMakeFiles/unbounded_stack_list.dir/flags.make
CMakeFiles/unbounded_stack_list.dir/stack_test.cpp.obj: ../stack_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\barte\Desktop\cpp\unbounded_stack_list\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/unbounded_stack_list.dir/stack_test.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\unbounded_stack_list.dir\stack_test.cpp.obj -c C:\Users\barte\Desktop\cpp\unbounded_stack_list\stack_test.cpp

CMakeFiles/unbounded_stack_list.dir/stack_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unbounded_stack_list.dir/stack_test.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\barte\Desktop\cpp\unbounded_stack_list\stack_test.cpp > CMakeFiles\unbounded_stack_list.dir\stack_test.cpp.i

CMakeFiles/unbounded_stack_list.dir/stack_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unbounded_stack_list.dir/stack_test.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\barte\Desktop\cpp\unbounded_stack_list\stack_test.cpp -o CMakeFiles\unbounded_stack_list.dir\stack_test.cpp.s

CMakeFiles/unbounded_stack_list.dir/unbounded_stack.cpp.obj: CMakeFiles/unbounded_stack_list.dir/flags.make
CMakeFiles/unbounded_stack_list.dir/unbounded_stack.cpp.obj: ../unbounded_stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\barte\Desktop\cpp\unbounded_stack_list\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/unbounded_stack_list.dir/unbounded_stack.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\unbounded_stack_list.dir\unbounded_stack.cpp.obj -c C:\Users\barte\Desktop\cpp\unbounded_stack_list\unbounded_stack.cpp

CMakeFiles/unbounded_stack_list.dir/unbounded_stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unbounded_stack_list.dir/unbounded_stack.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\barte\Desktop\cpp\unbounded_stack_list\unbounded_stack.cpp > CMakeFiles\unbounded_stack_list.dir\unbounded_stack.cpp.i

CMakeFiles/unbounded_stack_list.dir/unbounded_stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unbounded_stack_list.dir/unbounded_stack.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\barte\Desktop\cpp\unbounded_stack_list\unbounded_stack.cpp -o CMakeFiles\unbounded_stack_list.dir\unbounded_stack.cpp.s

# Object files for target unbounded_stack_list
unbounded_stack_list_OBJECTS = \
"CMakeFiles/unbounded_stack_list.dir/stack_test.cpp.obj" \
"CMakeFiles/unbounded_stack_list.dir/unbounded_stack.cpp.obj"

# External object files for target unbounded_stack_list
unbounded_stack_list_EXTERNAL_OBJECTS =

unbounded_stack_list.exe: CMakeFiles/unbounded_stack_list.dir/stack_test.cpp.obj
unbounded_stack_list.exe: CMakeFiles/unbounded_stack_list.dir/unbounded_stack.cpp.obj
unbounded_stack_list.exe: CMakeFiles/unbounded_stack_list.dir/build.make
unbounded_stack_list.exe: CMakeFiles/unbounded_stack_list.dir/linklibs.rsp
unbounded_stack_list.exe: CMakeFiles/unbounded_stack_list.dir/objects1.rsp
unbounded_stack_list.exe: CMakeFiles/unbounded_stack_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\barte\Desktop\cpp\unbounded_stack_list\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable unbounded_stack_list.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\unbounded_stack_list.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/unbounded_stack_list.dir/build: unbounded_stack_list.exe

.PHONY : CMakeFiles/unbounded_stack_list.dir/build

CMakeFiles/unbounded_stack_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\unbounded_stack_list.dir\cmake_clean.cmake
.PHONY : CMakeFiles/unbounded_stack_list.dir/clean

CMakeFiles/unbounded_stack_list.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\barte\Desktop\cpp\unbounded_stack_list C:\Users\barte\Desktop\cpp\unbounded_stack_list C:\Users\barte\Desktop\cpp\unbounded_stack_list\cmake-build-debug C:\Users\barte\Desktop\cpp\unbounded_stack_list\cmake-build-debug C:\Users\barte\Desktop\cpp\unbounded_stack_list\cmake-build-debug\CMakeFiles\unbounded_stack_list.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/unbounded_stack_list.dir/depend
