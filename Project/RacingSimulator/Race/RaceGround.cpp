#include "RaceGround.h"

enum class groundTransport {
	boots = 1, camel, centaur, fastCamel
};

void RaceGround::printRegisterTableMenu(int distance) {
	std::cout << "����� ��� �������� � ���������� ����������. ����������: " << distance << std::endl;
	std::cout << "1. ������� - ���������" << std::endl;
	std::cout << "2. �������" << std::endl;
	std::cout << "3. �������" << std::endl;
	std::cout << "4. ������� - ���������" << std::endl;
	std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
}

std::vector<TRANSPORT*> RaceGround::createTransports(std::vector<TRANSPORT*>& arr, int distance) {
	groundTransport typeTransport;
	int type;
	std::vector<TRANSPORT*> transportsForRace;
	do {
		do {
			printLastRegistredTransport(transportsForRace);
			printRegisterTableMenu(distance);
			std::cin >> type;
			system("cls");
			if (std::cin.fail()) {
				std::cout << "������� �����!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else if (type < 0 || type > 4) {
				std::cout << "������� ����� �� ������!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else { break; }
		} while (!isdigit(type));
		typeTransport = static_cast<groundTransport>(type);
		system("cls");
		if (transportsForRace.size() < 2 && type == 0) std::cout << "������ ���� ���������������� ���� �� 2 ����������" << std::endl;
		switch (typeTransport) {
		case groundTransport::boots:
			registerTransport(transportsForRace, new BOOTS());
			break;
		case groundTransport::camel:
			registerTransport(transportsForRace, new CAMEL());
			break;
		case groundTransport::centaur:
			registerTransport(transportsForRace, new CENTAUR());
			break;
		case groundTransport::fastCamel:
			registerTransport(transportsForRace, new FAST_CAMEL());
			break;
		}
	} while (type != 0 || transportsForRace.size() < 2);
	std::cout << "����������� ��������!" << std::endl;
	return transportsForRace;
}