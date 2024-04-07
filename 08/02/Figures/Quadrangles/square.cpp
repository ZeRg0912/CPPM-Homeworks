#include "square.h"

square::square(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
    this->Name = "Квадрат";

    if (((sideLengthA != sideLengthB) || (sideLengthB != sideLengthC) || (sideLengthC != sideLengthD)) && ((angleA != 90) || (angleB != 90) || (angleC != 90) || (angleD != 90))) {
        throw badFigureException("Стороны не равны, углы не равны 90 градусов");
    }
    else if ((sideLengthA != sideLengthB) || (sideLengthB != sideLengthC) || (sideLengthC != sideLengthD)) {
        throw badFigureException("Стороны не равны");
    }
    else if ((angleA != 90) || (angleB != 90) || (angleC != 90) || (angleD != 90)) {
        throw badFigureException("Углы не равны 90 градусов");
    }
};