/*
 Escriba un algoritmo/programa que imprima todos los enteros positivos impares menores
que 100 omitiéndose aquellos que sean divisibles por 7.
 */
#include <iostream>
using namespace std;
//funciones
void f1();
//variables

int main(){
	f1();
	return 0;
}
void f1(){
	for (int i = 1; i < 100; i += 2) {
        if (i % 7 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
	
	}
