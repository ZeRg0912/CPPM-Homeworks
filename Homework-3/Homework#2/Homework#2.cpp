#include <iostream>
#include <string>

using namespace std;

class Counter
{
private:
    int num;

public:
    Counter (int initNum, bool check) {
        if (check) {
            this->num = initNum;
        }
        else {
            this->num = 1;
        }
    }

    int getNumber() {
        return num;
    }

    void increase()
    {
        this->num++;
    }

    void decrease()
    {
        this->num--;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    system("cls");
    string init;
    bool checkInit = false;
    char command;
    int initNumber = 0;

    // Выбор начального значения пользователя или по умолчанию
    do {
        cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
        cin >> init;
        if (init == "да" || init == "Да" || init == "ДА") {
            // Проверка на введенное начальное значение счетчика, пока не будет цифра
            do {
                cout << "Введите начальное значение счетчика: ";
                cin >> initNumber;
                if (cin.fail()) {
                    cout << "Неккоректное значение! попробуй снова." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }                
                else {
                    break;
                }
            } while (!isdigit(initNumber));
            // Инициализируем значение пользователя
            checkInit = true;
        }
        // Инициализируем значение по умолчанию = 1
        else if (init == "нет" || init == "Нет" || init == "НЕТ") {
            checkInit = false;
        }
        else {
            cout << "Необходимо ввести: да или нет!" << endl;
        }
    } while ((init != "да" && init != "Да" && init != "ДА") && (init != "нет" && init != "Нет" && init != "НЕТ"));
    // Инициализация счетчика
    Counter count(initNumber, checkInit);

    // Ввод команды для изменения или вывода значения счетчика и проверка правильности введенной команды
    do {
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> command;

        if ((command == '+' || command == '-' || command == '=' || command == 'х' || command == 'x')) {
            switch (command)
            {
            case '-':
                count.decrease();
                break;
            case '+':
                count.increase();
                break;
            case '=':
                cout << count.getNumber() << endl;
                break;
            }
            // Очистка ввода консоли, чтобы избежать лишних вводимых значений например ++ или ==, т.к. произойдет двойное выполнение без ввода пользователя
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            cout << "Введена неверная команда, повторите ввод!" << endl;
        }
    } while ((command != 'х') && (command != 'x') && (command != 'Х') && (command != 'X'));
    cout << "До свидания!" << endl;
    return 0;
}