#include "RacingSimulator.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    int distance = 5000;
    Race race;
    race.raceBegin(distance);

    return 0;
}