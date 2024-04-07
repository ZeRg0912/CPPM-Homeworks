#include "quadrangle.h"

quadrangle::quadrangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) {
    this->Name = "Четырехугольник";
    fourSides = true;
    this->sideLengthA = _sideLengthA;
    this->sideLengthB = _sideLengthB;
    this->sideLengthC = _sideLengthC;
    this->sideLengthD = _sideLengthD;
    this->angleA = _angleA;
    this->angleB = _angleB;
    this->angleC = _angleC;
    this->angleD = _angleD;

    if ((angleA + angleB + angleC + angleD) != 360) {
        throw badFigureException("Сумма углов не равна 360");
    }
};