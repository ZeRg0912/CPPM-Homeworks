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

float CAMEL::time(float _distance) {
	float timeRace = 0;
	float remains = 0;
	int rest = 0;
	int distanceRest = speed * wayToRest;
	int stops = _distance / distanceRest;
	if (_distance != stops * distanceRest) {
		remains = _distance - stops * distanceRest;
	}
	if (stops > 1) {
		rest = restTime + (stops - 2) * 8;
	}
	else if (stops == 1) {
		rest = restTime;
	}

	int move = stops * wayToRest;

	if (remains != 0) {
		float lastPush = remains / speed;
		timeRace = rest + move + lastPush;
	}
	else {
		timeRace = rest + move;
	}
	return timeRace;
};