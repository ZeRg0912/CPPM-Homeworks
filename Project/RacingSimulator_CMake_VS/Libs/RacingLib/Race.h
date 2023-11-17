#pragma once
#include "Race/RaceAirGround.h"
#include "Race/RaceAir.h"
#include "Race/RaceGround.h"

#ifdef RaceLib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif

int RaceLib_API setDistance();

class RaceLib_API Race {
public:
	void begin();
	void printMenuTable();
	void doRestart(Race& race);
};