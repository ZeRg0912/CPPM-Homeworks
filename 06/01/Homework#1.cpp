#include <iostream>
#include <string>
#include "math.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    float x, y;
    int choise;
	do {
		cout << "Введите первое число: ";
		cin >> x;
		cout << "Введите второе число: ";
		cin >> y;
		do {
			cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 0 - для выхода): ";
			cin >> choise;
			if (choise < 0 || choise > 5) cout << "Выберите операцию из списка!" << endl;
		} while (choise < 0 || choise > 5);
		switch (choise) {
		case 1:
			cout << x << " плюс " << y << " = " << sum(x, y) << endl;
			break;
		case 2:
			cout << x << " минус " << y << " = " << sub(x, y) << endl;
			break;
		case 3:
			cout << x << " умножить на " << y << " = " << mult(x, y) << endl;
			break;
		case 4:
			if (y == 0) {
				cout << "На ноль делить нелья!" << endl;				
			}
			else {
				cout << x << " делить на " << y << " = " << divide(x, y) << endl;
			}
			break;
		case 5:
			cout << x << " в степени " << y << " = " << power(x, y) << endl;
			break;
		default:
			break;
		}
	} while (choise != 0);
	cout << "До свидания!" << endl;
	return 0;
}