#include <iostream>
#include <fstream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    ifstream test("dane.txt");
    bool istnieje = test.good();
    test.close();

    if (!istnieje) {
        ofstream plik("dane.txt");
        plik << "Jan Kowalski 25\n";
        plik << "Anna Nowak 30\n";
        plik.close();
    }

    char odp;
    cout << "Czy dodac osobe? (t/n): ";
    cin >> odp;

    if (odp == 't') {
        Osoba o;

        cout << "Imie: ";
        cin >> o.imie;

        cout << "Nazwisko: ";
        cin >> o.nazwisko;

        cout << "Wiek: ";
        cin >> o.wiek;

        ofstream plik("dane.txt", ios::app);
        plik << o.imie << " " << o.nazwisko << " " << o.wiek << "\n";
        plik.close();
    }

    ifstream plik("dane.txt");

    string imie, nazwisko;
    int wiek;

    cout << "\nZawartosc pliku:\n";
    while (plik >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie
             << ", Nazwisko: " << nazwisko
             << ", Wiek: " << wiek << endl;
    }

    plik.close();
    return 0;
}