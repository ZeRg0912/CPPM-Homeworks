#include "RaceAirGround.h"

enum class allTransport {
	boots = 1, stick, camel, centaur, eagle, fastCamel, magicCarpet
};

void RaceAirGround::calculateRaceTime(std::vector<TRANSPORT*>& arr, int distance) {
	std::cout << "Длина маршрута: " << distance << " км." << std::endl;
	for (int i = 0; i < arr.size(); i++) {
		arr[i]->raceTime(distance);
	}
}

void RaceAirGround::raceTimeSort(std::vector<TRANSPORT*>& arr) {
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

void RaceAirGround::printResultTable(std::vector<TRANSPORT*>& arr) {
	system("cls");
	std::cout << "Время прохождения маршрута: " << std::endl;
	for (const auto& obj : arr) {
		std::cout << obj->getName() << " : " << obj->getDistanceTime() << " часов." << std::endl;
	}
}

void RaceAirGround::printRegistredTransports(std::vector<TRANSPORT*>& arr) {
	std::cout << "Зарегестрированный транспорт: ";
	int lastIndex = 0;
	for (const auto& obj : arr) {
		std::cout << obj->getName();
		if (lastIndex != arr.size() - 1) std::cout << ", ";		
		lastIndex++;
	}
	std::cout << std::endl;
}

void RaceAirGround::clearTransports(std::vector<TRANSPORT*>& arr) {
	for (auto obj : arr) {
		delete obj;
	}
	arr.clear();
}

void RaceAirGround::raceBegin(int distance) {
	system("cls");

	std::vector<TRANSPORT*> transportsForRace = createTransports(transportsForRace, distance);

	calculateRaceTime(transportsForRace, distance);
	raceTimeSort(transportsForRace);
	printResultTable(transportsForRace);

	clearTransports(transportsForRace);
}

std::vector<TRANSPORT*> RaceAirGround::createTransports(std::vector<TRANSPORT*>& arr, int distance) {
	allTransport typeTransport;
	int type;
	std::vector<TRANSPORT*> transportsForRace;
	do {
		system("cls");
		if (transportsForRace.size()) {
			std::cout << "Транспорт: " << transportsForRace.back()->getName() << " успешно добавлен." << std::endl;
			printRegistredTransports(transportsForRace);
		}
		std::cout << "Гонка для назеного и воздушного транспорта. Расстояние: " << distance << std::endl;
		std::cout << "1. Ботинки - вездеходы" << std::endl;
		std::cout << "2. Метла" << std::endl;
		std::cout << "3. Верблюд" << std::endl;
		std::cout << "4. Кентавр" << std::endl;
		std::cout << "5. Орел" << std::endl;
		std::cout << "6. Верблюд - быстроход" << std::endl;
		std::cout << "7. Ковер - самолет" << std::endl;
		std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		std::cin >> type;
		typeTransport = static_cast<allTransport>(type);
		switch (typeTransport) {
		case allTransport::boots:
			transportsForRace.push_back(new BOOTS());
			std::cout << "Ботинки - вездеходы успешно зарегестрированы" << std::endl; // Сделать вывод
			break;
		case allTransport::stick:
			transportsForRace.push_back(new BROOMSTICK());
			std::cout << "Метла успешно зарегестрирована" << std::endl;
			break;
		case allTransport::camel:
			transportsForRace.push_back(new CAMEL());
			std::cout << "Верблюд успешно зарегестрирован" << std::endl;
			break;
		case allTransport::centaur:
			transportsForRace.push_back(new CENTAUR());
			std::cout << "Кентавр успешно зарегестрирован" << std::endl;
			break;
		case allTransport::eagle:
			transportsForRace.push_back(new EAGLE());
			std::cout << "Орел успешно зарегестрирован" << std::endl;
			break;
		case allTransport::fastCamel:
			transportsForRace.push_back(new FAST_CAMEL());
			std::cout << "Верблюд - быстроход успешно зарегестрирован" << std::endl;
			break;
		case allTransport::magicCarpet:
			transportsForRace.push_back(new MAGIC_CARPET());
			std::cout << "Ковер - самолет успешно зарегестрирован" << std::endl;
			break;
		}
	} while (type != 0);
	std::cout << "Регистрация окончена!" << std::endl;
	return transportsForRace;
}