#include "rectangularTriangle.h"

rectangularTriangle::rectangularTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, _angleC) {
    this->Name = "Прямоугольный треугольник";

    if (angleC != 90) {
        throw badFigureException("угол С не равен 90 градусов");
    }
};