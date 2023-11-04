#include <iostream>
#include "Figures/Triangles/triangle.h"
#include "Figures/Triangles/rectangularTriangle.h"
#include "Figures/Triangles/isoscelesTriangle.h"
#include "Figures/Triangles/equilateralTriangle.h"

#include "Figures/Quadrangles/quadrangle.h"
#include "Figures/Quadrangles/rectangle.h"
#include "Figures/Quadrangles/square.h"
#include "Figures/Quadrangles/parallelogram.h"
#include "Figures/Quadrangles/rhomb.h"

#include "print_info.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    triangle Triangle1(10, 20, 30, 50, 60, 70);
    rectangularTriangle RectangularTriangle1(10, 20, 30, 50, 60);
    isoscelesTriangle IsoscelesTriangle1(10, 20, 50, 60);
    equilateralTriangle EquilateralTriangle1(30);

    quadrangle Quadrangle1(10, 20, 30, 40, 50, 60, 70, 80);
    rectangle Rectangle1(10, 20);
    square Square1(20);
    parallelogram Parallelogram1(20, 30, 30, 40);
    rhomb Rhomb1(30, 30, 40);

    print_info(Triangle1);    
    print_info(RectangularTriangle1);
    print_info(IsoscelesTriangle1);
    print_info(EquilateralTriangle1);

    print_info(Quadrangle1);
    print_info(Rectangle1);
    print_info(Square1);
    print_info(Parallelogram1);
    print_info(Rhomb1);

    return 0;
}