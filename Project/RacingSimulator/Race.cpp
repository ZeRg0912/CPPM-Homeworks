#include "Race.h"

enum class groundTransport {
	camel = 1, fastCamel, centaur, boots
};
enum class airTransport {
	magicCarpet = 1, eagle, stick
};
enum class allTransport {
	camel = 1, fastCamel, centaur, boots, magicCarpet, eagle, stick
};

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
	system("cls");
	std::cout << "Время прохождения маршрута: " << std::endl;
	for (const auto& obj : arr) {
		std::cout << obj->getName() << " : " << obj->getDistanceTime() << " часов." << std::endl;
	}
}

void Race::printRegistredTransports(std::vector<TRANSPORT*>& arr) {
	system("cls");
	std::cout << "Зарегестрированный транспорт: " << std::endl;
	for (const auto& obj : arr) {
		std::cout << obj->getName();
		if (arr.size() > 1) std::cout << ", ";
	}
	std::cout << std::endl;
}

void Race::clearTransports(std::vector<TRANSPORT*>& arr) {
	for (auto obj : arr) {
		delete obj;
	}
	arr.clear();
}

std::vector<TRANSPORT*> Race::createTransports(std::vector<TRANSPORT*>& arr) {
	allTransport typeTransport;
	int type;
	std::vector<TRANSPORT*> transportsForRace;
	do {
		system("cls");
		if (transportsForRace.size()) printRegistredTransports(transportsForRace);
		std::cout << "Варианты транспорта:" << std::endl;
		std::cout << "1 - Верблюд, 2 - Верблюд-быстроход, 3 - кентавр, 4 - ботинки - скороходы, 5 - ковер - самолет, 6 - орел, 7 - метла, 0 - конец регистрации" << std::endl;
		std::cout << "Введите номер транспорта который необходимо зарегестрировать: ";
		std::cin >> type;
		typeTransport = static_cast<allTransport>(type);
		switch (typeTransport) {
		case allTransport::camel:
			transportsForRace.push_back(new CAMEL());
			break;
		case allTransport::fastCamel:
			transportsForRace.push_back(new FAST_CAMEL());
			break;
		case allTransport::centaur:
			transportsForRace.push_back(new CENTAUR());
			break;
		case allTransport::boots:
			transportsForRace.push_back(new BOOTS());
			break;
		case allTransport::magicCarpet:
			transportsForRace.push_back(new MAGIC_CARPET());
			break;
		case allTransport::eagle:
			transportsForRace.push_back(new EAGLE());
			break;
		case allTransport::stick:
			transportsForRace.push_back(new BROOMSTICK());
			break;
		}
	} while (type != 0);	
	std::cout << "Регистрация окончена!" << std::endl;
	return transportsForRace;
}

void Race::race(int distance) {
	system("cls");

	std::vector<TRANSPORT*> transportsForRace = createTransports(transportsForRace);

	calculateRaceTime(transportsForRace, distance);
	raceTimeSort(transportsForRace);
	printResultTable(transportsForRace);

	clearTransports(transportsForRace);
}