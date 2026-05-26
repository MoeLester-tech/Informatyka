#include <iostream>
#include <string>

int main() {
    std::string imie;
    int wiek;

    std::cout << "Podaj swoje imie: ";
    std::cin >> imie;

    std::cout << "Podaj swoj wiek: ";
    std::cin >> wiek;

    std::cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << std::endl;

    return 0;
}