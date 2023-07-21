/*
Hacer un algoritmo/programa que permita cargar un vector con 10 números enteros
positivos (se debe realizar la validación), y determinar, ¿Cuantos números primos existen
en el vector?
 */
#include <iostream>
#include <vector>
using namespace std;
//Funciones
void f1();
//variables
int numeros[10];
bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
    cout << "Introduce 10 números enteros positivos: ";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        while (numeros[i] <= 0) {
            cout << "Error: el número debe ser positivo. Introduce otro número: ";
            cin >> numeros[i];
        }
    }
    int contador = 0;
    for (int i = 0; i < 10; i++) {
        if (esPrimo(numeros[i])) {
            contador++;
        }
    }
    cout << "Hay " << contador << " números primos en el vector." << endl;
	
	}
