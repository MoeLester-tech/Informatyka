#include <iostream>
using namespace std;

int suma(int a, int b) { return a + b; }
int roznica(int a, int b) { return a - b; }
int iloczyn(int a, int b) { return a * b; }

double iloraz(int a, int b) {
    if (b == 0) {
        cout << "Blad: dzielenie przez 0!" << endl;
        return 0;
    }
    return (double)a / b;
}

int main() {
    int wybor, a, b;

    do {
        cout << "\n1. Suma\n2. Roznica\n3. Iloczyn\n4. Iloraz\n0. Wyjscie\n";
        cout << "Wybor: ";
        cin >> wybor;

        if (wybor == 0) break;

        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        switch (wybor) {
            case 1: cout << "Wynik: " << suma(a,b) << endl; break;
            case 2: cout << "Wynik: " << roznica(a,b) << endl; break;
            case 3: cout << "Wynik: " << iloczyn(a,b) << endl; break;
            case 4: cout << "Wynik: " << iloraz(a,b) << endl; break;
            default: cout << "Zly wybor!" << endl;
        }

    } while (true);

    cout << "Koniec programu." << endl;
    return 0;
}