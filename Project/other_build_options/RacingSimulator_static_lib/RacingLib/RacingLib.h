#pragma once
#include "Race/RaceAirGround.h"
#include "Race/RaceAir.h"
#include "Race/RaceGround.h"

/*#ifdef RACINGLIBRARY_EXPORTS
#define RACINGLIBRARY_API __declspec(dllexport)
#else 
#define RACINGLIBRARY_API __declspec(dllimport)
#endif*/

int setDistance();

class Race {
public:
	void begin();
	void printMenuTable();
	void doRestart(Race& race);
};
