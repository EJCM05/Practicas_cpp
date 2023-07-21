/*
 int n;
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
    int a = 0, b = 1, c;
    cout << "Los primeros " << n << " términos de la serie de Fibonacci son: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << a << " ";
            continue;
        }
        if (i == 2) {
            cout << b << " ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
	
	
	}
}
