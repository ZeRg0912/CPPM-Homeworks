#include <iostream>
#include <string>

using namespace std;

enum Month {
    январь = 1,
    февраль,
    март, 
    апрель,
    май, 
    июнь, 
    июль, 
    август, 
    сентябрь, 
    октябрь, 
    ноябрь, 
    декабрь,
};

int main() {
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    system("cls");

    Month month{};
    int MonthNumber;

    do {
        cout << "Введите номер месяца: ";
        cin >> MonthNumber;
        if (MonthNumber > 0 && MonthNumber < 13) {
            switch (MonthNumber) {
            case Month::январь:
                cout << "январь" << endl;
                break;
            case Month::февраль:
                cout << "февраль" << endl;
                break;
            case Month::март:
                cout << "март" << endl;
                break;
            case Month::апрель:
                cout << "апрель" << endl;
                break;
            case Month::май:
                cout << "май" << endl;
                break;
            case Month::июнь:
                cout << "июнь" << endl;
                break;
            case Month::июль:
                cout << "июль" << endl;
                break;
            case Month::август:
                cout << "август" << endl;
                break;
            case Month::сентябрь:
                cout << "сентябрь" << endl;
                break;
            case Month::октябрь:
                cout << "октябрь" << endl;
                break;
            case Month::ноябрь:
                cout << "ноябрь" << endl;
                break;
            case Month::декабрь:
                cout << "декабрь" << endl;
                break;
            }
        }
        else if (MonthNumber < 0 || MonthNumber > 12) {
            cout << "Неправильный номер!\n";
        }
    } while (MonthNumber != 0);

    cout << "До свидания\n";

    /*int MonthNumber;
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
    cout << "До свидания\n";*/
    
    return 0;
}