#include <iostream>

int main() {
    int liczba;

    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

    if (liczba % 2 == 0) {
        std::cout << "Liczba jest parzysta." << std::endl;
    }
    else {
        std::cout << "Liczba jest nieparzysta." << std::endl;
    }

    if (liczba % 3 == 0) {
        std::cout << "Liczba jest podzielna przez 3." << std::endl;
    }
    else {
        std::cout << "Liczba nie jest podzielna przez 3." << std::endl;
    }

    return 0;
}