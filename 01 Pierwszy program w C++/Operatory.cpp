#include <iostream>

int main() {
    int a, b;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    std::cout << "Suma: " << a + b << std::endl;
    std::cout << "Roznica: " << a - b << std::endl;
    std::cout << "Iloczyn: " << a * b << std::endl;

    if (b != 0) {
        std::cout << "Iloraz: " << a / b << std::endl;
        std::cout << "Reszta: " << a % b << std::endl;
    } else {
        std::cout << "Nie mozna dzielic przez 0!" << std::endl;
    }

    return 0;
}