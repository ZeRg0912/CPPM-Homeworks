#pragma once
#include "../TRANSPORT.h"

class GROUND : public TRANSPORT {
public:
	GROUND();
	float timeRace(float _distance) override;
protected:
	GROUND(int _speed, int _wayToRest, int _restTime, int _quantityOfRests);
};