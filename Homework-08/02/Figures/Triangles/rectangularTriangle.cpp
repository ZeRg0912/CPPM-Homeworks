#include "rectangularTriangle.h"

rectangularTriangle::rectangularTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, _angleC) {
    this->Name = "������������� �����������";

    if (angleC != 90) {
        throw badFigureException("���� � �� ����� 90 ��������");
    }
};