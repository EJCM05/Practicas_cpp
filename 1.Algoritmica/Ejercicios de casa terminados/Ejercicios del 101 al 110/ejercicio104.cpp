/*
Escribe un algoritmo/programa que defina un vector de números y calcule si existe algún
número en el vector cuyo valor equivale a la suma del resto de números del vector
 */
#include <iostream>
#include <vector>
using namespace std;
//Funciones
void f1();
//variables
	int numeros[] = {1, 2, 3, 6};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int suma = 0;
int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
    for (int i = 0; i < n; i++) {
        suma += numeros[i];
    }
    bool existe = false;
    for (int i = 0; i < n; i++) {
        if (numeros[i] == suma - numeros[i]) {
            existe = true;
            break;
        }
    }
    if (existe) {
        cout << "Sí existe un número en el vector cuyo valor equivale a la suma del resto de números del vector." << endl;
    } else {
        cout << "No existe un número en el vector cuyo valor equivale a la suma del resto de números del vector." << endl;
    }
	}
