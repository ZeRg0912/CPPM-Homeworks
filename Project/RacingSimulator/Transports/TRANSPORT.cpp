#include "TRANSPORT.h"

std::string TRANSPORT::getName() {
	return name;
}

int TRANSPORT::getSpeed() {
	return speed;
}

int TRANSPORT::getWayToRest() {
	return wayToRest;
}

int TRANSPORT::getRestTime() {
	return restTime;
}

int TRANSPORT::checkQuantityOfRests() {
	return quantityOfRests;
}

float TRANSPORT::time(float _distance) {
	return distanceTime = _distance / speed;
}