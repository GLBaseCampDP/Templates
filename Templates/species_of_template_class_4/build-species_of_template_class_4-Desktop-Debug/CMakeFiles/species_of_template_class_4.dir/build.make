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
CMAKE_SOURCE_DIR = /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/species_of_template_class_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/build-species_of_template_class_4-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/species_of_template_class_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/species_of_template_class_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/species_of_template_class_4.dir/flags.make

CMakeFiles/species_of_template_class_4.dir/main.cpp.o: CMakeFiles/species_of_template_class_4.dir/flags.make
CMakeFiles/species_of_template_class_4.dir/main.cpp.o: /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/species_of_template_class_4/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/build-species_of_template_class_4-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/species_of_template_class_4.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/species_of_template_class_4.dir/main.cpp.o -c /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/species_of_template_class_4/main.cpp

CMakeFiles/species_of_template_class_4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/species_of_template_class_4.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/species_of_template_class_4/main.cpp > CMakeFiles/species_of_template_class_4.dir/main.cpp.i

CMakeFiles/species_of_template_class_4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/species_of_template_class_4.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/species_of_template_class_4/main.cpp -o CMakeFiles/species_of_template_class_4.dir/main.cpp.s

# Object files for target species_of_template_class_4
species_of_template_class_4_OBJECTS = \
"CMakeFiles/species_of_template_class_4.dir/main.cpp.o"

# External object files for target species_of_template_class_4
species_of_template_class_4_EXTERNAL_OBJECTS =

species_of_template_class_4: CMakeFiles/species_of_template_class_4.dir/main.cpp.o
species_of_template_class_4: CMakeFiles/species_of_template_class_4.dir/build.make
species_of_template_class_4: CMakeFiles/species_of_template_class_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/build-species_of_template_class_4-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable species_of_template_class_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/species_of_template_class_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/species_of_template_class_4.dir/build: species_of_template_class_4

.PHONY : CMakeFiles/species_of_template_class_4.dir/build

CMakeFiles/species_of_template_class_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/species_of_template_class_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/species_of_template_class_4.dir/clean

CMakeFiles/species_of_template_class_4.dir/depend:
	cd /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/build-species_of_template_class_4-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/species_of_template_class_4 /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/species_of_template_class_4 /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/build-species_of_template_class_4-Desktop-Debug /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/build-species_of_template_class_4-Desktop-Debug /home/dpeleshko/work/C-C++/qt/template/species_of_template_class_4/build-species_of_template_class_4-Desktop-Debug/CMakeFiles/species_of_template_class_4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/species_of_template_class_4.dir/depend

