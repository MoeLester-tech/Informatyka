#include <iostream>

int main() {
    int punkty;

    std::cout << "Podaj wynik egzaminu (0-100): ";
    std::cin >> punkty;

    if (punkty < 0 || punkty > 100) {
        std::cout << "Bledne dane!" << std::endl;
    }
    else if (punkty <= 49) {
        std::cout << "Ocena: Niedostateczna" << std::endl;
    }
    else if (punkty <= 69) {
        std::cout << "Ocena: Dostateczna" << std::endl;
    }
    else if (punkty <= 84) {
        std::cout << "Ocena: Dobra" << std::endl;
    }
    else if (punkty <= 99) {
        std::cout << "Ocena: Bardzo dobra" << std::endl;
    }
    else {
        std::cout << "Ocena: Celujaca" << std::endl;
    }

    return 0;
}