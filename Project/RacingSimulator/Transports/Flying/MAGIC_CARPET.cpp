#include "MAGIC_CARPET.h"

MAGIC_CARPET::MAGIC_CARPET(int _speed, int _distanceReduction) : AIR(10, 0) {
	this->name = "����-������";
};

MAGIC_CARPET::MAGIC_CARPET() : AIR() {
	this->name = "����-������";
	this->speed = 10;
	this->distanceReduction = 1;
};

float MAGIC_CARPET::timeRace(float _distance) {
	float timeRace = 0;
	float move = _distance / speed;
	if (_distance < 1000) {
		timeRace = move;
	}
	else if (_distance >= 1000 && _distance < 5000) {
		this->distanceReduction = 0.97;
		timeRace = move * distanceReduction;
	}
	else if (_distance >= 5000 && _distance < 10000) {
		this->distanceReduction = 0.9;
		timeRace = move * distanceReduction;
	}
	else if (_distance >= 10000) {
		this->distanceReduction = 0.95;
		timeRace = move * distanceReduction;
	}
	return timeRace;
};