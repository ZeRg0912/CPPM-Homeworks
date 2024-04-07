#include <iostream>
#include <string>

using namespace std;

class figure {
protected:
    int sideCounts = 0;
    string Name;

    figure(string FigName, int Sides) {
        this->Name = FigName;
        this->sideCounts = Sides;
    }

public:
    figure() : figure("Фигура" , 0) {};

    string getName() { 
        return Name; 
    }

    int getSidesCount() { 
        return sideCounts; 
    }

    void outFig() {
        cout << this->getName() << ": " << this->getSidesCount() << endl;
    }
};

class triangle : public figure {
public:
    triangle() : figure("Треугольник", 3) {};
};

class quadrangle : public figure {
public:
    quadrangle() : figure("Четырехугольник", 4) {};
};

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    figure fig1;
    triangle fig2;
    quadrangle fig3;

    cout << "Количество сторон: \n";
    fig1.outFig();
    fig2.outFig();
    fig3.outFig();

    return 0;
}