#pragma once
#include <string>
#include "badFigureException.h"

class figure {
protected:
    std::string Name = "������";
    // �������
    int sideLengthA = 0;
    int sideLengthB = 0;
    int sideLengthC = 0;
    int sideLengthD = 0;
    // ����
    int angleA = 0;
    int angleB = 0;
    int angleC = 0;
    int angleD = 0;
    // �������� �� 3 ��� 4 �������
    bool fourSides = false;

public:
    std::string getName();

    int getSideA();

    int getSideB();

    int getSideC();

    int getSideD();

    int getAngleA();

    int getAngleB();

    int getAngleC();

    int getAngleD();

    bool checkSides();
};