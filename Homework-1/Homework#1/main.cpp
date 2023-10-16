#include <iostream>
#include <fstream>
#include <string>

int main() {
	int size1, size2;

	std::string str;
	std::ifstream read("in.txt");
	std::ofstream write("out.txt");
	if (read.is_open()) {
		read >> str;
		size1 = std::stoi(str);
		std::cout << size1 << std::endl;
		int* inArray1 = new int[size1];
		for (int i = 0; i < size1; i++) {
			read >> str;
			inArray1[i] = std::stoi(str);
			std::cout << inArray1[i] << " ";
		}
		std::cout << std::endl;
		read >> str;
		size2 = std::stoi(str);
		std::cout << size2 << std::endl;
		int* inArray2 = new int[size2];
		for (int i = 0; i < size2; i++) {
			read >> str;
			inArray2[i] = std::stoi(str);
			std::cout << inArray2[i] << " ";
		}
		std::cout << "\n\n";

		if (write.is_open()) {
			write << size2 << std::endl;
			std::cout << size2 << std::endl;
			for (int i = 0; i < size2; i++) {
				if (i == 0) {
					write << inArray2[size2 - 1] << " ";
					std::cout << inArray2[size2 - 1] << " ";
				}
				else {
					write << inArray2[i - 1] << " ";
					std::cout << inArray2[i - 1] << " ";
				}
			}
			std::cout << std::endl;
			write << "\n" << size1 << std::endl;
			std::cout << size1 << std::endl;
			for (int i = 0; i < size1; i++) {
				if (i == size1 - 1) {
					write << inArray1[0] << " ";
					std::cout << inArray1[0] << " ";
				}
				else {
					write << inArray1[i + 1] << " ";
					std::cout << inArray1[i + 1] << " ";
				}
			}
			write << "\n";
			std::cout << std::endl;
		}
		else {
			std::cout << "OUT file can't open!";
		}		
		write.close();
		delete[] inArray1;
		delete[] inArray2;
	}
	else {
		std::cout << "File can't open!" << std::endl;
	}
	read.close();

	
	return 0;
}