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
CMAKE_SOURCE_DIR = C:\Users\barte\Desktop\cpp\GenericList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\barte\Desktop\cpp\GenericList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GenericList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GenericList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GenericList.dir/flags.make

CMakeFiles/GenericList.dir/list_test.cpp.obj: CMakeFiles/GenericList.dir/flags.make
CMakeFiles/GenericList.dir/list_test.cpp.obj: ../list_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\barte\Desktop\cpp\GenericList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GenericList.dir/list_test.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GenericList.dir\list_test.cpp.obj -c C:\Users\barte\Desktop\cpp\GenericList\list_test.cpp

CMakeFiles/GenericList.dir/list_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GenericList.dir/list_test.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\barte\Desktop\cpp\GenericList\list_test.cpp > CMakeFiles\GenericList.dir\list_test.cpp.i

CMakeFiles/GenericList.dir/list_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GenericList.dir/list_test.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\barte\Desktop\cpp\GenericList\list_test.cpp -o CMakeFiles\GenericList.dir\list_test.cpp.s

# Object files for target GenericList
GenericList_OBJECTS = \
"CMakeFiles/GenericList.dir/list_test.cpp.obj"

# External object files for target GenericList
GenericList_EXTERNAL_OBJECTS =

GenericList.exe: CMakeFiles/GenericList.dir/list_test.cpp.obj
GenericList.exe: CMakeFiles/GenericList.dir/build.make
GenericList.exe: CMakeFiles/GenericList.dir/linklibs.rsp
GenericList.exe: CMakeFiles/GenericList.dir/objects1.rsp
GenericList.exe: CMakeFiles/GenericList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\barte\Desktop\cpp\GenericList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GenericList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GenericList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GenericList.dir/build: GenericList.exe

.PHONY : CMakeFiles/GenericList.dir/build

CMakeFiles/GenericList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GenericList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GenericList.dir/clean

CMakeFiles/GenericList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\barte\Desktop\cpp\GenericList C:\Users\barte\Desktop\cpp\GenericList C:\Users\barte\Desktop\cpp\GenericList\cmake-build-debug C:\Users\barte\Desktop\cpp\GenericList\cmake-build-debug C:\Users\barte\Desktop\cpp\GenericList\cmake-build-debug\CMakeFiles\GenericList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GenericList.dir/depend

