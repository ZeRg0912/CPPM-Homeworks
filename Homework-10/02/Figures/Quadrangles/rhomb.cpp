#include "rhomb.h"

rhomb::rhomb(int _sideLengthA, int _angleA, int _angleB) : quadrangle(_sideLengthA, _sideLengthA, _sideLengthA, _sideLengthA, _angleA, _angleB, _angleA, _angleB) {
    this->Name = "Ромб";
};