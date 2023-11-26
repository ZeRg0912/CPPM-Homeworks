#pragma once
#include "figure.h"

class quadrangle : public figure {
public:
    quadrangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD);
};

class rectangle : public quadrangle {
public:
    rectangle(int _sideLengthA, int _sideLengthB);
};

class parallelogram : public quadrangle {
public:
    parallelogram(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB);
};

class square : public quadrangle {
public:
    square(int _sideLengthA);
};

class rhomb : public quadrangle {
public:
    rhomb(int _sideLengthA, int _angleA, int _angleB);
};