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
CMAKE_SOURCE_DIR = /home/qapeel/c++/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qapeel/c++/test/build

# Include any dependencies generated for this target.
include CMakeFiles/myCmakeProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/myCmakeProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/myCmakeProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myCmakeProject.dir/flags.make

CMakeFiles/myCmakeProject.dir/main.cpp.o: CMakeFiles/myCmakeProject.dir/flags.make
CMakeFiles/myCmakeProject.dir/main.cpp.o: ../main.cpp
CMakeFiles/myCmakeProject.dir/main.cpp.o: CMakeFiles/myCmakeProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qapeel/c++/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myCmakeProject.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myCmakeProject.dir/main.cpp.o -MF CMakeFiles/myCmakeProject.dir/main.cpp.o.d -o CMakeFiles/myCmakeProject.dir/main.cpp.o -c /home/qapeel/c++/test/main.cpp

CMakeFiles/myCmakeProject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myCmakeProject.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qapeel/c++/test/main.cpp > CMakeFiles/myCmakeProject.dir/main.cpp.i

CMakeFiles/myCmakeProject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myCmakeProject.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qapeel/c++/test/main.cpp -o CMakeFiles/myCmakeProject.dir/main.cpp.s

CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.o: CMakeFiles/myCmakeProject.dir/flags.make
CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.o: ../includes/DoublyLinkedList/DLinkedList.cpp
CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.o: CMakeFiles/myCmakeProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qapeel/c++/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.o -MF CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.o.d -o CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.o -c /home/qapeel/c++/test/includes/DoublyLinkedList/DLinkedList.cpp

CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qapeel/c++/test/includes/DoublyLinkedList/DLinkedList.cpp > CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.i

CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qapeel/c++/test/includes/DoublyLinkedList/DLinkedList.cpp -o CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.s

CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.o: CMakeFiles/myCmakeProject.dir/flags.make
CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.o: ../includes/DynamicArray/DynamicArray.cpp
CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.o: CMakeFiles/myCmakeProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qapeel/c++/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.o -MF CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.o.d -o CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.o -c /home/qapeel/c++/test/includes/DynamicArray/DynamicArray.cpp

CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qapeel/c++/test/includes/DynamicArray/DynamicArray.cpp > CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.i

CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qapeel/c++/test/includes/DynamicArray/DynamicArray.cpp -o CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.s

CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.o: CMakeFiles/myCmakeProject.dir/flags.make
CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.o: ../includes/SinglyLinkedList/SLinkedList.cpp
CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.o: CMakeFiles/myCmakeProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qapeel/c++/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.o -MF CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.o.d -o CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.o -c /home/qapeel/c++/test/includes/SinglyLinkedList/SLinkedList.cpp

CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qapeel/c++/test/includes/SinglyLinkedList/SLinkedList.cpp > CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.i

CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qapeel/c++/test/includes/SinglyLinkedList/SLinkedList.cpp -o CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.s

CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.o: CMakeFiles/myCmakeProject.dir/flags.make
CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.o: ../includes/Stack/Stack.cpp
CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.o: CMakeFiles/myCmakeProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qapeel/c++/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.o -MF CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.o.d -o CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.o -c /home/qapeel/c++/test/includes/Stack/Stack.cpp

CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qapeel/c++/test/includes/Stack/Stack.cpp > CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.i

CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qapeel/c++/test/includes/Stack/Stack.cpp -o CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.s

CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.o: CMakeFiles/myCmakeProject.dir/flags.make
CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.o: ../includes/queue/queue.cpp
CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.o: CMakeFiles/myCmakeProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qapeel/c++/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.o -MF CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.o.d -o CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.o -c /home/qapeel/c++/test/includes/queue/queue.cpp

CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qapeel/c++/test/includes/queue/queue.cpp > CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.i

CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qapeel/c++/test/includes/queue/queue.cpp -o CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.s

# Object files for target myCmakeProject
myCmakeProject_OBJECTS = \
"CMakeFiles/myCmakeProject.dir/main.cpp.o" \
"CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.o" \
"CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.o" \
"CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.o" \
"CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.o" \
"CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.o"

# External object files for target myCmakeProject
myCmakeProject_EXTERNAL_OBJECTS =

myCmakeProject: CMakeFiles/myCmakeProject.dir/main.cpp.o
myCmakeProject: CMakeFiles/myCmakeProject.dir/includes/DoublyLinkedList/DLinkedList.cpp.o
myCmakeProject: CMakeFiles/myCmakeProject.dir/includes/DynamicArray/DynamicArray.cpp.o
myCmakeProject: CMakeFiles/myCmakeProject.dir/includes/SinglyLinkedList/SLinkedList.cpp.o
myCmakeProject: CMakeFiles/myCmakeProject.dir/includes/Stack/Stack.cpp.o
myCmakeProject: CMakeFiles/myCmakeProject.dir/includes/queue/queue.cpp.o
myCmakeProject: CMakeFiles/myCmakeProject.dir/build.make
myCmakeProject: CMakeFiles/myCmakeProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qapeel/c++/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable myCmakeProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myCmakeProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myCmakeProject.dir/build: myCmakeProject
.PHONY : CMakeFiles/myCmakeProject.dir/build

CMakeFiles/myCmakeProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myCmakeProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myCmakeProject.dir/clean

CMakeFiles/myCmakeProject.dir/depend:
	cd /home/qapeel/c++/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qapeel/c++/test /home/qapeel/c++/test /home/qapeel/c++/test/build /home/qapeel/c++/test/build /home/qapeel/c++/test/build/CMakeFiles/myCmakeProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myCmakeProject.dir/depend

