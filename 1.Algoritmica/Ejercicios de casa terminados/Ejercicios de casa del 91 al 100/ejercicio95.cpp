/*
Escriba un algoritmo/programa, con una función denominada ValorAbsoluto(), que permita
mostrar el valor absoluto de cualquier número leído.
 */
#include <iostream>
using namespace std;

int ValorAbsoluto(int n) {
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}
int main() {
    int x;
    cout << "Ingrese un número: ";
    cin >> x;
    cout << "El valor absoluto de " << x << " es " << ValorAbsoluto(x) << endl;
    return 0;
}
