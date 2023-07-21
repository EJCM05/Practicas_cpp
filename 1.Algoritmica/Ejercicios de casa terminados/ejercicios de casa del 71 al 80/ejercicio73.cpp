/*
Escriba un programa que calcule el valor de: 2 1 +2 2 +2 3 +...+2 n.
 */


#include <iostream>
#include <cmath>
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
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(2,i);
    }
    cout << "Suma de potencias de 2 desde 2^1 hasta 2^" << n << " = " << sum;
	
	
	}
