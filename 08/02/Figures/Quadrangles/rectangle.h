#pragma once
#include "quadrangle.h"

class rectangle : public quadrangle {
public:
    rectangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD);
};