#pragma once
#include "figure.h"

class triangle : public figure {
public:
    LEAVER_LIBRARY_API triangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC);
};

class rectangularTriangle : public triangle {
public:
    LEAVER_LIBRARY_API rectangularTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB);
};

class isoscelesTriangle : public triangle {
public:
    LEAVER_LIBRARY_API isoscelesTriangle(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB);
};

class equilateralTriangle : public triangle {
public:
    LEAVER_LIBRARY_API equilateralTriangle(int _sideLengthA);
};