#include "MAGIC_CARPET.h"

MAGIC_CARPET::MAGIC_CARPET(int _speed, int _distanceReduction) : AIR(10, 0) {
	this->name = "Ковёр-самолёт";
};

MAGIC_CARPET::MAGIC_CARPET() : AIR() {
	this->name = "Ковёр-самолёт";
	this->speed = 10;
	this->distanceReduction = 1;
};

int MAGIC_CARPET::raceTime(float _distance) {
	float time = 0;
	float move = _distance / speed;
	if (_distance < 1000) {
		time = move;
	}
	else if (_distance >= 1000 && _distance < 5000) {
		this->distanceReduction = 0.97;
		time = move * distanceReduction;
	}
	else if (_distance >= 5000 && _distance < 10000) {
		this->distanceReduction = 0.9;
		time = move * distanceReduction;
	}
	else if (_distance >= 10000) {
		this->distanceReduction = 0.95;
		time = move * distanceReduction;
	}
	this->distanceTime = time;
	return time;
};