#include "BROOMSTICK.h"

BROOMSTICK::BROOMSTICK(int _speed, int _distanceReduction) : AIR(20, 0) {
	this->name = "Метла";
};

BROOMSTICK::BROOMSTICK() : AIR() {
	this->name = "Метла";
	this->speed = 20;
	this->distanceReduction = 1;
};

float BROOMSTICK::timeRace(float _distance) {
	float timeRace = 0;
	float move = _distance / speed;
	this->distanceReduction = (100 - (static_cast<int>(_distance / 1000)));
	timeRace = move * (distanceReduction / 100);
	return timeRace;
};