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

	string getOutputAdress() {
		return City + ", " + Street + ", " + to_string(numHouse) + ", " + to_string(numFlat) + "\n";
	}
private:
	int partition(Adress* array, int start, int end)
	{
		string ref = array[end].City;
		int startIndex = start;

		for (int i = start; i < end; i++)
		{
			if (array[i].City[0] <= ref[0])
			{
				swap(array[i], array[startIndex]);
				startIndex++;
			}
		}
		swap(array[startIndex], array[end]);
		return startIndex;
	}
public:
	void sortAdress(Adress* array, int start, int end)
	{
		if (start >= end) {
			return;
		}
		int pivot = partition(array, start, end);
		sortAdress(array, start, pivot - 1);
		sortAdress(array, pivot + 1, end);
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
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
		arrAdress->sortAdress(arrAdress, 0, numAdresses - 1);
		if (write.is_open()) {
			write << numAdresses << endl;
			for (int i = 0; i < numAdresses; i++) {
				write << arrAdress[i].getOutputAdress();
			}
		}
		else {
			cout << "Невозможно открыть файл для записи!\n";
		}
		write.close();
		delete[] arrAdress;
	}
	else {
		cout << "Невозможно открыть файл для чтения!\n";
	}
	read.close();
	return 0;
}