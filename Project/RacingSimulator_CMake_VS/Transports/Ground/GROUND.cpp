#include "GROUND.h"

GROUND::GROUND(int _speed, int _wayToRest, int _restTime, int _quantityOfRests){
	this->speed = _speed;
	this->wayToRest = _wayToRest;
	this->restTime = _restTime;
	this->quantityOfRests = _quantityOfRests;
}

GROUND::GROUND() {
	this->speed = 1;
	this->wayToRest = 0;
	this->restTime = 0;
	this->quantityOfRests = 0;
}

float GROUND::raceTime(float _distance) {
	return distanceTime = _distance / speed;
};