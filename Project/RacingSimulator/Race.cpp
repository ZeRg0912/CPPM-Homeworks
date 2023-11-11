#include "Race.h"

void insertionSort(std::vector<TRANSPORT*>& arr, int distance) {
	for (int i = 0; i < arr.size(); i++) {
		TRANSPORT* key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j]->timeRace(distance) > key->timeRace(distance)) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void RACE(int distance) {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	std::vector<TRANSPORT*> arr;
	CAMEL camel;
	FAST_CAMEL fastCamel;
	BOOTS boots;
	CENTAUR centaur;

	MAGIC_CARPET carpet;
	EAGLE eagle;
	BROOMSTICK stick;

	arr.push_back(&camel);
	arr.push_back(&boots);
	arr.push_back(&fastCamel);
	arr.push_back(&centaur);
	arr.push_back(&carpet);
	arr.push_back(&eagle);
	arr.push_back(&stick);

	insertionSort(arr, distance);
	
	std::cout << "Длина маршрута: " << distance << " км." << std::endl;
	std::cout << "Время прохождения маршрута: " << std::endl;
	for (const auto& obj : arr) {		
		std::cout << obj->getName() << " : " << obj->timeRace(distance) << " часов." << std::endl;
	}
}