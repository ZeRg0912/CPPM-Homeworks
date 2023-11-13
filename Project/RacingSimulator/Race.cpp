#include "Race.h"

void Race::calculateRaceTime(std::vector<TRANSPORT*>& arr, int distance) {
	std::cout << "Длина маршрута: " << distance << " км." << std::endl;
	for (int i = 0; i < arr.size(); i++) {
		arr[i]->raceTime(distance);
	}
}
void Race::raceTimeSort(std::vector<TRANSPORT*>& arr) {
	for (int i = 0; i < arr.size(); i++) {
		TRANSPORT* key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j]->getDistanceTime() > key->getDistanceTime()) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void Race::printResultTable(std::vector<TRANSPORT*>& arr) {
	std::cout << "Время прохождения маршрута: " << std::endl;
	for (const auto& obj : arr) {
		std::cout << obj->getName() << " : " << obj->getDistanceTime() << " часов." << std::endl;
	}
}

void Race::clearTransports(std::vector<TRANSPORT*>& arr) {
	for (auto obj : arr) {
		delete obj;
	}
	arr.clear();
}

void Race::race(int distance) {
	system("cls");

	std::vector<TRANSPORT*> transportsForRace;

	transportsForRace.push_back(new CAMEL());
	transportsForRace.push_back(new BROOMSTICK());
	transportsForRace.push_back(new CENTAUR());
	transportsForRace.push_back(new FAST_CAMEL());
	transportsForRace.push_back(new MAGIC_CARPET());
	transportsForRace.push_back(new EAGLE());
	transportsForRace.push_back(new BOOTS());

	calculateRaceTime(transportsForRace, distance);
	raceTimeSort(transportsForRace);
	printResultTable(transportsForRace);

	clearTransports(transportsForRace);
}