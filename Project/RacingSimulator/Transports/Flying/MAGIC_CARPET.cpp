#include "MAGIC_CARPET.h"

MAGIC_CARPET::MAGIC_CARPET(int _speed, int _distanceReduction) : AIR(10, 0) {
	this->name = "����-������";
};

MAGIC_CARPET::MAGIC_CARPET() : AIR() {
	this->name = "����-������";
	this->speed = 10;
	this->distanceReduction = 0;
};