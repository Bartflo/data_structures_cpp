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
CMAKE_SOURCE_DIR = C:\Users\barte\Desktop\cpp\bounded_stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\barte\Desktop\cpp\bounded_stack\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bounded_stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bounded_stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bounded_stack.dir/flags.make

CMakeFiles/bounded_stack.dir/bounded_stack.cpp.obj: CMakeFiles/bounded_stack.dir/flags.make
CMakeFiles/bounded_stack.dir/bounded_stack.cpp.obj: CMakeFiles/bounded_stack.dir/includes_CXX.rsp
CMakeFiles/bounded_stack.dir/bounded_stack.cpp.obj: ../bounded_stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\barte\Desktop\cpp\bounded_stack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bounded_stack.dir/bounded_stack.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\bounded_stack.dir\bounded_stack.cpp.obj -c C:\Users\barte\Desktop\cpp\bounded_stack\bounded_stack.cpp

CMakeFiles/bounded_stack.dir/bounded_stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bounded_stack.dir/bounded_stack.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\barte\Desktop\cpp\bounded_stack\bounded_stack.cpp > CMakeFiles\bounded_stack.dir\bounded_stack.cpp.i

CMakeFiles/bounded_stack.dir/bounded_stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bounded_stack.dir/bounded_stack.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\barte\Desktop\cpp\bounded_stack\bounded_stack.cpp -o CMakeFiles\bounded_stack.dir\bounded_stack.cpp.s

CMakeFiles/bounded_stack.dir/stack_test.cpp.obj: CMakeFiles/bounded_stack.dir/flags.make
CMakeFiles/bounded_stack.dir/stack_test.cpp.obj: CMakeFiles/bounded_stack.dir/includes_CXX.rsp
CMakeFiles/bounded_stack.dir/stack_test.cpp.obj: ../stack_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\barte\Desktop\cpp\bounded_stack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bounded_stack.dir/stack_test.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\bounded_stack.dir\stack_test.cpp.obj -c C:\Users\barte\Desktop\cpp\bounded_stack\stack_test.cpp

CMakeFiles/bounded_stack.dir/stack_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bounded_stack.dir/stack_test.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\barte\Desktop\cpp\bounded_stack\stack_test.cpp > CMakeFiles\bounded_stack.dir\stack_test.cpp.i

CMakeFiles/bounded_stack.dir/stack_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bounded_stack.dir/stack_test.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\barte\Desktop\cpp\bounded_stack\stack_test.cpp -o CMakeFiles\bounded_stack.dir\stack_test.cpp.s

# Object files for target bounded_stack
bounded_stack_OBJECTS = \
"CMakeFiles/bounded_stack.dir/bounded_stack.cpp.obj" \
"CMakeFiles/bounded_stack.dir/stack_test.cpp.obj"

# External object files for target bounded_stack
bounded_stack_EXTERNAL_OBJECTS =

bounded_stack.exe: CMakeFiles/bounded_stack.dir/bounded_stack.cpp.obj
bounded_stack.exe: CMakeFiles/bounded_stack.dir/stack_test.cpp.obj
bounded_stack.exe: CMakeFiles/bounded_stack.dir/build.make
bounded_stack.exe: CMakeFiles/bounded_stack.dir/linklibs.rsp
bounded_stack.exe: CMakeFiles/bounded_stack.dir/objects1.rsp
bounded_stack.exe: CMakeFiles/bounded_stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\barte\Desktop\cpp\bounded_stack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable bounded_stack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bounded_stack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bounded_stack.dir/build: bounded_stack.exe

.PHONY : CMakeFiles/bounded_stack.dir/build

CMakeFiles/bounded_stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bounded_stack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bounded_stack.dir/clean

CMakeFiles/bounded_stack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\barte\Desktop\cpp\bounded_stack C:\Users\barte\Desktop\cpp\bounded_stack C:\Users\barte\Desktop\cpp\bounded_stack\cmake-build-debug C:\Users\barte\Desktop\cpp\bounded_stack\cmake-build-debug C:\Users\barte\Desktop\cpp\bounded_stack\cmake-build-debug\CMakeFiles\bounded_stack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bounded_stack.dir/depend

