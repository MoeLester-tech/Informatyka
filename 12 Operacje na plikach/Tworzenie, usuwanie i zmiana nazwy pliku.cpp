#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main() {
    int wybor;

    cout << "Wybierz operacje:\n";
    cout << "1 - Utworz plik\n";
    cout << "2 - Usun plik\n";
    cout << "3 - Zmien nazwe pliku\n";
    cin >> wybor;

    if (wybor == 1) {
        string nazwa;
        cout << "Podaj nazwe pliku: ";
        cin >> nazwa;

        ofstream plik(nazwa);
        if (!plik) {
            cout << "Blad tworzenia pliku" << endl;
            return 1;
        }

        cout << "Plik utworzony" << endl;
        plik.close();
    }

    else if (wybor == 2) {
        string nazwa;
        cout << "Podaj nazwe pliku: ";
        cin >> nazwa;

        if (remove(nazwa.c_str()) == 0)
            cout << "Plik usuniety" << endl;
        else
            cout << "Blad usuwania" << endl;
    }

    else if (wybor == 3) {
        string stara, nowa;
        cout << "Podaj stara nazwe: ";
        cin >> stara;
        cout << "Podaj nowa nazwe: ";
        cin >> nowa;

        if (rename(stara.c_str(), nowa.c_str()) == 0)
            cout << "Zmieniono nazwe pliku" << endl;
        else
            cout << "Blad zmiany nazwy" << endl;
    }

    return 0;
}