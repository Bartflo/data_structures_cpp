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
CMAKE_SOURCE_DIR = C:\Users\barte\Desktop\cpp\sorted_list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\barte\Desktop\cpp\sorted_list\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sorted_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sorted_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sorted_list.dir/flags.make

CMakeFiles/sorted_list.dir/list_test.cpp.obj: CMakeFiles/sorted_list.dir/flags.make
CMakeFiles/sorted_list.dir/list_test.cpp.obj: ../list_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\barte\Desktop\cpp\sorted_list\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sorted_list.dir/list_test.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sorted_list.dir\list_test.cpp.obj -c C:\Users\barte\Desktop\cpp\sorted_list\list_test.cpp

CMakeFiles/sorted_list.dir/list_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorted_list.dir/list_test.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\barte\Desktop\cpp\sorted_list\list_test.cpp > CMakeFiles\sorted_list.dir\list_test.cpp.i

CMakeFiles/sorted_list.dir/list_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorted_list.dir/list_test.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\barte\Desktop\cpp\sorted_list\list_test.cpp -o CMakeFiles\sorted_list.dir\list_test.cpp.s

CMakeFiles/sorted_list.dir/sorted_list.cpp.obj: CMakeFiles/sorted_list.dir/flags.make
CMakeFiles/sorted_list.dir/sorted_list.cpp.obj: ../sorted_list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\barte\Desktop\cpp\sorted_list\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sorted_list.dir/sorted_list.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sorted_list.dir\sorted_list.cpp.obj -c C:\Users\barte\Desktop\cpp\sorted_list\sorted_list.cpp

CMakeFiles/sorted_list.dir/sorted_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorted_list.dir/sorted_list.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\barte\Desktop\cpp\sorted_list\sorted_list.cpp > CMakeFiles\sorted_list.dir\sorted_list.cpp.i

CMakeFiles/sorted_list.dir/sorted_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorted_list.dir/sorted_list.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\barte\Desktop\cpp\sorted_list\sorted_list.cpp -o CMakeFiles\sorted_list.dir\sorted_list.cpp.s

# Object files for target sorted_list
sorted_list_OBJECTS = \
"CMakeFiles/sorted_list.dir/list_test.cpp.obj" \
"CMakeFiles/sorted_list.dir/sorted_list.cpp.obj"

# External object files for target sorted_list
sorted_list_EXTERNAL_OBJECTS =

sorted_list.exe: CMakeFiles/sorted_list.dir/list_test.cpp.obj
sorted_list.exe: CMakeFiles/sorted_list.dir/sorted_list.cpp.obj
sorted_list.exe: CMakeFiles/sorted_list.dir/build.make
sorted_list.exe: CMakeFiles/sorted_list.dir/linklibs.rsp
sorted_list.exe: CMakeFiles/sorted_list.dir/objects1.rsp
sorted_list.exe: CMakeFiles/sorted_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\barte\Desktop\cpp\sorted_list\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sorted_list.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sorted_list.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sorted_list.dir/build: sorted_list.exe

.PHONY : CMakeFiles/sorted_list.dir/build

CMakeFiles/sorted_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sorted_list.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sorted_list.dir/clean

CMakeFiles/sorted_list.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\barte\Desktop\cpp\sorted_list C:\Users\barte\Desktop\cpp\sorted_list C:\Users\barte\Desktop\cpp\sorted_list\cmake-build-debug C:\Users\barte\Desktop\cpp\sorted_list\cmake-build-debug C:\Users\barte\Desktop\cpp\sorted_list\cmake-build-debug\CMakeFiles\sorted_list.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sorted_list.dir/depend

