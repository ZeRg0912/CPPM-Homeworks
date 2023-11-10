#include "CENTAUR.h"

CENTAUR::CENTAUR(int _speed, int _wayToRest, int _restTime, int _quantityOfRests) : GROUND(15, 8, 2, 0) {
	this->name = "�������";
};

CENTAUR::CENTAUR() : GROUND() {
	this->name = "�������";
	this->speed = 15;
	this->wayToRest = 8;
	this->restTime = 2;
	this->quantityOfRests = 0;
};

float CENTAUR::timeRace(float _distance) {
	float timeRace = 0;
	float rest = 0;
	int stops = _distance / wayToRest;
	do {
		rest += restTime;
		stops--;
	} while (stops != 0);
	float move = _distance / speed;
	timeRace = rest + move;
	return timeRace;
};