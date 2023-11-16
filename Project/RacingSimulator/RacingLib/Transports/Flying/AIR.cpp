#include "AIR.h"

AIR::AIR(int _speed, int _distanceReduction) {
	this->speed = _speed;
	this->distanceReduction = _distanceReduction;
}

AIR::AIR() {
	this->speed = 0;
	this->distanceReduction = 1;
}

float AIR::raceTime(float _distance) {
	return distanceTime = _distance / speed;
};