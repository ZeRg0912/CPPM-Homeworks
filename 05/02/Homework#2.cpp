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
        fourSides = false;
        this->sideLengthA = _sideLengthA;
        this->sideLengthB = _sideLengthB;
        this->sideLengthC = _sideLengthC;
        this->angleA = _angleA;
        this->angleB = _angleB;
        this->angleC = _angleC;
    };
};

class rectangularTriangle : public triangle {
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
        fourSides = true;
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

void print_info (figure &figureType) {
    cout << figureType.getName() << ": " << endl;
    cout << "Стороны: a = " << figureType.getSideA() << ", b = " << figureType.getSideB() << ", c = " << figureType.getSideC();
    if (figureType.checkSides()) {
        cout << ", d = " << figureType.getSideD() << endl;
    }
    else {
        cout << endl;
    }
    cout << "Углы: A = " << figureType.getAngleA() << ", B = " << figureType.getAngleB() << ", C = " << figureType.getAngleC();
    if (figureType.checkSides()) {
        cout << ", D = " << figureType.getAngleD() << endl;
    }
    else {
        cout << endl;
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    triangle Triangle1(10, 20, 30, 50, 60 ,70);
    rectangularTriangle RectangularTriangle1(10, 20, 30, 50, 60);
    isoscelesTriangle IsoscelesTriangle1(10, 20, 50, 60);
    equilateralTriangle EquilateralTriangle1(30);
        
    quadrangle Quadrangle1(10, 20, 30, 40, 50, 60, 70, 80);
    rectangle Rectangle1(10, 20);
    square Square1(20);
    parallelogram Parallelogram1(20, 30, 30, 40);
    rhomb Rhomb1(30, 30, 40);

    print_info(Triangle1);
    print_info(RectangularTriangle1);
    print_info(IsoscelesTriangle1);
    print_info(EquilateralTriangle1);

    print_info(Quadrangle1);
    print_info(Rectangle1);
    print_info(Square1);
    print_info(Parallelogram1);
    print_info(Rhomb1);    

    return 0;
}