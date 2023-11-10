#include "RacingSimulator.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    int distance = 10000;
    
    CAMEL camel1;
    FAST_CAMEL fastCamel1;
    CENTAUR centaur1;
    BOOTS boots1;
    cout << camel1.getName() << " : " << camel1.timeRace(distance) << endl;
    cout << fastCamel1.getName() << " : " << fastCamel1.timeRace(distance) << endl;
    cout << centaur1.getName() << " : " << centaur1.timeRace(distance) << endl;
    cout << boots1.getName() << " : " << boots1.timeRace(distance) << endl;
    cout << endl;

    MAGIC_CARPET carpet1;
    EAGLE eagle1;
    BROOMSTICK stick1;
    cout << carpet1.getName() << " : " << carpet1.timeRace(distance) << endl;
    cout << eagle1.getName() << " : " << eagle1.timeRace(distance) << endl;
    cout << stick1.getName() << " : " << stick1.timeRace(distance) << endl;


    return 0;
}