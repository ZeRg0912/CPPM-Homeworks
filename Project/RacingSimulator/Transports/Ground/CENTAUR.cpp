#include "CENTAUR.h"

CENTAUR::CENTAUR(int _speed, int _wayToRest, int _restTime, int _quantityOfRests) : GROUND(15, 8, 2, 0) {
	this->name = "Кентавр";
};

CENTAUR::CENTAUR() : GROUND() {
	this->name = "Кентавр";
	this->speed = 15;
	this->wayToRest = 8;
	this->restTime = 2;
	this->quantityOfRests = 0;
};

float CENTAUR::raceTime(float _distance) {
	float time = 0;
	float rest = 0;
	int stops = _distance / wayToRest;
	do {
		rest += restTime;
		stops--;
	} while (stops != 0);
	float move = _distance / speed;
	time = rest + move;
	this->distanceTime = time;
	return time;
};