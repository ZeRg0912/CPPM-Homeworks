#pragma once
#include <iostream>
#include <string>

#ifdef FIGURE_DLL_EXPORTS
#define FIGURE_DLL_API __declspec(dllexport)
#else
#define FIGURE_DLL_API __declspec(dllimport)
#endif

class figure {
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
    std::string FIGURE_DLL_API getName();

    int FIGURE_DLL_API getSideA();

    int FIGURE_DLL_API getSideB();

    int FIGURE_DLL_API getSideC();

    int FIGURE_DLL_API getSideD();

    int FIGURE_DLL_API getAngleA();

    int FIGURE_DLL_API getAngleB();

    int FIGURE_DLL_API getAngleC();

    int FIGURE_DLL_API getAngleD();

    bool FIGURE_DLL_API checkSides();
};

void FIGURE_DLL_API print_info(figure& figureType);