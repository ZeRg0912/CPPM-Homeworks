#pragma once
#include "figure.h"

class triangle : public figure {
public:
    triangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC);
};

class rectangularTriangle : public triangle {
public:
    rectangularTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB);
};

class isoscelesTriangle : public triangle {
public:
    isoscelesTriangle(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB);
};

class equilateralTriangle : public triangle {
public:
    equilateralTriangle(int _sideLengthA);
};