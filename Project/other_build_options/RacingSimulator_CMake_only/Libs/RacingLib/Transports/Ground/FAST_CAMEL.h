#pragma once
#include "GROUND.h"

class FAST_CAMEL : public GROUND {
public:
	FAST_CAMEL();
	float raceTime(float _distance) override;
protected:
	FAST_CAMEL(int _speed, int _wayToRest, int _restTime, int _quantityOfRests);
};