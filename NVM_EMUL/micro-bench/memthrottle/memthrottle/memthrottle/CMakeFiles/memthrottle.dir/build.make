# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/limkev/balance/tools/memthrottle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/limkev/balance/tools/memthrottle

# Include any dependencies generated for this target.
include memthrottle/CMakeFiles/memthrottle.dir/depend.make

# Include the progress variables for this target.
include memthrottle/CMakeFiles/memthrottle.dir/progress.make

# Include the compile flags for this target's objects.
include memthrottle/CMakeFiles/memthrottle.dir/flags.make

memthrottle/CMakeFiles/memthrottle.dir/main.o: memthrottle/CMakeFiles/memthrottle.dir/flags.make
memthrottle/CMakeFiles/memthrottle.dir/main.o: memthrottle/main.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/limkev/balance/tools/memthrottle/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object memthrottle/CMakeFiles/memthrottle.dir/main.o"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/memthrottle.dir/main.o -c /home/limkev/balance/tools/memthrottle/memthrottle/main.cc

memthrottle/CMakeFiles/memthrottle.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/memthrottle.dir/main.i"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/limkev/balance/tools/memthrottle/memthrottle/main.cc > CMakeFiles/memthrottle.dir/main.i

memthrottle/CMakeFiles/memthrottle.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/memthrottle.dir/main.s"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/limkev/balance/tools/memthrottle/memthrottle/main.cc -o CMakeFiles/memthrottle.dir/main.s

memthrottle/CMakeFiles/memthrottle.dir/main.o.requires:
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/main.o.requires

memthrottle/CMakeFiles/memthrottle.dir/main.o.provides: memthrottle/CMakeFiles/memthrottle.dir/main.o.requires
	$(MAKE) -f memthrottle/CMakeFiles/memthrottle.dir/build.make memthrottle/CMakeFiles/memthrottle.dir/main.o.provides.build
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/main.o.provides

memthrottle/CMakeFiles/memthrottle.dir/main.o.provides.build: memthrottle/CMakeFiles/memthrottle.dir/main.o

memthrottle/CMakeFiles/memthrottle.dir/memcpy.o: memthrottle/CMakeFiles/memthrottle.dir/flags.make
memthrottle/CMakeFiles/memthrottle.dir/memcpy.o: memthrottle/memcpy.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/limkev/balance/tools/memthrottle/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object memthrottle/CMakeFiles/memthrottle.dir/memcpy.o"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/memthrottle.dir/memcpy.o -c /home/limkev/balance/tools/memthrottle/memthrottle/memcpy.cc

memthrottle/CMakeFiles/memthrottle.dir/memcpy.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/memthrottle.dir/memcpy.i"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/limkev/balance/tools/memthrottle/memthrottle/memcpy.cc > CMakeFiles/memthrottle.dir/memcpy.i

memthrottle/CMakeFiles/memthrottle.dir/memcpy.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/memthrottle.dir/memcpy.s"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/limkev/balance/tools/memthrottle/memthrottle/memcpy.cc -o CMakeFiles/memthrottle.dir/memcpy.s

memthrottle/CMakeFiles/memthrottle.dir/memcpy.o.requires:
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/memcpy.o.requires

memthrottle/CMakeFiles/memthrottle.dir/memcpy.o.provides: memthrottle/CMakeFiles/memthrottle.dir/memcpy.o.requires
	$(MAKE) -f memthrottle/CMakeFiles/memthrottle.dir/build.make memthrottle/CMakeFiles/memthrottle.dir/memcpy.o.provides.build
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/memcpy.o.provides

memthrottle/CMakeFiles/memthrottle.dir/memcpy.o.provides.build: memthrottle/CMakeFiles/memthrottle.dir/memcpy.o

memthrottle/CMakeFiles/memthrottle.dir/model.o: memthrottle/CMakeFiles/memthrottle.dir/flags.make
memthrottle/CMakeFiles/memthrottle.dir/model.o: memthrottle/model.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/limkev/balance/tools/memthrottle/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object memthrottle/CMakeFiles/memthrottle.dir/model.o"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/memthrottle.dir/model.o -c /home/limkev/balance/tools/memthrottle/memthrottle/model.cc

memthrottle/CMakeFiles/memthrottle.dir/model.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/memthrottle.dir/model.i"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/limkev/balance/tools/memthrottle/memthrottle/model.cc > CMakeFiles/memthrottle.dir/model.i

memthrottle/CMakeFiles/memthrottle.dir/model.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/memthrottle.dir/model.s"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/limkev/balance/tools/memthrottle/memthrottle/model.cc -o CMakeFiles/memthrottle.dir/model.s

memthrottle/CMakeFiles/memthrottle.dir/model.o.requires:
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/model.o.requires

memthrottle/CMakeFiles/memthrottle.dir/model.o.provides: memthrottle/CMakeFiles/memthrottle.dir/model.o.requires
	$(MAKE) -f memthrottle/CMakeFiles/memthrottle.dir/build.make memthrottle/CMakeFiles/memthrottle.dir/model.o.provides.build
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/model.o.provides

memthrottle/CMakeFiles/memthrottle.dir/model.o.provides.build: memthrottle/CMakeFiles/memthrottle.dir/model.o

# Object files for target memthrottle
memthrottle_OBJECTS = \
"CMakeFiles/memthrottle.dir/main.o" \
"CMakeFiles/memthrottle.dir/memcpy.o" \
"CMakeFiles/memthrottle.dir/model.o"

# External object files for target memthrottle
memthrottle_EXTERNAL_OBJECTS =

memthrottle/memthrottle: memthrottle/CMakeFiles/memthrottle.dir/main.o
memthrottle/memthrottle: memthrottle/CMakeFiles/memthrottle.dir/memcpy.o
memthrottle/memthrottle: memthrottle/CMakeFiles/memthrottle.dir/model.o
memthrottle/memthrottle: memthrottle/CMakeFiles/memthrottle.dir/build.make
memthrottle/memthrottle: memthrottle/CMakeFiles/memthrottle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable memthrottle"
	cd /home/limkev/balance/tools/memthrottle/memthrottle && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/memthrottle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
memthrottle/CMakeFiles/memthrottle.dir/build: memthrottle/memthrottle
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/build

memthrottle/CMakeFiles/memthrottle.dir/requires: memthrottle/CMakeFiles/memthrottle.dir/main.o.requires
memthrottle/CMakeFiles/memthrottle.dir/requires: memthrottle/CMakeFiles/memthrottle.dir/memcpy.o.requires
memthrottle/CMakeFiles/memthrottle.dir/requires: memthrottle/CMakeFiles/memthrottle.dir/model.o.requires
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/requires

memthrottle/CMakeFiles/memthrottle.dir/clean:
	cd /home/limkev/balance/tools/memthrottle/memthrottle && $(CMAKE_COMMAND) -P CMakeFiles/memthrottle.dir/cmake_clean.cmake
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/clean

memthrottle/CMakeFiles/memthrottle.dir/depend:
	cd /home/limkev/balance/tools/memthrottle && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/limkev/balance/tools/memthrottle /home/limkev/balance/tools/memthrottle/memthrottle /home/limkev/balance/tools/memthrottle /home/limkev/balance/tools/memthrottle/memthrottle /home/limkev/balance/tools/memthrottle/memthrottle/CMakeFiles/memthrottle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : memthrottle/CMakeFiles/memthrottle.dir/depend

