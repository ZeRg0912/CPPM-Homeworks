#pragma once
#include "figure.h"

class quadrangle : public figure {
public:
    FIGURE_LIBRARY_API quadrangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD);
};

class rectangle : public quadrangle {
public:
    FIGURE_LIBRARY_API rectangle(int _sideLengthA, int _sideLengthB);
};

class parallelogram : public quadrangle {
public:
    FIGURE_LIBRARY_API parallelogram(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB);
};

class square : public quadrangle {
public:
    FIGURE_LIBRARY_API square(int _sideLengthA);
};

class rhomb : public quadrangle {
public:
    FIGURE_LIBRARY_API rhomb(int _sideLengthA, int _angleA, int _angleB);
};