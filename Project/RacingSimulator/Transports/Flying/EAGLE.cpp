#include "EAGLE.h"

EAGLE::EAGLE(int _speed, int _distanceReduction) : AIR(8, 6) {
	this->name = "���";
};

EAGLE::EAGLE() : AIR() {
	this->name = "���";
	this->speed = 8;
	this->distanceReduction = 6;
};