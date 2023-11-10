#pragma once
#include "AIR.h"

class EAGLE : public AIR {
public:
	EAGLE();
	float timeRace(float _distance) override;
protected:
	EAGLE(int _speed, int _distanceReduction);
};