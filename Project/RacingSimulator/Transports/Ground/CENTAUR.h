#pragma once
#include "GROUND.h"

class CENTAUR : public GROUND {
public:
	CENTAUR();
protected:
	CENTAUR(int _speed, int _wayToRest, int _restTime, int _quantityOfRests);
};