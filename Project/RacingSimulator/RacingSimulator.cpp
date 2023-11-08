#include <iostream>
#include "Transports/Ground/CAMEL.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    CAMEL camel1(10, 30, 5, 2);

    cout << camel1.getName();

    return 0;
}