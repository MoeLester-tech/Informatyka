#include <iostream>

int main() {
    int liczba;
    char kontynuuj;

    do {
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;

        std::cout << "Wprowadziles liczbe: " << liczba << std::endl;

        std::cout << "Czy chcesz kontynuowac? (t/n): ";
        std::cin >> kontynuuj;

    } while (kontynuuj == 't');

    std::cout << "Dziekuje za wprowadzenie liczb!" << std::endl;

    return 0;
}