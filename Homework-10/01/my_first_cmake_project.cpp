#include "my_first_cmake_project.h"

void input_name() {
	std::string name;
	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name << "!" << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");
		
	input_name();

	return 0;
}