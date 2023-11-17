#pragma once
#include "AIR.h"

class BROOMSTICK : public AIR {
public:
	BROOMSTICK();
	float raceTime(float _distance) override;
protected:
	BROOMSTICK(int _speed, int _distanceReduction);
};