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