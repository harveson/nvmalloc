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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sudarsun/NVM_EMUL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sudarsun/NVM_EMUL

# Include any dependencies generated for this target.
include third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/depend.make

# Include the progress variables for this target.
include third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/flags.make

third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/flags.make
third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: third_party/gtest-1.7.0/src/gtest_main.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sudarsun/NVM_EMUL/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0/src/gtest_main.cc

third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0/src/gtest_main.cc > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0/src/gtest_main.cc -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.requires:
.PHONY : third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.requires

third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.provides: third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.requires
	$(MAKE) -f third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/build.make third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.provides.build
.PHONY : third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.provides

third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.provides.build: third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

third_party/gtest-1.7.0/libgtest_main.a: third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
third_party/gtest-1.7.0/libgtest_main.a: third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/build.make
third_party/gtest-1.7.0/libgtest_main.a: third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libgtest_main.a"
	cd /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0 && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean_target.cmake
	cd /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/build: third_party/gtest-1.7.0/libgtest_main.a
.PHONY : third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/build

third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/requires: third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.requires
.PHONY : third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/requires

third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/clean:
	cd /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0 && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/clean

third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/depend:
	cd /home/sudarsun/NVM_EMUL && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sudarsun/NVM_EMUL /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0 /home/sudarsun/NVM_EMUL /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0 /home/sudarsun/NVM_EMUL/third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : third_party/gtest-1.7.0/CMakeFiles/gtest_main.dir/depend

