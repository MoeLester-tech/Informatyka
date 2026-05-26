#include <iostream>

int main() {
    double waga, wzrost;

    std::cout << "Podaj wage (kg): ";
    std::cin >> waga;

    std::cout << "Podaj wzrost (m): ";
    std::cin >> wzrost;

    double bmi = waga / (wzrost * wzrost);

    std::cout << "Twoje BMI: " << bmi << std::endl;

    if (bmi < 18.5) {
        std::cout << "Niedowaga" << std::endl;
    }
    else if (bmi < 25) {
        std::cout << "W normie" << std::endl;
    }
    else if (bmi < 30) {
        std::cout << "Nadwaga" << std::endl;
    }
    else {
        std::cout << "Otylosc" << std::endl;
    }

    return 0;
}