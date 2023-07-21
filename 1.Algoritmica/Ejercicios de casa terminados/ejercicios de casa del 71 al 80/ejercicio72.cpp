/*
Escriba un algoritmo/programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).
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
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        sum += factorial;
    }
    cout << "Suma de factoriales desde 1 hasta " << n << " = " << sum;
	
	
	}
