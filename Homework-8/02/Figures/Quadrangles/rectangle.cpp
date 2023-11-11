#include "rectangle.h"

rectangle::rectangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
    this->Name = "�������������";

    if (((angleA != 90) && (angleB != 90) && (angleC != 90) && (angleD != 90)) && ((sideLengthA != sideLengthC) && (sideLengthB != sideLengthD))) {
        throw badFigureException("������� � �� ����� ������� �, ������� B �� ����� ������� D, ���� �� ����� 90 ��������");
    }
    else if ((angleA != 90) || (angleB != 90) || (angleC != 90) || (angleD != 90)) {
        throw badFigureException("���� ��� ��������� ����� �� ����� 90 ��������");
    }
    else if ((sideLengthA != sideLengthC) && (sideLengthB != sideLengthD)) {
        throw badFigureException("������� � �� ����� ������� �, ������� B �� ����� ������� D");
    }
    else if ((sideLengthA != sideLengthC) && (sideLengthB == sideLengthD)) {
        throw badFigureException("������� � �� ����� ������� �");
    }
    else if ((sideLengthA == sideLengthC) && (sideLengthB != sideLengthD)) {
        throw badFigureException("������� B �� ����� ������� D");
    }
};