﻿#pragma comment(lib,"RacingLib.lib")
#include "RacingLib.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    Race race;
    race.begin();

    return 0;
}