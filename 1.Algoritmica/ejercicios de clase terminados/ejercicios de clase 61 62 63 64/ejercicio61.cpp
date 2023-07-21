/*
 * Desarrollar un algoritmo / programa que permita registrar números enteros en un arreglo de tipo
bidimensional de 3 x 3, posteriormente mostrarlos en pantalla.
 * */


#include <iostream>
using namespace std;
//funciones
void f1();
int f2();
//variables
int matriz[3][3];
int main() {
    f2();
    return 0;
}
int f2(){
	f1();
	return 0;
	}


void f1(){
		cout << "Introduce los elementos de la matriz: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    cout << "La matriz es: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
	}
