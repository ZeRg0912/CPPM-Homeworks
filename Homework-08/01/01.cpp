#include <iostream>

class forbiddenLengthException : public std::exception {
public:
    const char* what() const override { return "Вы ввели слово запретной длины!"; }
};

int stringlength(std::string str, int forbiddenLength) {
    if (str.length() == forbiddenLength) throw forbiddenLengthException();
    return str.length();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    int forbiddenLength = 0;
    std::string inConsoleString;
    
    do {
        std::cout << "Введите запретную длину: ";
        std::cin >> forbiddenLength;
        if (std::cin.fail()) {
            std::cout << "Вы ввели не число, попробуйте снова!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else { break; }
    } while (!isdigit(forbiddenLength));
    

    do {
        do {
            std::cout << "Введите слово: ";
            std::cin >> inConsoleString;
            if (isdigit(inConsoleString[0])) { 
                std::cout << "Вы ввели не слово, попробуй снова!" << std::endl; 
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else { 
                break; 
            }
        } while (isdigit(inConsoleString[0]));

        try {
            std::cout << "Длина слова \"" << inConsoleString << "\" равна " << stringlength(inConsoleString, forbiddenLength) << std::endl;
        }
        catch (const forbiddenLengthException& error) { std::cout << error.what() << std::endl; }
        catch (...) { std::cout << "Неизвестная ошибка\n"; }
    } while (inConsoleString.length() != forbiddenLength);
    std::cout << "До свидания!" << std::endl;
    return 0;
}
