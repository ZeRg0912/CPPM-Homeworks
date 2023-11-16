#pragma once
#include "RaceAirGround.h"
#include "RaceAir.h"
#include "RaceGround.h"

int setDistance();

class Race {
public:
	void begin();
	void printMenuTable();
	void doRestart(Race& race);
};