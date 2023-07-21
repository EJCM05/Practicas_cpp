/*
Desarrollar un algoritmo/programa que permita leer 20 números, seguidamente imprimir
cuantos son positivos, cuantos negativos y cuantos neutros. Posteriormente leer 15
números negativos (validar que sean negativos), luego presentar un listado donde muestre
el número negativo leído y a su lado el mismo número pero en positivo.
 */
#include <iostream>
void f1();
int numeros[20];
int positivos = 0;
int negativos = 0;
int neutros = 0;
using namespace std;
int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
    for (int i = 0; i < 20; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        } else {
            neutros++;
        }
    }
    cout << "Hay " << positivos << " números positivos." << endl;
    cout << "Hay " << negativos << " números negativos." << endl;
    cout << "Hay " << neutros << " números neutros." << endl;
    int numeros_negativos[15];
    int numeros_positivos[15];
    for (int i = 0; i < 15; i++) {
        do {
            cout << "Ingrese el número negativo " << i + 1 << ": ";
            cin >> numeros_negativos[i];
        } while (numeros_negativos[i] >= 0);
        numeros_positivos[i] = -numeros_negativos[i];
    }
    cout << endl;
    cout << "Listado de números negativos y su correspondiente positivo:" << endl;
    for (int i = 0; i < 15; i++) {
        cout << numeros_negativos[i] << "\t" << numeros_positivos[i] << endl;
	}
}

