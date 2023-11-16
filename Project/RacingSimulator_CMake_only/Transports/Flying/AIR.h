#pragma once
#include "../TRANSPORT.h"

class AIR : public TRANSPORT {
public:
	AIR();
	int raceTime(float _distance) override;
protected:
	AIR(int _speed, int _distanceDeduction);
};