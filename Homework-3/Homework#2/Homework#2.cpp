#include <iostream>
#include <string>

using namespace std;

class Counter
{
private:
    int num;

public:
    Counter (int num) {
        this->num = num;
    }

    Counter()
    {
        num = 1;
    }

    int getNumber() {
        return num;
    }

    void increase()
    {
        this->num = num++;
    }

    void decrease()
    {
        this->num = num--;
    }

    bool setNum(int num)
    {
        if (sizeof(num) == sizeof(int))
        {
            this->num = num;
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
    string init;
    char str;
    int initNumber;
    Counter first;
   
    cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
    cin >> init;
    if (init == "да" || init == "Да" || init == "ДА") {
        cout << "Введите начальное значение счетчика: ";
        cin >> initNumber;
        first.setNum(initNumber);
    }

    do {
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> str;
        if (str == '+' || str == '-' || str == '=' || str == 'х') {
            switch (str)
            {
            case '-':
                first.decrease();
                break;
            case '+':
                first.increase();
                break;
            case '=':
                cout << first.getNumber() << endl;
                break;
            }
        }
        else {
            cout << "Введена неверная команда, повторите ввод!" << endl;
        }
    } while (str != 'х');
    cout << "До свидания!" << endl;
    return 0;
}