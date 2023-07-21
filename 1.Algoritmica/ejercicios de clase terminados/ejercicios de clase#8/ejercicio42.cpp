/*Realice un algoritmo/programa que permita calcular el factorial 
 * de un número comprendido entre 1 y 17.
Se debe validar que sea un número entero positivo.
 * */

#include <iostream>
using namespace std;
//funciones
void f1();
//variables
int factorial, numero;
int main(){
	f1();
	return 0;
}
void f1(){
	cout<<"Ingrese un numero entre 1-17: ";cin>>numero;
	for(int i=1; i<=17; i++){
		factorial = numero * i;
		}
	cout<<"El factor del 1 al 17 es: "<<factorial;
	}
