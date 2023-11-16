#pragma once
#include "Race/RaceAirGround.h"
#include "Race/RaceAir.h"
#include "Race/RaceGround.h"


int setDistance();

class Race {
public:
	void begin();
	void printMenuTable();
	void doRestart(Race& race);
};
