#include <iostream>

int main() {
    int a, b;
    char znak;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    std::cout << "Podaj znak dzialania (+, -, *, /): ";
    std::cin >> znak;

    switch (znak) {
        case '+':
            std::cout << "Wynik: " << a + b << std::endl;
            break;

        case '-':
            std::cout << "Wynik: " << a - b << std::endl;
            break;

        case '*':
            std::cout << "Wynik: " << a * b << std::endl;
            break;

        case '/':
            if (b != 0)
                std::cout << "Wynik: " << (double)a / b << std::endl;
            else
                std::cout << "Blad: dzielenie przez 0!" << std::endl;
            break;

        default:
            std::cout << "Blad: nieznany znak!" << std::endl;
            break;
    }

    return 0;
}