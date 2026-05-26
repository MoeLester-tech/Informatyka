#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Losuj(int *tab, int size, int a, int b) {
    for (int i = 0; i < size; i++) {
        tab[i] = a + rand() % (b - a + 1);
    }
}

bool Sprawdz(int *liczba, int *tab, int size) {
    for (int i = 0; i < size; i++) {
        if (*liczba == tab[i]) return true;
    }
    return false;
}

int main() {
    srand(time(NULL));

    int n, a, b;

    cout << "Ile liczb wylosowac: ";
    cin >> n;

    cout << "Poczatek przedzialu: ";
    cin >> a;

    cout << "Koniec przedzialu: ";
    cin >> b;

    int *tab = new int[n];

    Losuj(tab, n, a, b);

    cout << "Tablica: ";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << "\n";

    int liczba, proby = 0;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (Sprawdz(&liczba, tab, n))
            cout << "Zgadles!\n";
        else
            cout << "Nie zgadles\n";

    } while (!Sprawdz(&liczba, tab, n));

    cout << "Zgadles za " << proby << " razem.\n";

    delete[] tab;

    return 0;
}