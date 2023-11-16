#include "CAMEL.h"

CAMEL::CAMEL(int _speed, int _wayToRest, int _restTime, int _quantityOfRests) : GROUND (10, 30, 5, 2) {
	this->name = "Верблюд";
};

CAMEL::CAMEL() : GROUND() {
	this->name = "Верблюд";
	this->speed = 10;
	this->wayToRest = 30;
	this->restTime = 5;
	this->quantityOfRests = 2;
};

float CAMEL::raceTime(float _distance) {
	float time = 0;
	float rest = 0;
	int stops = _distance / wayToRest;
	do {
		if (stops > 1) {
			rest += restTime + 3;
			stops--;
		}
		else if (stops == 1) {
			rest += restTime;
			stops--;
		}
	} while (stops != 0);
	float move = _distance / speed;
	time = rest + move;
	this->distanceTime = time;
	return time;
};