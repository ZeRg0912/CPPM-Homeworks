#pragma once
#include <iostream>
#include <string>

#ifdef LEAVER_EXPORTS
#define LEAVER_LIBRARY_API __declspec(dllexport)
#else
#define LEAVER_LIBRARY_API __declspec(dllimport)
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
    std::string LEAVER_LIBRARY_API getName();

    int LEAVER_LIBRARY_API getSideA();

    int LEAVER_LIBRARY_API getSideB();

    int LEAVER_LIBRARY_API getSideC();

    int LEAVER_LIBRARY_API getSideD();

    int LEAVER_LIBRARY_API getAngleA();

    int LEAVER_LIBRARY_API getAngleB();

    int LEAVER_LIBRARY_API getAngleC();

    int LEAVER_LIBRARY_API getAngleD();

    bool LEAVER_LIBRARY_API checkSides();
};

void LEAVER_LIBRARY_API print_info(figure& figureType);