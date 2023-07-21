/*
Hacer un algoritmo/programa que permita cargar un vector con cinco números enteros
negativos (se debe realizar la validación) y determinar lo siguiente: ¿Cuál es el número
mayor? y ¿Cuál es el número menor?
 */
#include <iostream>
#include <vector>
using namespace std;
//Funciones
void f1();
//variables
 int numeros[5];
int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
    cout << "Introduce 5 números enteros negativos: ";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
        while (numeros[i] >= 0) {
            cout << "Error: el número debe ser negativo. Introduce otro número: ";
            cin >> numeros[i];
        }
    }
    int mayor = numeros[0];
    int menor = numeros[0];
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;
	
	}
