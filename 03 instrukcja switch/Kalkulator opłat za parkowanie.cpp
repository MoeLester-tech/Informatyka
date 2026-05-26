#include <iostream>

int main() {
    int godziny;
    char typ;

    std::cout << "Podaj liczbe godzin parkowania: ";
    std::cin >> godziny;

    std::cout << "Podaj typ pojazdu (S, M, A): ";
    std::cin >> typ;

    switch (typ) {
        case 'S':
        case 's':
            std::cout << "Oplata: " << godziny * 5 << " zl" << std::endl;
            break;

        case 'M':
        case 'm':
            std::cout << "Oplata: " << godziny * 3 << " zl" << std::endl;
            break;

        case 'A':
        case 'a':
            std::cout << "Oplata: " << godziny * 10 << " zl" << std::endl;
            break;

        default:
            std::cout << "Blad: nieznany pojazd!" << std::endl;
            break;
    }

    return 0;
}