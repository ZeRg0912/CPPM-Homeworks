#pragma once
#include "quadrangle.h"

class square : public quadrangle {
public:
    square(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD);
};