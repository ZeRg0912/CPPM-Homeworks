#pragma once
#include "../TRANSPORT.h"

class AIR : public TRANSPORT {
public:
	AIR();
protected:
	AIR(int _speed, int _distanceDeduction);
};