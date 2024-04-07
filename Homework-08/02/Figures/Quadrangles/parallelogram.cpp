#include "parallelogram.h"

parallelogram::parallelogram(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
    this->Name = "��������������";

    if (((sideLengthA != sideLengthC) && (sideLengthB != sideLengthD)) && ((angleA != angleC) && (angleB != angleD))) {
        throw badFigureException("������� � �� ����� ������� �, ������� B �� ����� ������� D, ���� A �� ����� ���� C, ���� B �� ����� ���� D");
    }
    else if ((angleA != angleC) && (angleB != angleD)) {
        throw badFigureException("���� A �� ����� ���� C, ���� B �� ����� ���� D");
    }
    else if ((sideLengthA != sideLengthC) && (sideLengthB != sideLengthD)) {
        throw badFigureException("������� � �� ����� ������� �, ������� B �� ����� ������� D");
    }
    else if ((angleA != angleC) && (angleB == angleD)) {
        throw badFigureException("���� A �� ����� ���� C");
    }
    else if ((angleA == angleC) && (angleB != angleD)) {
        throw badFigureException("���� B �� ����� ���� D");
    }
    else if ((sideLengthA != sideLengthC) && (sideLengthB == sideLengthD)) {
        throw badFigureException("������� � �� ����� ������� �");
    }
    else if ((sideLengthA == sideLengthC) && (sideLengthB != sideLengthD)) {
        throw badFigureException("������� B �� ����� ������� D");
    }
};