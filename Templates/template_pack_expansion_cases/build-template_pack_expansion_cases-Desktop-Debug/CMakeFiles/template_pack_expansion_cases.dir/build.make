# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/dpeleshko/Qt/Tools/CMake/bin/cmake

# The command to remove a file.
RM = /home/dpeleshko/Qt/Tools/CMake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/template_pack_expansion_cases

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/build-template_pack_expansion_cases-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/template_pack_expansion_cases.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/template_pack_expansion_cases.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/template_pack_expansion_cases.dir/flags.make

CMakeFiles/template_pack_expansion_cases.dir/main.cpp.o: CMakeFiles/template_pack_expansion_cases.dir/flags.make
CMakeFiles/template_pack_expansion_cases.dir/main.cpp.o: /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/template_pack_expansion_cases/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/build-template_pack_expansion_cases-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/template_pack_expansion_cases.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/template_pack_expansion_cases.dir/main.cpp.o -c /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/template_pack_expansion_cases/main.cpp

CMakeFiles/template_pack_expansion_cases.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/template_pack_expansion_cases.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/template_pack_expansion_cases/main.cpp > CMakeFiles/template_pack_expansion_cases.dir/main.cpp.i

CMakeFiles/template_pack_expansion_cases.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/template_pack_expansion_cases.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/template_pack_expansion_cases/main.cpp -o CMakeFiles/template_pack_expansion_cases.dir/main.cpp.s

# Object files for target template_pack_expansion_cases
template_pack_expansion_cases_OBJECTS = \
"CMakeFiles/template_pack_expansion_cases.dir/main.cpp.o"

# External object files for target template_pack_expansion_cases
template_pack_expansion_cases_EXTERNAL_OBJECTS =

template_pack_expansion_cases: CMakeFiles/template_pack_expansion_cases.dir/main.cpp.o
template_pack_expansion_cases: CMakeFiles/template_pack_expansion_cases.dir/build.make
template_pack_expansion_cases: CMakeFiles/template_pack_expansion_cases.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/build-template_pack_expansion_cases-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable template_pack_expansion_cases"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/template_pack_expansion_cases.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/template_pack_expansion_cases.dir/build: template_pack_expansion_cases

.PHONY : CMakeFiles/template_pack_expansion_cases.dir/build

CMakeFiles/template_pack_expansion_cases.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/template_pack_expansion_cases.dir/cmake_clean.cmake
.PHONY : CMakeFiles/template_pack_expansion_cases.dir/clean

CMakeFiles/template_pack_expansion_cases.dir/depend:
	cd /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/build-template_pack_expansion_cases-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/template_pack_expansion_cases /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/template_pack_expansion_cases /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/build-template_pack_expansion_cases-Desktop-Debug /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/build-template_pack_expansion_cases-Desktop-Debug /home/dpeleshko/work/C-C++/qt/template/template_pack_expansion_cases/build-template_pack_expansion_cases-Desktop-Debug/CMakeFiles/template_pack_expansion_cases.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/template_pack_expansion_cases.dir/depend

