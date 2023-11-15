#include "RaceAir.h"

enum class airTransport {
	stick = 1, eagle, magicCarpet
};

std::vector<TRANSPORT*> RaceAir::createTransports(std::vector<TRANSPORT*>& arr, int distance) {
	airTransport typeTransport;
	int type;
	std::vector<TRANSPORT*> transportsForRace;
	do {
		system("cls");
		if (transportsForRace.size()) {
			std::cout << transportsForRace.back()->getName() << " успешно добавлен." << std::endl;
			printRegistredTransports(transportsForRace);
		}
		std::cout << "Гонка для назеного и воздушного транспорта. Расстояние: " << distance << std::endl;
		std::cout << "1. Метла" << std::endl;
		std::cout << "2. Орел" << std::endl;
		std::cout << "3. Ковер - самолет" << std::endl;
		std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		std::cin >> type;
		typeTransport = static_cast<airTransport>(type);
		switch (typeTransport) {
		case airTransport::stick:
			transportsForRace.push_back(new BROOMSTICK());
			std::cout << "Метла успешно зарегестрирована" << std::endl;
			break;
		case airTransport::eagle:
			transportsForRace.push_back(new EAGLE());
			std::cout << "Орел успешно зарегестрирован" << std::endl;
			break;
		case airTransport::magicCarpet:
			transportsForRace.push_back(new MAGIC_CARPET());
			std::cout << "Ковер - самолет успешно зарегестрирован" << std::endl;
			break;
		}
	} while (type != 0);
	std::cout << "Регистрация окончена!" << std::endl;
	return transportsForRace;
}