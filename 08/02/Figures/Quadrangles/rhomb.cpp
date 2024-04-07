#include "rhomb.h"

rhomb::rhomb(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
    this->Name = "Ромб";

    if (((sideLengthA != sideLengthB) || (sideLengthB != sideLengthC) || (sideLengthC != sideLengthD)) && ((angleA != angleC) && (angleB != angleD))) {
        throw badFigureException("Стороны не равны, углы не равны 90 градусов");
    }
    else if ((sideLengthA != sideLengthB) || (sideLengthB != sideLengthC) || (sideLengthC != sideLengthD)) {
        throw badFigureException("Стороны не равны");
    }
    else if ((angleA != angleC) && (angleB != angleD)) {
        throw badFigureException("Угол A не равен углу C, угол B не равен углу D");
    }
    else if ((angleA != angleC) && (angleB == angleD)) {
        throw badFigureException("Угол A не равен углу C");
    }
    else if ((angleA == angleC) && (angleB != angleD)) {
        throw badFigureException("Угол B не равен углу D");
    }
};