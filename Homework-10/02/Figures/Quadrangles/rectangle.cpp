#include "rectangle.h"

rectangle::rectangle(int _sideLengthA, int _sideLengthB) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthA, _sideLengthB, 90, 90, 90, 90) {
    this->Name = "Прямоугольник";
};