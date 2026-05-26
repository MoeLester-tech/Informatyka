#include <iostream>

int main() {
    int N;
    int i = 1;
    int licznik = 0;

    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    do {
        if (i % 2 == 0) {
            licznik++;
        }
        i++;
    } while (i <= N);

    std::cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << licznik << std::endl;

    return 0;
}