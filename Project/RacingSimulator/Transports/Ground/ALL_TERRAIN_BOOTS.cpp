#include "ALL_TERRAIN_BOOTS.h"

BOOTS::BOOTS(int _speed, int _wayToRest, int _restTime, int _quantityOfRests) : GROUND(6, 60, 10, 2) {
	this->name = "�������-���������";
};

BOOTS::BOOTS() : GROUND() {
	this->name = "�������-���������";
	this->speed = 6;
	this->wayToRest = 60;
	this->restTime = 10;
	this->quantityOfRests = 2;
};