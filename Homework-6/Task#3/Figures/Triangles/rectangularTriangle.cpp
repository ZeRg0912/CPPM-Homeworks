#include "rectangularTriangle.h"

rectangularTriangle::rectangularTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, 90) {
    this->Name = "Прямоугольный треугольник";
};