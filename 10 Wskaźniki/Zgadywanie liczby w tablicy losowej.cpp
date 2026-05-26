#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int *tab, int size) {
    for (int i = 0; i < size; i++) {
        tab[i] = rand() % 51;
    }
}

bool SprawdzLiczbe(int *liczba, int *tab, int size) {
    for (int i = 0; i < size; i++) {
        if (*liczba == tab[i]) return true;
    }
    return false;
}

int main() {
    srand(time(NULL));

    int tab[10];
    int liczba;
    int proby = 0;

    LosujTablice(tab, 10);

    cout << "Tablica: ";
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << " ";
    }
    cout << "\n";

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (SprawdzLiczbe(&liczba, tab, 10))
            cout << "Zgadles!\n";
        else
            cout << "Nie zgadles\n";

    } while (!SprawdzLiczbe(&liczba, tab, 10));

    cout << "Zgadles za " << proby << " razem.\n";

    return 0;
}