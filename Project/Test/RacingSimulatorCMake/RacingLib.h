#pragma once
#include "Race/RaceAirGround.h"
#include "Race/RaceAir.h"
#include "Race/RaceGround.h"

#define RACINGLIBRARY_EXPORTS

#ifdef RACINGLIBRARY_EXPORTS
#define RACINGLIBRARY_API __declspec(dllexport)
#else 
#define RACINGLIBRARY_API __declspec(dllimport)
#endif

int RACINGLIBRARY_API setDistance();

class RACINGLIBRARY_API Race {
public:
	void begin();
	void printMenuTable();
	void doRestart(Race& race);
};
