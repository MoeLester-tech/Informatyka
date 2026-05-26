#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    int *pa = &a;
    int *pb = &b;

    cout << "Przed modyfikacja:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    *pa = 15;
    *pb = 20;

    cout << "\nPo modyfikacji:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;
}