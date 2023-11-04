#include "isoscelesTriangle.h"

isoscelesTriangle::isoscelesTriangle(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB) : triangle(_sideLengthA, _sideLengthB, _sideLengthA, _angleA, _angleB, _angleA) {
    this->Name = "Равнобедренный треугольник";
};