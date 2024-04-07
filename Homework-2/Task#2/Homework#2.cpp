#include <iostream>
#include <string>

using namespace std;

struct bankDetails {
    long AccountNumber;
    string Name;
    long Balance;
 };

void changeBankBalance(bankDetails* person, int newBalance) {
    person->Balance = newBalance;
}

void outBankDetails(bankDetails* person) {
    cout << "Ваш счет: " << person->AccountNumber << ", " << person->Name << ", " << person->Balance << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли
    system("cls");

    bankDetails person;
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
    outBankDetails(&person);
    return 0;
}