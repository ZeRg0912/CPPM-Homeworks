#pragma once
#include <string>

class TRANSPORT {
protected:
	std::string name = "Транспорт";
	int speed = 0;
	int wayToRest = 0;
	int restTime = 0;
	int quantityOfRests = 0;
	int distanceReduction = 0;

public:
	std::string getName();
	int getSpeed();
	int getWayToRest();
	int getRestTime();
	int checkQuantityOfRests();
};