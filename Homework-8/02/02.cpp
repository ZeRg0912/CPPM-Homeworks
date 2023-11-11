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

#include "Figures/print_info.h"

#define figureError "Ошибка создания фигуры. Причина: "

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    try {
        triangle Triangle(10, 20, 30, 50, 60, 70);
        print_info(Triangle);
        cout << " создан\n";
    } 
    catch (const domain_error& error){
        cerr << figureError << error.what() << endl;
    }

    try {
        rectangularTriangle RTriangle(10, 20, 30, 45, 45, 90);
        print_info(RTriangle);
        cout << " создан\n";
    }
    catch (const domain_error& error) {
        cerr << figureError << error.what() << endl;
    }

    try {
        isoscelesTriangle ITriangle(30, 20, 30, 65, 65, 50);
        print_info(ITriangle);
        cout << " создан\n";
    }
    catch (const domain_error& error) {
        cerr << figureError << error.what() << endl;
    }

    try {
        equilateralTriangle ETriangle(30, 30, 30, 60, 60, 60);
        print_info(ETriangle);
        cout << " создан\n";
    }
    catch (const domain_error& error) {
        cerr << figureError << error.what() << endl;
    }

    try {
        quadrangle Quadrangle(30, 40, 50, 60, 90, 90, 90, 90);
        print_info(Quadrangle);
        cout << " создан\n";
    }
    catch (const domain_error& error) {
        cerr << figureError << error.what() << endl;
    }

    try {
        rectangle Rectangle(60, 60, 60, 60, 90, 90, 90, 80);
        print_info(Rectangle);
        cout << " создан\n";
    }
    catch (const domain_error& error) {
        cerr << figureError << error.what() << endl;
    }

    try {
        square Square(50, 60, 60, 60, 90, 90, 90, 90);
        print_info(Square);
        cout << " создан\n";
    }
    catch (const domain_error& error) {
        cerr << figureError << error.what() << endl;
    }

    try {
        parallelogram Parallelogram(50, 60, 50, 60, 90, 90, 90, 90);
        print_info(Parallelogram);
        cout << " создан\n";
    }
    catch (const domain_error& error) {
        cerr << figureError << error.what() << endl;
    }

    try {
        rhomb Rhomb(40, 40, 40, 40, 80, 100, 80, 100);
        print_info(Rhomb);
        cout << " создан\n";
    }
    catch (const domain_error& error) {
        cerr << figureError << error.what() << endl;
    }
    return 0;
}