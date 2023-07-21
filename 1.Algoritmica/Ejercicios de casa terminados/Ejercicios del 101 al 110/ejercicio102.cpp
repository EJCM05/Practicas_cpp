/*
 * Escribe un algoritmo/programa que defina un vector de números y muestre en la salida
estándar el vector en orden inverso — del último al primer elemento. 
 */


#include <iostream>
#include <vector>
using namespace std;
//funciones 
void f1();
//variables

int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
	 vector<int> numeros = {1, 2, 3, 4, 5};
    cout << "El vector en orden inverso es: ";
    for (int i = numeros.size() - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;
	}
