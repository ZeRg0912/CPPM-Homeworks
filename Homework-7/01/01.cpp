#include <iostream>

using namespace std;

#define MODE 1

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");
#if !defined MODE
#error "Необходимо определить MODE"
#elif (MODE == 0)
    cout << "Работаю в режиме тренировки" << endl;
#elif (MODE == 1)
#define add(x, y) ((x) + (y));
    int x, y;
    cout << "Работаю в боевом режиме" << endl; 
    cout << "Введите число 1: ";
    cin >> x;
    cout << "Введите число 2: ";
    cin >> y;
    cout << "Результат сложения: " << add(x, y);
    cout << endl;
#else 
    cout << "Неизвестный режим. Завершение работы";
#endif
    return 0;
}