#include "print_info.h"
#include <iostream>

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