#include "print_info.h"
#include <iostream>

void print_info(figure& figureType) {
    std::cout << figureType.getName();
    std::cout << " (стороны " << figureType.getSideA() << ", " << figureType.getSideB() << ", " << figureType.getSideC();
    if (figureType.checkSides()) {
        std::cout << ", " << figureType.getSideD() << "; ";
    }
    else {
        std::cout << "; ";
    }
    std::cout << "углы " << figureType.getAngleA() << ", " << figureType.getAngleB() << ", " << figureType.getAngleC();
    if (figureType.checkSides()) {
        std::cout << ", " << figureType.getAngleD() << ")";
    }
    else {
        std::cout << ")";
    }
}