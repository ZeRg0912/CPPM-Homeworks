#include "FAST_CAMEL.h"

FAST_CAMEL::FAST_CAMEL(int _speed, int _wayToRest, int _restTime, int _quantityOfRests) : GROUND(40, 10, 5, 3) {
	this->name = "Верблюд-быстроход";
};

FAST_CAMEL::FAST_CAMEL() : GROUND() {
	this->name = "Верблюд-быстроход";
	this->speed = 40;
	this->wayToRest = 10;
	this->restTime = 5;
	this->quantityOfRests = 3;
};

float FAST_CAMEL::timeRace(float _distance) {
	float timeRace = 0;
	float rest = 0;
	int stops = _distance / wayToRest;
	do {
		if (stops > 2) {
			rest += restTime + 3;
			stops--;
		}
		else if (stops == 2) {
			rest += restTime + 1.5;
			stops--;
		}
		else if (stops == 1) {
			rest += restTime;
			stops--;
		}
	} while (stops != 0);
	float move = _distance / speed;
	timeRace = rest + move;
	return timeRace;
};