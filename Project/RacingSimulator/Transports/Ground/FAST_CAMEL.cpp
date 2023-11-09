#include "FAST_CAMEL.h"

FAST_CAMEL::FAST_CAMEL(int _speed, int _wayToRest, int _restTime, int _quantityOfRests) : GROUND(40, 10, 5, 3) {
	this->name = "�������";
};

FAST_CAMEL::FAST_CAMEL() : GROUND() {
	this->name = "�������";
	this->speed = 40;
	this->wayToRest = 10;
	this->restTime = 5;
	this->quantityOfRests = 3;
};