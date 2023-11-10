#pragma once
#include <string>

class TRANSPORT {
protected:
	std::string name = "���������";
	int speed = 1;
	int wayToRest = 0;
	int restTime = 0;
	int quantityOfRests = 0;
	float distanceReduction = 0;

	float distanceTime = 0;

public:
	std::string getName();
	int getSpeed();
	int getWayToRest();
	int getRestTime();
	int checkQuantityOfRests();
	int getDistanceReduction();

	virtual float timeRace(float _distance);
};