#include "parallelogram.h"

parallelogram::parallelogram(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
    this->Name = "Параллелограмм";

    if (((sideLengthA != sideLengthC) && (sideLengthB != sideLengthD)) && ((angleA != angleC) && (angleB != angleD))) {
        throw badFigureException("Сторона А не равна стороне С, сторона B не равна стороне D, угол A не равен углу C, угол B не равен углу D");
    }
    else if ((angleA != angleC) && (angleB != angleD)) {
        throw badFigureException("Угол A не равен углу C, угол B не равен углу D");
    }
    else if ((sideLengthA != sideLengthC) && (sideLengthB != sideLengthD)) {
        throw badFigureException("Сторона А не равна стороне С, сторона B не равна стороне D");
    }
    else if ((angleA != angleC) && (angleB == angleD)) {
        throw badFigureException("Угол A не равен углу C");
    }
    else if ((angleA == angleC) && (angleB != angleD)) {
        throw badFigureException("Угол B не равен углу D");
    }
    else if ((sideLengthA != sideLengthC) && (sideLengthB == sideLengthD)) {
        throw badFigureException("Сторона А не равна стороне С");
    }
    else if ((sideLengthA == sideLengthC) && (sideLengthB != sideLengthD)) {
        throw badFigureException("Сторона B не равна стороне D");
    }
};