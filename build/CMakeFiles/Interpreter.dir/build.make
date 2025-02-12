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
CMAKE_SOURCE_DIR = /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build

# Include any dependencies generated for this target.
include CMakeFiles/Interpreter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Interpreter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Interpreter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Interpreter.dir/flags.make

CMakeFiles/Interpreter.dir/Parser.cpp.o: CMakeFiles/Interpreter.dir/flags.make
CMakeFiles/Interpreter.dir/Parser.cpp.o: ../Parser.cpp
CMakeFiles/Interpreter.dir/Parser.cpp.o: CMakeFiles/Interpreter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Interpreter.dir/Parser.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Interpreter.dir/Parser.cpp.o -MF CMakeFiles/Interpreter.dir/Parser.cpp.o.d -o CMakeFiles/Interpreter.dir/Parser.cpp.o -c /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/Parser.cpp

CMakeFiles/Interpreter.dir/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Interpreter.dir/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/Parser.cpp > CMakeFiles/Interpreter.dir/Parser.cpp.i

CMakeFiles/Interpreter.dir/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Interpreter.dir/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/Parser.cpp -o CMakeFiles/Interpreter.dir/Parser.cpp.s

CMakeFiles/Interpreter.dir/TokenConsumer.cpp.o: CMakeFiles/Interpreter.dir/flags.make
CMakeFiles/Interpreter.dir/TokenConsumer.cpp.o: ../TokenConsumer.cpp
CMakeFiles/Interpreter.dir/TokenConsumer.cpp.o: CMakeFiles/Interpreter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Interpreter.dir/TokenConsumer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Interpreter.dir/TokenConsumer.cpp.o -MF CMakeFiles/Interpreter.dir/TokenConsumer.cpp.o.d -o CMakeFiles/Interpreter.dir/TokenConsumer.cpp.o -c /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/TokenConsumer.cpp

CMakeFiles/Interpreter.dir/TokenConsumer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Interpreter.dir/TokenConsumer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/TokenConsumer.cpp > CMakeFiles/Interpreter.dir/TokenConsumer.cpp.i

CMakeFiles/Interpreter.dir/TokenConsumer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Interpreter.dir/TokenConsumer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/TokenConsumer.cpp -o CMakeFiles/Interpreter.dir/TokenConsumer.cpp.s

CMakeFiles/Interpreter.dir/codegen.cpp.o: CMakeFiles/Interpreter.dir/flags.make
CMakeFiles/Interpreter.dir/codegen.cpp.o: ../codegen.cpp
CMakeFiles/Interpreter.dir/codegen.cpp.o: CMakeFiles/Interpreter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Interpreter.dir/codegen.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Interpreter.dir/codegen.cpp.o -MF CMakeFiles/Interpreter.dir/codegen.cpp.o.d -o CMakeFiles/Interpreter.dir/codegen.cpp.o -c /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/codegen.cpp

CMakeFiles/Interpreter.dir/codegen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Interpreter.dir/codegen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/codegen.cpp > CMakeFiles/Interpreter.dir/codegen.cpp.i

CMakeFiles/Interpreter.dir/codegen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Interpreter.dir/codegen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/codegen.cpp -o CMakeFiles/Interpreter.dir/codegen.cpp.s

CMakeFiles/Interpreter.dir/main.cpp.o: CMakeFiles/Interpreter.dir/flags.make
CMakeFiles/Interpreter.dir/main.cpp.o: ../main.cpp
CMakeFiles/Interpreter.dir/main.cpp.o: CMakeFiles/Interpreter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Interpreter.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Interpreter.dir/main.cpp.o -MF CMakeFiles/Interpreter.dir/main.cpp.o.d -o CMakeFiles/Interpreter.dir/main.cpp.o -c /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/main.cpp

CMakeFiles/Interpreter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Interpreter.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/main.cpp > CMakeFiles/Interpreter.dir/main.cpp.i

CMakeFiles/Interpreter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Interpreter.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/main.cpp -o CMakeFiles/Interpreter.dir/main.cpp.s

# Object files for target Interpreter
Interpreter_OBJECTS = \
"CMakeFiles/Interpreter.dir/Parser.cpp.o" \
"CMakeFiles/Interpreter.dir/TokenConsumer.cpp.o" \
"CMakeFiles/Interpreter.dir/codegen.cpp.o" \
"CMakeFiles/Interpreter.dir/main.cpp.o"

# External object files for target Interpreter
Interpreter_EXTERNAL_OBJECTS =

Interpreter: CMakeFiles/Interpreter.dir/Parser.cpp.o
Interpreter: CMakeFiles/Interpreter.dir/TokenConsumer.cpp.o
Interpreter: CMakeFiles/Interpreter.dir/codegen.cpp.o
Interpreter: CMakeFiles/Interpreter.dir/main.cpp.o
Interpreter: CMakeFiles/Interpreter.dir/build.make
Interpreter: CMakeFiles/Interpreter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Interpreter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Interpreter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Interpreter.dir/build: Interpreter
.PHONY : CMakeFiles/Interpreter.dir/build

CMakeFiles/Interpreter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Interpreter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Interpreter.dir/clean

CMakeFiles/Interpreter.dir/depend:
	cd /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build /mnt/d/fall-main/gitub_project/aVeryTinyInterpreter/build/CMakeFiles/Interpreter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Interpreter.dir/depend

