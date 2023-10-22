#include <iostream>
#include <string>

using namespace std;

struct Adress {
    string City = "Москва";
    string Street = "Арбат";
    int numHouse = 12;
    int numFlat = 8;
    int Index = 123456;
};

void change_Adress(Adress* adress, string City, string Street, int numHouse, int numFlat, int Index) {
    {   adress->City = City;
        adress->Street = Street;
        adress->numHouse = numHouse;
        adress->numFlat = numFlat;
        adress->Index = Index; }
}

void out_Adress(Adress* adress) {
    cout << "Город: " << adress->City << endl;
    cout << "Улица: " << adress->Street  << endl;
    cout << "Номер дома: " << adress->numHouse << endl;
    cout << "Номер квартиры: " << adress->numFlat << endl;
    cout << "Индекс: " << adress->Index << endl;
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    system("cls");

    Adress* AdrArray = new Adress[5];

    out_Adress(&AdrArray[0]);

    change_Adress(&AdrArray[1], "Санкт-Петербург", "Ленина", 59, 143, 953769);

    out_Adress(&AdrArray[1]);

    return 0;
}