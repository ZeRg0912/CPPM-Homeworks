#include "RaceAirGround.h"

enum class allTransport {
	boots = 1, stick, camel, centaur, eagle, fastCamel, magicCarpet
};

void RaceAirGround::calculateRaceTime(std::vector<TRANSPORT*>& arr, int distance) {
	std::cout << "����� ��������: " << distance << " ��." << std::endl;
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
	std::cout << "����� ����������� ��������: " << std::endl;
	for (const auto& obj : arr) {
		std::cout << obj->getName() << " : " << obj->getDistanceTime() << " �����." << std::endl;
	}
}

void RaceAirGround::printRegistredTransports(std::vector<TRANSPORT*>& arr) {
	std::cout << "������������������ ���������: ";
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
			std::cout << "���������: " << transportsForRace.back()->getName() << " ������� ��������." << std::endl;
			printRegistredTransports(transportsForRace);
		}
		std::cout << "����� ��� �������� � ���������� ����������. ����������: " << distance << std::endl;
		std::cout << "1. ������� - ���������" << std::endl;
		std::cout << "2. �����" << std::endl;
		std::cout << "3. �������" << std::endl;
		std::cout << "4. �������" << std::endl;
		std::cout << "5. ����" << std::endl;
		std::cout << "6. ������� - ���������" << std::endl;
		std::cout << "7. ����� - �������" << std::endl;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
		std::cin >> type;
		typeTransport = static_cast<allTransport>(type);
		switch (typeTransport) {
		case allTransport::boots:
			transportsForRace.push_back(new BOOTS());
			std::cout << "������� - ��������� ������� ����������������" << std::endl; // ������� �����
			break;
		case allTransport::stick:
			transportsForRace.push_back(new BROOMSTICK());
			std::cout << "����� ������� ����������������" << std::endl;
			break;
		case allTransport::camel:
			transportsForRace.push_back(new CAMEL());
			std::cout << "������� ������� ���������������" << std::endl;
			break;
		case allTransport::centaur:
			transportsForRace.push_back(new CENTAUR());
			std::cout << "������� ������� ���������������" << std::endl;
			break;
		case allTransport::eagle:
			transportsForRace.push_back(new EAGLE());
			std::cout << "���� ������� ���������������" << std::endl;
			break;
		case allTransport::fastCamel:
			transportsForRace.push_back(new FAST_CAMEL());
			std::cout << "������� - ��������� ������� ���������������" << std::endl;
			break;
		case allTransport::magicCarpet:
			transportsForRace.push_back(new MAGIC_CARPET());
			std::cout << "����� - ������� ������� ���������������" << std::endl;
			break;
		}
	} while (type != 0);
	std::cout << "����������� ��������!" << std::endl;
	return transportsForRace;
}