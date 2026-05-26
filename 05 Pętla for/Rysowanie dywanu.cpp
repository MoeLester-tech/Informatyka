#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {

        if (i == 0 || i == wysokosc - 1) {
            for (int j = 0; j < szerokosc; j++)
                cout << "-";
        } else {
            for (int j = 0; j < szerokosc; j++) {
                if (j == 0 || j == szerokosc - 1)
                    cout << "|";
                else if ((i + j) % 2 == 0)
                    cout << "#";
                else
                    cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}