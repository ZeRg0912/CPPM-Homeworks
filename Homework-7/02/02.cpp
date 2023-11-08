#include <iostream>

#define SUB(a, b) ((a) - (b))

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	int a = 6;
	int b = 5;
	int c = 2;

#ifndef SUB 
#error SUB не определен
#else
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
#endif

	return 0;
}