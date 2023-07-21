/*
Desarrolle un algoritmo o programa que permita calcular y mostrar la suma de todos los
números pares comprendidos entre 97 y 1003. Respuesta: 249150.
 */


#include <iostream>
using namespace std;
//funciones
void f1();
//variables
int sum = 0;
int main(){
	f1();
	return 0;
}
void f1(){
    for (int i = 98; i <= 1002; i += 2) {
        sum += i;
    }
    cout << "La suma de todos los números pares comprendidos entre 97 y 1003 es: " << sum;
	}
