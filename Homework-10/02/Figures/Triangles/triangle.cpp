#include "triangle.h"
    
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