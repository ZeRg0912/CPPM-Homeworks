#include "rectangle.h"

rectangle::rectangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
    this->Name = "Прямоугольник";

    if (((angleA != 90) && (angleB != 90) && (angleC != 90) && (angleD != 90)) && ((sideLengthA != sideLengthC) && (sideLengthB != sideLengthD))) {
        throw badFigureException("Сторона А не равна стороне С, сторона B не равна стороне D, углы не равны 90 градусов");
    }
    else if ((angleA != 90) || (angleB != 90) || (angleC != 90) || (angleD != 90)) {
        throw badFigureException("Один или несколько углов не равны 90 градусов");
    }
    else if ((sideLengthA != sideLengthC) && (sideLengthB != sideLengthD)) {
        throw badFigureException("Сторона А не равна стороне С, сторона B не равна стороне D");
    }
    else if ((sideLengthA != sideLengthC) && (sideLengthB == sideLengthD)) {
        throw badFigureException("Сторона А не равна стороне С");
    }
    else if ((sideLengthA == sideLengthC) && (sideLengthB != sideLengthD)) {
        throw badFigureException("Сторона B не равна стороне D");
    }
};