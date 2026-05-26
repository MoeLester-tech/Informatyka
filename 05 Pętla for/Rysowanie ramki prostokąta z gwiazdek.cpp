#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {
        for (int j = 0; j < szerokosc; j++) {
            if (i == 0 || i == wysokosc - 1 || j == 0 || j == szerokosc - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}