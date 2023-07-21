/*
Hacer un algoritmo/programa que permita cargar un vector con ―n‖ números enteros y
mostrar los elementos del vector ordenado ascendente y luego en forma descendente. Para
ambos casos debe emplear el método de ordenamiento que considere apropiado.
 */

#include <iostream>
using namespace std;
void ordenarAscendente(int numeros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

void ordenarDescendente(int numeros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numeros[j] < numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Introduce el número de elementos del vector: ";
    cin >> n;
    int numeros[n];
    cout << "Introduce los elementos del vector: ";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
    ordenarAscendente(numeros, n);
    cout << "El vector ordenado en forma ascendente es: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    ordenarDescendente(numeros, n);
    cout << "El vector ordenado en forma descendente es: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}
