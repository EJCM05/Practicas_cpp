/*
Hacer un algoritmo/programa que lea 5 números en un arreglo, los copie a otro arreglo,
multiplicado por 2 y muestre el segundo arreglo.
 */
#include <iostream>
#include <vector>
using namespace std;
//Funciones
void f1();
//variables
int arreglo1[5];
int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
    cout << "Introduce los 5 elementos del primer arreglo: ";
    for (int i = 0; i < 5; i++) {
        cin >> arreglo1[i];
    }
    int arreglo2[5];
    for (int i = 0; i < 5; i++) {
        arreglo2[i] = arreglo1[i] * 2;
    }
    cout << "El contenido del segundo arreglo es: ";
    for (int i = 0; i < 5; i++) {
        cout << arreglo2[i] << " ";
    }
    cout << endl;	
	}
