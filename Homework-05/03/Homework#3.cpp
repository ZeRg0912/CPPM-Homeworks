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
        if (((angleA + angleB + angleC) == 180) && numOfSides == 3) {
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
    rectangularTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, _angleC) {
        this->Name = "Прямоугольный треугольник";
    };
};

class isoscelesTriangle : public triangle {
protected:
    bool checkFigure() override {
        if (triangle::checkFigure() && ((sideLengthA == sideLengthC) && (angleA == angleC))) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    isoscelesTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, _angleC) {
        this->Name = "Равнобедренный треугольник";
    };
};

class equilateralTriangle : public triangle {
protected:
    bool checkFigure() override {
        if (triangle::checkFigure() && ((sideLengthA == sideLengthB) && (sideLengthC == sideLengthB)) && ((angleA == 60) && (angleB == 60) && (angleB == 60))) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    equilateralTriangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _angleA, int _angleB, int _angleC) : triangle(_sideLengthA, _sideLengthB, _sideLengthC, _angleA, _angleB, _angleC) {
        this->Name = "Равносторонний  треугольник";
    };
};

class quadrangle : public figure {
protected:
    bool checkFigure() override {
        if (((angleA + angleB + angleC + angleD) == 360) && numOfSides == 4) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    quadrangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) {
        this->Name = "Четырехугольник";
        this->numOfSides = 4;
        this->sideLengthA = _sideLengthA;
        this->sideLengthB = _sideLengthB;
        this->sideLengthC = _sideLengthC;
        this->sideLengthD = _sideLengthD;
        this->angleA = _angleA;
        this->angleB = _angleB;
        this->angleC = _angleC;
        this->angleD = _angleD;
    };

    void print_info() override {
        figure::print_info();
        cout << "Стороны: a = " << getSideA() << ", b = " << getSideB() << ", c = " << getSideC() << ", d = " << getSideD() << endl;
        cout << "Углы: A = " << getAngleA() << ", B = " << getAngleB() << ", C = " << getAngleC() << ", D = " << getAngleD() << endl;
    }
};

class rectangle : public quadrangle {
protected:
    bool checkFigure() override {
        if (quadrangle::checkFigure() && (sideLengthA == sideLengthC) && (sideLengthB == sideLengthD) && (angleA == 90) && (angleB == 90) && (angleC == 90) && (angleD == 90)) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    rectangle(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle (_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
        this->Name = "Прямоугольник";
    };
};

class square : public quadrangle {
protected:
    bool checkFigure() override {
        if (quadrangle::checkFigure() && (sideLengthA == sideLengthC) && (sideLengthB == sideLengthD) && (sideLengthA == sideLengthB) && (angleA == 90) && (angleB == 90) && (angleC == 90) && (angleD == 90)) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    square(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
        this->Name = "Квадрат";
    };
};

class parallelogram : public quadrangle {
protected:
    bool checkFigure() override {
        if (quadrangle::checkFigure() && (sideLengthA == sideLengthC) && (sideLengthB == sideLengthD) && (angleA == angleC) && (angleB == angleD)) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    parallelogram(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
        this->Name = "Параллелограмм";
    };
};

class rhomb : public quadrangle {
protected:
    bool checkFigure() override {
        if (quadrangle::checkFigure() && (sideLengthA == sideLengthC) && (sideLengthB == sideLengthD) && (sideLengthA == sideLengthB) && (angleA == angleC) && (angleB == angleD)) {
            return true;
        }
        else {
            return false;
        }
    }
public:
    rhomb(int _sideLengthA, int _sideLengthB, int _sideLengthC, int _sideLengthD, int _angleA, int _angleB, int _angleC, int _angleD) : quadrangle(_sideLengthA, _sideLengthB, _sideLengthC, _sideLengthD, _angleA, _angleB, _angleC, _angleD) {
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

    rectangularTriangle RectangularTriangle1(10, 20, 30, 50, 60, 90);
    RectangularTriangle1.print_info();

    rectangularTriangle RectangularTriangle2(10, 20, 30, 45, 45, 90);
    RectangularTriangle2.print_info();

    isoscelesTriangle IsoscelesTriangle1(10, 20, 10, 50, 60, 50);
    IsoscelesTriangle1.print_info();

    equilateralTriangle EquilateralTriangle1(30, 30, 30, 60, 60, 60);
    EquilateralTriangle1.print_info();

    quadrangle Quadrangle1(10, 20, 30, 40, 50, 60, 70, 80);
    Quadrangle1.print_info();

    rectangle Rectangle1(10, 20, 10, 20, 90, 90, 90, 90);
    Rectangle1.print_info();

    square Square1(20, 20, 20, 20, 90, 90, 90, 90);
    Square1.print_info();

    parallelogram Parallelogram1(20, 30, 20, 30, 30, 40, 30, 40);
    Parallelogram1.print_info();

    rhomb Rhomb1(30, 30, 30, 30, 30, 40, 30, 40);
    Rhomb1.print_info();

    return 0;
}