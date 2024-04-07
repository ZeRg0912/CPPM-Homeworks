#include "triangles.h"
    
triangle::triangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) {
    this->Name = "Треугольник";
    fourSides = false;
    this->sideLengthA = _sideLengthA;
    this->sideLengthB = _sideLengthB;
    this->sideLengthC = _sideLengthC;
    this->angleA = _angleA;
    this->angleB = _angleB;
    this->angleC = _angleC;
 };

rectangularTriangle::rectangularTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, 90) {
    this->Name = "Прямоугольный треугольник";
};

isoscelesTriangle::isoscelesTriangle(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB) : triangle(_sideLengthA, _sideLengthB, _sideLengthA, _angleA, _angleB, _angleA) {
    this->Name = "Равнобедренный треугольник";
};

equilateralTriangle::equilateralTriangle(int _sideLengthA) : triangle(_sideLengthA, _sideLengthA, _sideLengthA, 60, 60, 60) {
    this->Name = "Равносторонний  треугольник";
};