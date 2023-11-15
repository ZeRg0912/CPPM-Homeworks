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
			std::cout << transportsForRace.back()->getName() << " ������� ��������." << std::endl;
			printRegistredTransports(transportsForRace);
		}
		std::cout << "����� ��� �������� � ���������� ����������. ����������: " << distance << std::endl;
		std::cout << "1. ������� - ���������" << std::endl;
		std::cout << "2. �������" << std::endl;
		std::cout << "3. �������" << std::endl;
		std::cout << "4. ������� - ���������" << std::endl;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> type;
		typeTransport = static_cast<groundTransport>(type);
		switch (typeTransport) {
		case groundTransport::boots:
			transportsForRace.push_back(new BOOTS());
			std::cout << "������� - ��������� ������� ����������������" << std::endl; // ������� �����
			break;
		case groundTransport::camel:
			transportsForRace.push_back(new CAMEL());
			std::cout << "������� ������� ���������������" << std::endl;
			break;
		case groundTransport::centaur:
			transportsForRace.push_back(new CENTAUR());
			std::cout << "������� ������� ���������������" << std::endl;
			break;
		case groundTransport::fastCamel:
			transportsForRace.push_back(new FAST_CAMEL());
			std::cout << "������� - ��������� ������� ���������������" << std::endl;
			break;
		}
	} while (type != 0);
	std::cout << "����������� ��������!" << std::endl;
	return transportsForRace;
}