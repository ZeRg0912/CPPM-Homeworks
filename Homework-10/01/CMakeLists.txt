cmake_minimum_required(VERSION 3.10)
project(my_first_cmake_project)
set(source_exe my_first_cmake_project.h my_first_cmake_project.cpp)
add_executable(my_first_cmake_project ${source_exe})