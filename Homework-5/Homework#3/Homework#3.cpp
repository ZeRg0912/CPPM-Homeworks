#include <iostream>
#include <string>

using namespace std;

class figure {
protected:
    string Name = "Фигура";
    int numOfSides = 0;
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

    virtual bool checkFigure() {
        if (numOfSides == 0) {
            return true;
        }
        else {
            return false;
        }
    }

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

    virtual void print_info() {
        cout << endl;
        cout << Name << ": " << endl;
        if (checkFigure()) {
            cout << "Правильная" << endl;
        }
        else {
            cout << "Неправильная" << endl;
        }
        cout << "Количество сторон: " << numOfSides << endl;
    }
};

class triangle : public figure {
protected:
    bool checkFigure() override {
        if ((angleA + angleB + angleC) == 180) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    triangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) {
        this->Name = "Треугольник";
        this->numOfSides = 3;
        this->sideLengthA = _sideLengthA;
        this->sideLengthB = _sideLengthB;
        this->sideLengthC = _sideLengthC;
        this->angleA = _angleA;
        this->angleB = _angleB;
        this->angleC = _angleC;
    };

    void print_info() override {
        figure::print_info();
        cout << "Стороны: a = " << getSideA() << ", b = " << getSideB() << ", c = " << getSideC() << endl;
        cout << "Углы: A = " << getAngleA() << ", B = " << getAngleB() << ", C = " << getAngleC() << endl;
    }
};

class rectangularTriangle : public triangle {
protected:
    bool checkFigure() override {
        if ((triangle::checkFigure()) && (angleC == 90)) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    rectangularTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, 90) {
        this->Name = "Прямоугольный треугольник";
    };
};

class isoscelesTriangle : public triangle {
public:
    isoscelesTriangle(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB) : triangle(_sideLengthA, _sideLengthB, _sideLengthA, _angleA, _angleB, _angleA) {
        this->Name = "Равнобедренный треугольник";
    };
};

class equilateralTriangle : public triangle {
public:
    equilateralTriangle(int _sideLengthA) : triangle(_sideLengthA, _sideLengthA, _sideLengthA, 60, 60, 60) {
        this->Name = "Равносторонний  треугольник";
    };
};

class quadrangle : public figure {
public:
    quadrangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) {
        this->Name = "Четырехугольник";
        this->numOfSides = 3;
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

class rectangle : public quadrangle {
public:
    rectangle(int _sideLengthA, int _sideLengthB) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthA, _sideLengthB, 90, 90, 90, 90) {
        this->Name = "Прямоугольник";
    };
};

class square : public quadrangle {
public:
    square(int _sideLengthA) : quadrangle(_sideLengthA, _sideLengthA, _sideLengthA, _sideLengthA, 90, 90, 90, 90) {
        this->Name = "Квадрат";
    };
};

class parallelogram : public quadrangle {
public:
    parallelogram(int _sideLengthA, int _sideLengthB, int _angleA, int _angleB) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthA, _sideLengthB, _angleA, _angleB, _angleA, _angleB) {
        this->Name = "Параллелограмм";
    };
};

class rhomb : public quadrangle {
public:
    rhomb(int _sideLengthA, int _angleA, int _angleB) : quadrangle(_sideLengthA, _sideLengthA, _sideLengthA, _sideLengthA, _angleA, _angleB, _angleA, _angleB) {
        this->Name = "Ромб";
    };
};

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    figure Figure1;
    Figure1.print_info();

    triangle Triangle1(10, 20, 30, 50, 60, 70);
    Triangle1.print_info();

    rectangularTriangle RectangularTriangle1(10, 20, 30, 50, 60);
    RectangularTriangle1.print_info();

    rectangularTriangle RectangularTriangle2(10, 20, 30, 45, 45);
    RectangularTriangle2.print_info();

    return 0;
}