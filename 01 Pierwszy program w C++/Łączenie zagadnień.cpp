#include <iostream>

int main() {
    int a, b;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    int suma = a + b;

    std::cout << "Suma: " << suma << std::endl;

    if (suma % 2 == 0) {
        std::cout << "Suma jest liczba parzysta." << std::endl;
    } else {
        std::cout << "Suma jest liczba nieparzysta." << std::endl;
    }

    return 0;
}