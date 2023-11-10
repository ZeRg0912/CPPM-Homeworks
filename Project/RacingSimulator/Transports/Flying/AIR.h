#pragma once
#include "../TRANSPORT.h"

class AIR : public TRANSPORT {
public:
	AIR();
	float timeRace(float _distance) override;
protected:
	AIR(int _speed, int _distanceDeduction);
};