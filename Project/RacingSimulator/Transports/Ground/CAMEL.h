#pragma once
#include "GROUND.h"

class CAMEL : public GROUND {
public:
	CAMEL();
	float time(float _distance) override;
protected:
	CAMEL(int _speed, int _wayToRest, int _restTime, int _quantityOfRests);
};