/*
Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n.
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
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }
    cout << "Resultado de la expresión 1-2+3-4+5-6...n para n = " << n << " es " << sum;
	
	
	}
