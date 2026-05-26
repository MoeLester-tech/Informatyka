#include <iostream>

int main() {
    int N;
    int i = 2;

    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    std::cout << "Liczby parzyste od 2 do " << N << ":" << std::endl;

    while (i <= N) {
        std::cout << i << std::endl;
        i += 2;
    }

    return 0;
}