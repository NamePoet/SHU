# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\YYL\Desktop\CLionProject\Text_Reading

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\YYL\Desktop\CLionProject\Text_Reading\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Text_Reading.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Text_Reading.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Text_Reading.dir/flags.make

CMakeFiles/Text_Reading.dir/main.c.obj: CMakeFiles/Text_Reading.dir/flags.make
CMakeFiles/Text_Reading.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YYL\Desktop\CLionProject\Text_Reading\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Text_Reading.dir/main.c.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Text_Reading.dir\main.c.obj   -c C:\Users\YYL\Desktop\CLionProject\Text_Reading\main.c

CMakeFiles/Text_Reading.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Text_Reading.dir/main.c.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\YYL\Desktop\CLionProject\Text_Reading\main.c > CMakeFiles\Text_Reading.dir\main.c.i

CMakeFiles/Text_Reading.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Text_Reading.dir/main.c.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\YYL\Desktop\CLionProject\Text_Reading\main.c -o CMakeFiles\Text_Reading.dir\main.c.s

# Object files for target Text_Reading
Text_Reading_OBJECTS = \
"CMakeFiles/Text_Reading.dir/main.c.obj"

# External object files for target Text_Reading
Text_Reading_EXTERNAL_OBJECTS =

Text_Reading.exe: CMakeFiles/Text_Reading.dir/main.c.obj
Text_Reading.exe: CMakeFiles/Text_Reading.dir/build.make
Text_Reading.exe: CMakeFiles/Text_Reading.dir/linklibs.rsp
Text_Reading.exe: CMakeFiles/Text_Reading.dir/objects1.rsp
Text_Reading.exe: CMakeFiles/Text_Reading.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\YYL\Desktop\CLionProject\Text_Reading\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Text_Reading.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Text_Reading.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Text_Reading.dir/build: Text_Reading.exe

.PHONY : CMakeFiles/Text_Reading.dir/build

CMakeFiles/Text_Reading.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Text_Reading.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Text_Reading.dir/clean

CMakeFiles/Text_Reading.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\YYL\Desktop\CLionProject\Text_Reading C:\Users\YYL\Desktop\CLionProject\Text_Reading C:\Users\YYL\Desktop\CLionProject\Text_Reading\cmake-build-debug C:\Users\YYL\Desktop\CLionProject\Text_Reading\cmake-build-debug C:\Users\YYL\Desktop\CLionProject\Text_Reading\cmake-build-debug\CMakeFiles\Text_Reading.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Text_Reading.dir/depend

