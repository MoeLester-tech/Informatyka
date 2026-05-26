#include <iostream>
using namespace std;

int CalculateSumRecursive(int n) {
    if (n == 1)
        return 1;
    return n + CalculateSumRecursive(n - 1);
}

int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;

    cout << "Suma liczb od 1 do " << n << " wynosi: "
         << CalculateSumRecursive(n) << endl;

    return 0;
}