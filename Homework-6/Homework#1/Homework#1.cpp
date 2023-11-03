#include <iostream>
#include "math.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    int x, y;
    int choise;
    do {
        cout << "Введите первое число: ";
        cin >> x;
        cout << "Введите второе число: ";
        cin >> y;
        cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 0 - для выхода): ";
        cin >> choise;
        cout << choiseOperation(choise, x, y) << endl;
    } while (choise != 0);
}