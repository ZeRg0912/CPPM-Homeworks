cmake_minimum_required(VERSION 3.10)
project(FigureLib)
set(figure_lib figure.cpp
			   print_info.cpp
			   Triangles/triangle.cpp
			   Triangles/rectangularTriangle.cpp
			   Triangles/isoscelesTriangle.cpp
			   Triangles/equilateralTriangle.cpp
			   Quadrangles/quadrangle.cpp
			   Quadrangles/parallelogram.cpp
			   Quadrangles/rectangle.cpp
			   Quadrangles/rhomb.cpp
			   Quadrangles/square.cpp)
add_library(FigureLib STATIC ${figure_lib})