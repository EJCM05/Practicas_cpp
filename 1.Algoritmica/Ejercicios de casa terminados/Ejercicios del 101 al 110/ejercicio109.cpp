/*
Hacer un algoritmo/programa que permita cargar un vector con ―n‖ números enteros y
determinar, ¿Cuantos números pares y cuantos números impares existen en el vector?
 */
#include <iostream>
#include <vector>
using namespace std;
//Funciones
void f1();
//variables
 int n;
int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
	
    cout << "Introduce el número de elementos del vector: ";
    cin >> n;
    int numeros[n];
    cout << "Introduce los elementos del vector: ";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
    int pares = 0;
    int impares = 0;
    for (int i = 0; i < n; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    cout << "Hay " << pares << " números pares y " << impares << " números impares en el vector." << endl;
	}
