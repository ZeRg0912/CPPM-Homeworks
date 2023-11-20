#include <iostream>
#include "Leaver.h"

int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	Leaver people;
	std::cout << people.leave(name) << std::endl;

	return 0;
}