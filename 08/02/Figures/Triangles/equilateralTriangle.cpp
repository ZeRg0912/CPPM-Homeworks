#include "equilateralTriangle.h"

equilateralTriangle::equilateralTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, _angleC) {
    this->Name = "Равносторонний  треугольник";

    if (((sideLengthA != sideLengthB) || (sideLengthB != sideLengthC)) && ((angleA != 60) || (angleB != 60) || (angleC != 60))) {
        throw badFigureException("Стороны не равны, углы не равны 60 градусам");
    }
    else if ((sideLengthA != sideLengthB) || (sideLengthB != sideLengthC)) {
        throw badFigureException("Стороны не равны");
    }
    else if ((angleA != 60) || (angleB != 60) || (angleC != 60)) {
        throw badFigureException("Углы не равны 60 градусам");
    }
};


/*
    if ((sideLengthA != sideLengthB || sideLengthC != sideLengthB || sideLengthA != sideLengthC) && (angleA != 60 || angleB != 60 || angleC != 60)) {
        throw badFigureException("Все стороные не равны и углы не равны 60 градусам");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleA != 60 || angleB != 60 || angleC != 60)) {
        throw badFigureException("Сторона С не равна А и В, углы не равны 60 градусам");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleC == 60 && (angleA != 60 || angleB != 60))) {
        throw badFigureException("Сторона С не равна А и В, углы A и B не равны 60 градусам");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleC == 60 && (angleA != 60 || angleB != 60))) {
        throw badFigureException("Сторона С не равна А и В, угол A не равен 60 градусам");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleB == 60 && (angleA != 60 || angleC != 60))) {
        throw badFigureException("Сторона С не равна А и В, углы A и C не равны 60 градусам");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleA == 60 && (angleB != 60 || angleC != 60))) {
        throw badFigureException("Сторона С не равна А и В, углы B и C не равны 60 градусам");
    }
    else if ((sideLengthA == sideLengthC) && (sideLengthB != sideLengthA) && (angleA != 60 || angleB != 60 || angleC != 60)) {
        throw badFigureException("Сторона B не равна A и C, углы не равны 60 градусам");
    }
    else if ((sideLengthB == sideLengthC) && (sideLengthA != sideLengthB) && (angleA != 60 || angleB != 60 || angleC != 60)) {
        throw badFigureException("Сторона A не равна B и C, углы не равны 60 градусам");
    }
 */