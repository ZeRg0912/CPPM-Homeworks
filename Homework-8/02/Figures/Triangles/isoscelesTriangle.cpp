#include "isoscelesTriangle.h"

isoscelesTriangle::isoscelesTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, _angleC) {
    this->Name = "�������������� �����������";

    if ((angleA != angleC) && (sideLengthA != sideLengthC)) {
        throw badFigureException("������� � �� ����� ������� �, ���� A �� ����� ���� C");
    }
    else if ((angleA != angleC)) {
        throw badFigureException("���� A �� ����� ���� C");
    }
    else if ((sideLengthA != sideLengthC)) {
        throw badFigureException("������� � �� ����� ������� �");
    }
    
};