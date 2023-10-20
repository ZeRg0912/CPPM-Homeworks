#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    system("cls");

    int MonthNumber;
    do {
        cout << "Введите номер месяца: ";
        cin >> MonthNumber;
        if (MonthNumber > 0 && MonthNumber < 13) {
            switch (MonthNumber) {
            case 1:
                cout << "Январь";
                break;
            case 2:
                cout << "Февраль";
                break;
            case 3:
                cout << "Март";
                break;
            case 4:
                cout << "Апрель";
                break;
            case 5:
                cout << "Май";
                break;
            case 6:
                cout << "Июнь";
                break;
            case 7:
                cout << "Июль";
                break;
            case 8:
                cout << "Август";
                break;
            case 9:
                cout << "Сентябрь";
                break;
            case 10:
                cout << "Октябрь";
                break;
            case 11:
                cout << "Ноябрь";
                break;
            case 12:
                cout << "Декабрь";
                break;
            }
            cout << endl;
        }
        else if (MonthNumber < 0 || MonthNumber > 12) {
            cout << "Неправильный номер!\n";
        }
    } while (MonthNumber != 0);
    cout << "До свидания\n";
    
    return 0;
}