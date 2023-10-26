#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Adress {
private:
	string City;
	string Street;
	int numHouse;
	int numFlat;
public:
	Adress() {
		this->City = "No name";
		this->Street = "No name";
		this->numHouse = 1;
		this->numFlat = 1;
	}

	Adress(string City, string Street, int House, int Flat) {
		this->City = City;
		this->Street = Street;
		this->numHouse = House;
		this->numFlat = Flat;
	}

	void printAdress() {
		cout << "Город: " << City << ", Улица: " << Street << ", Дом: " << numHouse << ", Квартира: " << numFlat << endl;
	}

	string getAdressCity() {
		return this->City;
	}

	string getAdressStreet() {
		return this->Street;
	}

	int getAdressHouse() {
		return this->numHouse;
	}

	int getAdressFlat() {
		return this->numFlat;
	}

	string getOutputAdress() {
		return City + ", " + Street + ", " + to_string(numHouse) + ", " + to_string(numFlat) + "\n";
	}

};

int main()
{
	setlocale(LC_ALL, "Russian"); // задаём русский текст
	system("chcp 1251"); // настраиваем кодировку консоли
	system("cls");
	
	string str;
	int numAdresses = 0;
	string City, Street;
	int House, Flat;
	
	ifstream read("in.txt");
	ofstream write("out.txt");

	if (read.is_open()) {
		read >> numAdresses;
		Adress* arrAdress = new Adress[numAdresses];
		do {
			for (int i = 0; i < numAdresses; i++) {
				read >> City;
				read >> Street;
				read >> House;
				read >> Flat;
				arrAdress[i] = Adress(City, Street, House, Flat);
			}
		} while (!read.eof());		
		if (write.is_open()) {
			write << numAdresses << endl;
			for (int i = numAdresses - 1; i >= 0; i--) {
				//write << arrAdress[i].getAdressCity() << ", " << arrAdress[i].getAdressStreet() << ", " << arrAdress[i].getAdressHouse() << ", " << arrAdress[i].getAdressFlat() << endl;
				write << arrAdress[i].getOutputAdress();
			}
		}
		else {
			cout << "Невозможно открыть файл для записи!\n";
		}
		delete[] arrAdress;
	}
	else {
		cout << "Невозможно открыть файл для чтения!\n";
	}
	return 0;
}