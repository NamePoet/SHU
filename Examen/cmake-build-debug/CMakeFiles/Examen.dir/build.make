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
CMAKE_SOURCE_DIR = C:\Users\YYL\Desktop\CLionProject\Examen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\YYL\Desktop\CLionProject\Examen\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Examen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Examen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Examen.dir/flags.make

CMakeFiles/Examen.dir/main.c.obj: CMakeFiles/Examen.dir/flags.make
CMakeFiles/Examen.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YYL\Desktop\CLionProject\Examen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Examen.dir/main.c.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Examen.dir\main.c.obj   -c C:\Users\YYL\Desktop\CLionProject\Examen\main.c

CMakeFiles/Examen.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Examen.dir/main.c.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\YYL\Desktop\CLionProject\Examen\main.c > CMakeFiles\Examen.dir\main.c.i

CMakeFiles/Examen.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Examen.dir/main.c.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\YYL\Desktop\CLionProject\Examen\main.c -o CMakeFiles\Examen.dir\main.c.s

# Object files for target Examen
Examen_OBJECTS = \
"CMakeFiles/Examen.dir/main.c.obj"

# External object files for target Examen
Examen_EXTERNAL_OBJECTS =

Examen.exe: CMakeFiles/Examen.dir/main.c.obj
Examen.exe: CMakeFiles/Examen.dir/build.make
Examen.exe: CMakeFiles/Examen.dir/linklibs.rsp
Examen.exe: CMakeFiles/Examen.dir/objects1.rsp
Examen.exe: CMakeFiles/Examen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\YYL\Desktop\CLionProject\Examen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Examen.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Examen.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Examen.dir/build: Examen.exe

.PHONY : CMakeFiles/Examen.dir/build

CMakeFiles/Examen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Examen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Examen.dir/clean

CMakeFiles/Examen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\YYL\Desktop\CLionProject\Examen C:\Users\YYL\Desktop\CLionProject\Examen C:\Users\YYL\Desktop\CLionProject\Examen\cmake-build-debug C:\Users\YYL\Desktop\CLionProject\Examen\cmake-build-debug C:\Users\YYL\Desktop\CLionProject\Examen\cmake-build-debug\CMakeFiles\Examen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Examen.dir/depend

