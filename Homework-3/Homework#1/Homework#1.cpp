﻿#include <iostream>
#include <string>

using namespace std;

class Calculator
{
public:
    //Calculator (double num1, double num2) {}

    double num1, num2;

    double add (double num1, double num2) 
    {
        return num1 + num2;
    }

    double multiply(double num1, double num2)
    {
        return num1 * num2;
    }
    
    double subtract_1_2(double num1, double num2)
    {
        return num1 - num2;
    }

    double subtract_2_1(double num1, double num2)
    {
        return num2 - num1;
    }

    double divide_1_2(double num1, double num2)
    {
        return num1 / num2;
    }

    double divide_2_1(double num1, double num2)
    {
        return num2 / num1;
    }

    bool set_num1(double num1)
    {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }

    bool set_num2(double num2)
    {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    system("cls");

    double num1 = 0;
    double num2 = 0;
    Calculator result;
    
    while (1)
    {
        do {
            if (!result.set_num1(num1)) {
                cout << "Введите num1: ";
                cin >> num1;
            }
            if (!result.set_num2(num2)) {
                cout << "Введите num2: ";
                cin >> num2;
            }
            if (!result.set_num1(num1) || !result.set_num2(num2)) {
                cout << "Неверный ввод!" << "\n";
            }
        } while (!result.set_num1(num1) && !result.set_num2(num2));
        if (result.set_num1(num1) && result.set_num2(num2)) {
            cout << "num1 + num2 = " << result.add(num1, num2) << endl;
            cout << "num1 - num2 = " << result.subtract_1_2(num1, num2) << endl;
            cout << "num2 - num1 = " << result.subtract_2_1(num1, num2) << endl;
            cout << "num1 * num2 = " << result.multiply(num1, num2) << endl;
            cout << "num1 / num2 = " << result.divide_1_2(num1, num2) << endl;
            cout << "num2 / num1 = " << result.divide_2_1(num1, num2) << "\n\n";
            num1 = 0;
            num2 = 0;
        }
    }
    return 0;
}