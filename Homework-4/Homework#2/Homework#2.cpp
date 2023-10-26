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

	string getOutputAdress() {
		return City + ", " + Street + ", " + to_string(numHouse) + ", " + to_string(numFlat) + "\n";
	}

	int partition(Adress* array, int start, int end)
	{
		// Выбираем крайний правый элемент в качестве опорного элемента массива
		string ref = array[end].City;

		// элементы, меньшие точки поворота, будут перемещены влево от `pIndex`
		// элементы больше, чем точка поворота, будут сдвинуты вправо от `pIndex`
		// равные элементы могут идти в любом направлении
		int startIndex = start;

		// каждый раз, когда мы находим элемент, меньший или равный опорному, `pIndex`
		// увеличивается, и этот элемент будет помещен перед опорной точкой.
		for (int i = start; i < end; i++)
		{
			if (array[i].City[0] <= ref[0])
			{
				swap(array[i], array[startIndex]);
				startIndex++;
			}
		}

		// поменять местами start с end
		swap(array[startIndex], array[end]);

		// вернуть индекс опорного элемента
		return startIndex;
	}

	// Процедура быстрой сортировки
	void sortAdress(Adress* array, int start, int end)
	{
		// базовое условие
		if (start >= end) {
			return;
		}

		// переставить элементы по оси
		int pivot = partition(array, start, end);

		// повторяем подмассив, содержащий элементы, меньшие опорной точки
		sortAdress(array, start, pivot - 1);

		// повторяем подмассив, содержащий элементы, превышающие точку опоры
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