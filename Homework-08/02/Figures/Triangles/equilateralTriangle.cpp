#include "equilateralTriangle.h"

equilateralTriangle::equilateralTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, _angleC) {
    this->Name = "��������������  �����������";

    if (((sideLengthA != sideLengthB) || (sideLengthB != sideLengthC)) && ((angleA != 60) || (angleB != 60) || (angleC != 60))) {
        throw badFigureException("������� �� �����, ���� �� ����� 60 ��������");
    }
    else if ((sideLengthA != sideLengthB) || (sideLengthB != sideLengthC)) {
        throw badFigureException("������� �� �����");
    }
    else if ((angleA != 60) || (angleB != 60) || (angleC != 60)) {
        throw badFigureException("���� �� ����� 60 ��������");
    }
};


/*
    if ((sideLengthA != sideLengthB || sideLengthC != sideLengthB || sideLengthA != sideLengthC) && (angleA != 60 || angleB != 60 || angleC != 60)) {
        throw badFigureException("��� �������� �� ����� � ���� �� ����� 60 ��������");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleA != 60 || angleB != 60 || angleC != 60)) {
        throw badFigureException("������� � �� ����� � � �, ���� �� ����� 60 ��������");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleC == 60 && (angleA != 60 || angleB != 60))) {
        throw badFigureException("������� � �� ����� � � �, ���� A � B �� ����� 60 ��������");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleC == 60 && (angleA != 60 || angleB != 60))) {
        throw badFigureException("������� � �� ����� � � �, ���� A �� ����� 60 ��������");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleB == 60 && (angleA != 60 || angleC != 60))) {
        throw badFigureException("������� � �� ����� � � �, ���� A � C �� ����� 60 ��������");
    }
    else if ((sideLengthA == sideLengthB) && (sideLengthC != sideLengthA) && (angleA == 60 && (angleB != 60 || angleC != 60))) {
        throw badFigureException("������� � �� ����� � � �, ���� B � C �� ����� 60 ��������");
    }
    else if ((sideLengthA == sideLengthC) && (sideLengthB != sideLengthA) && (angleA != 60 || angleB != 60 || angleC != 60)) {
        throw badFigureException("������� B �� ����� A � C, ���� �� ����� 60 ��������");
    }
    else if ((sideLengthB == sideLengthC) && (sideLengthA != sideLengthB) && (angleA != 60 || angleB != 60 || angleC != 60)) {
        throw badFigureException("������� A �� ����� B � C, ���� �� ����� 60 ��������");
    }
 */