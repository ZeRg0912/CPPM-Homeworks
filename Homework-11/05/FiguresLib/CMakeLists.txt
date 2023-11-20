cmake_minimum_required(VERSION 3.10)
project(Figures_lib)
set(source_lib FigureLib.cpp figure.cpp quadrangles.cpp triangles.cpp)
add_library(Figures_lib SHARED ${source_lib})