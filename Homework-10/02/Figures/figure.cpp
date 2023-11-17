#include "figure.h"

std::string figure::getName() {
    return Name;
}

int figure::getSideA() {
    return sideLengthA;
}

int figure::getSideB() {
    return sideLengthB;
}

int figure::getSideC() {
    return sideLengthC;
}

int figure::getSideD() {
    return sideLengthD;
}

int figure::getAngleA() {
    return angleA;
}

int figure::getAngleB() {
    return angleB;
}

int figure::getAngleC() {
    return angleC;
}

int figure::getAngleD() {
    return angleD;
}

bool figure::checkSides() {
    return fourSides;
}