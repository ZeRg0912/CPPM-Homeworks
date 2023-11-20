#pragma once
#include <iostream>
#include <string>

#ifndef FIGURE_DLL_EXPORTS
#define FIGURE_DLL_API __declspec(dllexport)
#else
#define FIGURE_DLL_API __declspec(dllimport)
#endif

class FIGURE_DLL_API figure {
protected:
    std::string Name = "Фигура";
    // Стороны
    int sideLengthA = 0;
    int sideLengthB = 0;
    int sideLengthC = 0;
    int sideLengthD = 0;
    // Углы
    int angleA = 0;
    int angleB = 0;
    int angleC = 0;
    int angleD = 0;
    // Проверка на 3 или 4 стороны
    bool fourSides = false;

public:
    std::string getName();

    int getSideA();

    int getSideB();

    int getSideC();

    int getSideD();

    int getAngleA();

    int getAngleB();

    int getAngleC();

    int getAngleD();

    bool checkSides();
};

void FIGURE_DLL_API print_info(figure& figureType);