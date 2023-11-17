#pragma once
#include <string>

class TRANSPORT {
protected:
	std::string name = "Транспорт";
	int speed = 1;
	int wayToRest = 0;
	int restTime = 0;
	int quantityOfRests = 0;
	float distanceReduction = 0;

	int distanceTime = 0;

public:
	std::string getName();
	int getSpeed();
	int getWayToRest();
	int getRestTime();
	int checkQuantityOfRests();
	int getDistanceReduction();
	int getDistanceTime();

	virtual int raceTime(float _distance);
};