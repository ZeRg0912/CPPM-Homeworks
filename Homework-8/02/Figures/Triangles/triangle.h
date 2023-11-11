#pragma once
#include "../figure.h"

class triangle : public figure {
public:
    triangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC);
};