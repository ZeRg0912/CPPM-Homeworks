#include <iostream>
#include <string>

using namespace std;

class figure {
protected:
    string Name = "Фигура";
    // Стороны
    int sideLengthA = 0;
    int sideLengthB = 0;
    int sideLengthC = 0;
    int sideLengthD = 0;
    // Углы
    int angleA = 0;
    int angleB = 0;
    int angleC = 0;
    int angleD = 0;
    // Проверка на 3 или 4 стороны
    bool fourSides = false;

public:
    string getName() {
        return Name;
    }

    int getSideA() {
        return sideLengthA;
    }

    int getSideB() {
        return sideLengthB;
    }

    int getSideC() {
        return sideLengthC;
    }

    int getSideD() {
        return sideLengthD;
    }

    int getAngleA() {
        return angleA;
    }

    int getAngleB() {
        return angleB;
    }

    int getAngleC() {
        return angleC;
    }

    int getAngleD() {
        return angleD;
    }

    bool checkSides() {
        return fourSides;
    }
};

class triangle : public figure {
public:
    triangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) {
        this->Name = "Треугольник";
        bool fourSides = false;
        this->sideLengthA = _sideLengthA;
        this->sideLengthB = _sideLengthB;
        this->sideLengthC = _sideLengthC;
        this->angleA = _angleA;
        this->angleB = _angleB;
        this->angleC = _angleC;
    };
};

class rectangularTriangle : public triangle {
};

class quadrangle : public figure {
public:
    quadrangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) {
        this->Name = "Четырехугольник";
        bool fourSides = true;
        this->sideLengthA = _sideLengthA;
        this->sideLengthB = _sideLengthB;
        this->sideLengthC = _sideLengthC;
        this->sideLengthD = _sideLengthD;
        this->angleA = _angleA;
        this->angleB = _angleB;
        this->angleC = _angleC;
        this->angleD = _angleD;
    };
};

void print_info (figure *figureType) {
    cout << figureType->getName() << ": " << endl;
    cout << "Стороны: " << figureType->getSideA() << " " << figureType->getSideB() << " " << figureType->getSideC();
    if (figureType->checkSides()) {
        cout << " " << figureType->getSideD() << endl;
    }
    else {
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");
    figure fig1;
    triangle fig2(10, 20, 30, 50, 60 ,70);
    quadrangle fig3(10, 20, 30, 40, 50, 60, 70, 80);

    cout << "Количество сторон: \n";
    print_info(&fig3);

    return 0;
}