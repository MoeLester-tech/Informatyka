#include <iostream>

int main() {
    double celsius;
    char opcja;

    std::cout << "Podaj temperature w C: ";
    std::cin >> celsius;

    std::cout << "Wybierz jednostke (K/F): ";
    std::cin >> opcja;

    switch (opcja) {
        case 'K':
        case 'k':
            std::cout << "Kelvin: " << celsius + 273.15 << std::endl;
            break;

        case 'F':
        case 'f':
            std::cout << "Fahrenheit: " << (celsius * 9 / 5) + 32 << std::endl;
            break;

        default:
            std::cout << "Blad: zla opcja!" << std::endl;
            break;
    }

    return 0;
}