#include <iostream>
using namespace std;

// szescian
int CalculateVolumeCube(int a) {
    return a * a * a;
}

// prostopadloscian
int CalculateVolumeCuboid(int a, int b, int h) {
    return a * b * h;
}

// walec
double CalculateVolumeCylinder(double r, double h) {
    return 3.1415 * r * r * h;
}

int main() {
    int wybor;

    cout << "1 - Szescian\n2 - Prostopadloscian\n3 - Walec\n";
    cout << "Wybierz numer bryly: ";
    cin >> wybor;

    if (wybor == 1) {
        int a;
        cout << "Podaj bok: ";
        cin >> a;
        cout << "Objetosc: " << CalculateVolumeCube(a) << endl;
    }
    else if (wybor == 2) {
        int a, b, h;
        cout << "Podaj a b h: ";
        cin >> a >> b >> h;
        cout << "Objetosc: " << CalculateVolumeCuboid(a, b, h) << endl;
    }
    else if (wybor == 3) {
        double r, h;
        cout << "Podaj r h: ";
        cin >> r >> h;
        cout << "Objetosc: " << CalculateVolumeCylinder(r, h) << endl;
    }

    return 0;
}