#include <iostream>
using namespace std;

int main() {
    char tekst[100];
    char szukany;
    int pozycje[100];
    int licznik = 0;

    cout << "Podaj ciag znakow: ";
    cin.getline(tekst, 100);

    cout << "Podaj znak do zliczenia: ";
    cin >> szukany;

    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == szukany) {
            pozycje[licznik] = i;
            licznik++;
        }
    }

    cout << "Liczba wystapien znaku '" << szukany << "': " << licznik << endl;
    cout << "Pozycje wystapien: ";

    for (int i = 0; i < licznik; i++) {
        cout << pozycje[i] << " ";
    }

    cout << endl;

    return 0;
}