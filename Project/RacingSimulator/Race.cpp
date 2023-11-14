#include "Race.h"

enum class groundTransport {
	boots = 1, camel, centaur, fastCamel
};
enum class airTransport {
	stick = 1, eagle, magicCarpet
};
enum class allTransport {
	boots = 1, stick, camel, centaur, eagle, fastCamel, magicCarpet
};

void Race::calculateRaceTime(std::vector<TRANSPORT*>& arr, int distance) {
	std::cout << "����� ��������: " << distance << " ��." << std::endl;
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
	std::cout << "����� ����������� ��������: " << std::endl;
	for (const auto& obj : arr) {
		std::cout << obj->getName() << " : " << obj->getDistanceTime() << " �����." << std::endl;
	}
}

void Race::printRegistredTransports(std::vector<TRANSPORT*>& arr) {
	system("cls");
	std::cout << "������������������ ���������: " << std::endl;
	int lastIndex = 0;
	for (const auto& obj : arr) {
		std::cout << obj->getName();
		if (lastIndex != arr.size() - 1) std::cout << ", ";		
		lastIndex++;
	}
	std::cout << std::endl;
}

void Race::clearTransports(std::vector<TRANSPORT*>& arr) {
	for (auto obj : arr) {
		delete obj;
	}
	arr.clear();
}

std::vector<TRANSPORT*> Race::createTransports(std::vector<TRANSPORT*>& arr, int distance) {
	allTransport typeTransport;
	int type;
	std::vector<TRANSPORT*> transportsForRace;
	do {
		if (transportsForRace.size()) printRegistredTransports(transportsForRace);
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
			std::cout <<"����� ������� ����������������" << std::endl;
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
			system("cls");
		}
	} while (type != 0);	
	std::cout << "����������� ��������!" << std::endl;
	return transportsForRace;
}

void Race::raceBegin(int distance) {
	system("cls");

	std::vector<TRANSPORT*> transportsForRace = createTransports(transportsForRace, distance);

	calculateRaceTime(transportsForRace, distance);
	raceTimeSort(transportsForRace);
	printResultTable(transportsForRace);

	clearTransports(transportsForRace);
}