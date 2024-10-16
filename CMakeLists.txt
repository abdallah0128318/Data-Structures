cmake_minimum_required(VERSION 3.22.0)
project(myCmakeProject VERSION 0.1.0 LANGUAGES CXX)


include(CTest)
enable_testing()


# This line adds the specified directory to the list of directories that the compiler will search for header files.
# The variable PROJECT_SOURCE_DIR contains the path to the root of the project, and we are appending "/includes" to it.
# This allows the compiler to find header files located in the "includes" directory when compiling the source files.
include_directories(${PROJECT_SOURCE_DIR}/includes)

# This command creates a variable named SOURCES that contains a list of all .cpp files found in the "includes" directory and its subdirectories.
# The GLOB_RECURSE command searches recursively through the directory structure for files matching the specified pattern.
# In this case, it looks for any .cpp files within any subdirectory of "includes".
file(GLOB_RECURSE SOURCES "includes/*/*.cpp")


add_executable(myCmakeProject main.cpp ${SOURCES})


# side note 
# 'build target' in cmake means: build process goal, it is the final product that produced from the build process 
#  which is an executable file by default 'myCmakeProject' in my case.


