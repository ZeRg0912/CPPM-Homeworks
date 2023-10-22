#include <iostream>
#include <string>

using namespace std;

struct bank_details {
    long AccountNumber;
    string Name;
    long Balance;
 };

void changeBankBalance(bank_details* person, int newBalance) {
    person->Balance = newBalance;
}

void out_bank_details(bank_details* person) {
    /*cout << "Город: " << person->AccountNumber << endl;
    cout << "Индекс: " << person->Name << endl;
    cout << "Индекс: " << person->Balance << endl;
    cout << endl;*/
    cout << "Ваш счет: " << person->AccountNumber << ", " << person->Name << ", " << person->Balance << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    system("cls");

    bank_details person;
    int newBalance;

    cout << "Введите номер счета: ";
    cin >> person.AccountNumber;
    cout << "Имя владельца: ";
    cin >> person.Name;
    cout << "Введите баланс: ";
    cin >> person.Balance;
    cout << "Введите новый баланс: ";
    cin >> newBalance;

    changeBankBalance(&person, newBalance);

    //cout << "Ваш счет: " << person.Name << ", " << person.AccountNumber << ", " << person.Balance << endl;
    out_bank_details(&person);
    return 0;
}