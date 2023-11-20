#pragma once
#include "figure.h"

class FIGURE_DLL_API triangle : public figure {
public:
    triangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC);
};

class FIGURE_DLL_API rectangularTriangle : public triangle {
public:
    rectangularTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB);
};

class FIGURE_DLL_API isoscelesTriangle : public triangle {
public:
    isoscelesTriangle(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB);
};

class FIGURE_DLL_API equilateralTriangle : public triangle {
public:
    equilateralTriangle(int _sideLengthA);
};