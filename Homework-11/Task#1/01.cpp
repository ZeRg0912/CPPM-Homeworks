#include <iostream>
#include "Lib/Greeter/Greeter.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");
    Greeter people;

    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << people.greet(name);

    return 0;
}