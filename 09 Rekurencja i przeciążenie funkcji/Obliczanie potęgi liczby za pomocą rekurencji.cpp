#include <iostream>
using namespace std;

int PowerRecursive(int a, int b) {
    if (b == 0)
        return 1;
    return a * PowerRecursive(a, b - 1);
}

int main() {
    int a, b;
    cout << "Podaj liczbe podstawowa: ";
    cin >> a;
    cout << "Podaj wykladnik: ";
    cin >> b;

    cout << a << " do potegi " << b << " wynosi: "
         << PowerRecursive(a, b) << endl;

    return 0;
}