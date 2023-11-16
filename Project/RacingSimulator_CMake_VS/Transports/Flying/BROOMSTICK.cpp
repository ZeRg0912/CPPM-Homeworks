#include "BROOMSTICK.h"

BROOMSTICK::BROOMSTICK(int _speed, int _distanceReduction) : AIR(20, 0) {
	this->name = "Метла";
};

BROOMSTICK::BROOMSTICK() : AIR() {
	this->name = "Метла";
	this->speed = 20;
	this->distanceReduction = 1;
};

float BROOMSTICK::raceTime(float _distance) {
	float time = 0;
	float move = _distance / speed;
	this->distanceReduction = (100 - (static_cast<int>(_distance / 1000)));
	time = move * (distanceReduction / 100);
	this->distanceTime = time;
	return time;
};