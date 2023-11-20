#include "quadrangles.h"

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
};

rectangle::rectangle(int _sideLengthA, int _sideLengthB) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthA, _sideLengthB, 90, 90, 90, 90) {
    this->Name = "Прямоугольник";
};

parallelogram::parallelogram(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthA, _sideLengthB, _angleA, _angleB, _angleA, _angleB) {
    this->Name = "Параллелограмм";
};

square::square(int _sideLengthA) : quadrangle(_sideLengthA, _sideLengthA, _sideLengthA, _sideLengthA, 90, 90, 90, 90) {
    this->Name = "Квадрат";
};

rhomb::rhomb(int _sideLengthA, int _angleA, int _angleB) : quadrangle(_sideLengthA, _sideLengthA, _sideLengthA, _sideLengthA, _angleA, _angleB, _angleA, _angleB) {
    this->Name = "Ромб";
};