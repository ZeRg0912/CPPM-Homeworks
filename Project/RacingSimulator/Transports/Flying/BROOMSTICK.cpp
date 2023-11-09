#include "BROOMSTICK.h"

BROOMSTICK::BROOMSTICK(int _speed, int _distanceReduction) : AIR(20, 0) {
	this->name = "Метла";
};

BROOMSTICK::BROOMSTICK() : AIR() {
	this->name = "Метла";
	this->speed = 20;
	this->distanceReduction = 0;
};