#include "EAGLE.h"

EAGLE::EAGLE(int _speed, int _distanceReduction) : AIR(8, 6) {
	this->name = "Îð¸ë";
};

EAGLE::EAGLE() : AIR() {
	this->name = "Îð¸ë";
	this->speed = 8;
	this->distanceReduction = 0.94;
};

float EAGLE::timeRace(float _distance) {
	float timeRace = 0;
	float move = _distance / speed;
	timeRace = move * distanceReduction;
	return timeRace;
};