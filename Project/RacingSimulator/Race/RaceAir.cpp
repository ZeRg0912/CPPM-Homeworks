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
			std::cout << transportsForRace.back()->getName() << " ������� ��������." << std::endl;
			printRegistredTransports(transportsForRace);
		}
		std::cout << "����� ��� �������� � ���������� ����������. ����������: " << distance << std::endl;
		std::cout << "1. �����" << std::endl;
		std::cout << "2. ����" << std::endl;
		std::cout << "3. ����� - �������" << std::endl;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> type;
		typeTransport = static_cast<airTransport>(type);
		switch (typeTransport) {
		case airTransport::stick:
			transportsForRace.push_back(new BROOMSTICK());
			std::cout << "����� ������� ����������������" << std::endl;
			break;
		case airTransport::eagle:
			transportsForRace.push_back(new EAGLE());
			std::cout << "���� ������� ���������������" << std::endl;
			break;
		case airTransport::magicCarpet:
			transportsForRace.push_back(new MAGIC_CARPET());
			std::cout << "����� - ������� ������� ���������������" << std::endl;
			break;
		}
	} while (type != 0);
	std::cout << "����������� ��������!" << std::endl;
	return transportsForRace;
}