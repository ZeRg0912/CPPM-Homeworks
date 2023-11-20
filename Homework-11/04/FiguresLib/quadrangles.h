#pragma once
#include "figure.h"

class FIGURE_DLL_API quadrangle : public figure {
public:
    quadrangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD);
};

class FIGURE_DLL_API rectangle : public quadrangle {
public:
    rectangle(int _sideLengthA, int _sideLengthB);
};

class FIGURE_DLL_API parallelogram : public quadrangle {
public:
    parallelogram(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB);
};

class FIGURE_DLL_API square : public quadrangle {
public:
    square(int _sideLengthA);
};

class FIGURE_DLL_API rhomb : public quadrangle {
public:
    rhomb(int _sideLengthA, int _angleA, int _angleB);
};