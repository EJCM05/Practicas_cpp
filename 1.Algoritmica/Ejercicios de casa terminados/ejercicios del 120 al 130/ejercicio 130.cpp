/*Almacenar N números en un vector, almacenarlos en otro vector en orden inverso al vector
original e imprimir los dos vectores.*/

#include <iostream>
#include <vector>
using namespace std;
void f1();
int main() {
    f1();
    return 0;
}
void f1(){
	int n;
    vector<int> numeros;
    vector<int> numerosInversos;

    cout << "Ingrese la cantidad de numeros que desea almacenar: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int numero;
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero);
    }

    for (int i = n - 1; i >= 0; i--) {
        numerosInversos.push_back(numeros[i]);
    }

    cout << "Numeros ingresados: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "Numeros en orden inverso: ";
    for (int i = 0; i < n; i++) {
        cout << numerosInversos[i] << " ";
    }
    cout << endl;

	}
