#include <iostream>

int main() {
    int N;
    int i = 1;
    int suma = 0;

    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    while (i <= N) {
        suma += i;
        i++;
    }

    std::cout << "Suma liczb od 1 do " << N << " wynosi: " << suma << std::endl;

    return 0;
}