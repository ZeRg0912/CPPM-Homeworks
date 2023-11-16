#include "ALL_TERRAIN_BOOTS.h"

BOOTS::BOOTS(int _speed, int _wayToRest, int _restTime, int _quantityOfRests) : GROUND(6, 60, 10, 2) {
	this->name = "Ботинки-вездеходы";
};

BOOTS::BOOTS() : GROUND() {
	this->name = "Ботинки-вездеходы";
	this->speed = 6;
	this->wayToRest = 60;
	this->restTime = 10;
	this->quantityOfRests = 2;
};

int BOOTS::raceTime(float _distance) {
	float time = 0;
	float rest = 0;
	int stops = _distance / wayToRest;
	do {
		if (stops > 1) {
			rest += restTime - 5;
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