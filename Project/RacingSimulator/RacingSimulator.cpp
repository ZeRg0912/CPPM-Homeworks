#include "RacingSimulator.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    CAMEL camel1;
    GROUND ground1;

    cout << ground1.getName() << " : " << ground1.time(100) << endl;
    cout << camel1.getName() << " : " << camel1.time(1000) << endl;

    return 0;
}