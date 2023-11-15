#include "RaceGround.h"

enum class groundTransport {
	boots = 1, camel, centaur, fastCamel
};


std::vector<TRANSPORT*> RaceGround::createTransports(std::vector<TRANSPORT*>& arr, int distance) {
	groundTransport typeTransport;
	int type;
	std::vector<TRANSPORT*> transportsForRace;
	do {
		system("cls");
		if (transportsForRace.size()) {
			std::cout << transportsForRace.back()->getName() << " успешно добавлен." << std::endl;
			printRegistredTransports(transportsForRace);
		}
		std::cout << "Гонка для назеного и воздушного транспорта. Расстояние: " << distance << std::endl;
		std::cout << "1. Ботинки - вездеходы" << std::endl;
		std::cout << "2. Верблюд" << std::endl;
		std::cout << "3. Кентавр" << std::endl;
		std::cout << "4. Верблюд - быстроход" << std::endl;
		std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
		std::cin >> type;
		typeTransport = static_cast<groundTransport>(type);
		switch (typeTransport) {
		case groundTransport::boots:
			transportsForRace.push_back(new BOOTS());
			std::cout << "Ботинки - вездеходы успешно зарегестрированы" << std::endl; // Сделать вывод
			break;
		case groundTransport::camel:
			transportsForRace.push_back(new CAMEL());
			std::cout << "Верблюд успешно зарегестрирован" << std::endl;
			break;
		case groundTransport::centaur:
			transportsForRace.push_back(new CENTAUR());
			std::cout << "Кентавр успешно зарегестрирован" << std::endl;
			break;
		case groundTransport::fastCamel:
			transportsForRace.push_back(new FAST_CAMEL());
			std::cout << "Верблюд - быстроход успешно зарегестрирован" << std::endl;
			break;
		}
	} while (type != 0);
	std::cout << "Регистрация окончена!" << std::endl;
	return transportsForRace;
}