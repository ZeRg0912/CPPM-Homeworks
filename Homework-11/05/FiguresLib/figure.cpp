#include "figure.h"

std::string figure::getName() {
    return Name;
}

int figure::getSideA() {
    return sideLengthA;
}

int figure::getSideB() {
    return sideLengthB;
}

int figure::getSideC() {
    return sideLengthC;
}

int figure::getSideD() {
    return sideLengthD;
}

int figure::getAngleA() {
    return angleA;
}

int figure::getAngleB() {
    return angleB;
}

int figure::getAngleC() {
    return angleC;
}

int figure::getAngleD() {
    return angleD;
}

bool figure::checkSides() {
    return fourSides;
}

void print_info(figure& figureType) {
    std::cout << figureType.getName() << ": " << std::endl;
    std::cout << "Стороны: a = " << figureType.getSideA() << ", b = " << figureType.getSideB() << ", c = " << figureType.getSideC();
    if (figureType.checkSides()) {
        std::cout << ", d = " << figureType.getSideD() << std::endl;
    }
    else {
        std::cout << std::endl;
    }
    std::cout << "Углы: A = " << figureType.getAngleA() << ", B = " << figureType.getAngleB() << ", C = " << figureType.getAngleC();
    if (figureType.checkSides()) {
        std::cout << ", D = " << figureType.getAngleD() << std::endl;
    }
    else {
        std::cout << std::endl;
    }
    std::cout << std::endl;
}