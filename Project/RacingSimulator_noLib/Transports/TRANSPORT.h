#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class TRANSPORT {
protected:
	std::string name = "Транспорт";
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
	float getDistanceTime();

	virtual float raceTime(float _distance);
};