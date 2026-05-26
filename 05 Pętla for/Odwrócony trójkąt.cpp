#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {

        for (int sp = 0; sp < i; sp++)
            cout << " ";

        for (int j = 0; j < szerokosc - 2 * i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}