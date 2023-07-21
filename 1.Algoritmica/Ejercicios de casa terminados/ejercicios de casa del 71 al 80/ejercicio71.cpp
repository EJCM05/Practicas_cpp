/*
Escriba un algoritmo/programa que calcule el valor de: 1*2*3*...*n (factorial).
 */


#include <iostream>
using namespace std;
//funciones
void f1();
//variables
int n;
int main(){
	f1();
	return 0;
}
void f1(){
    cout << "Introduce un número entero: ";
    cin >> n;
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << "Factorial de " << n << " = " << factorial;
	}
