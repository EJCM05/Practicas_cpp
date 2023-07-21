/*
Diseñar un algoritmo/programa que permita leer los primeros 100 números enteros, al final
indicar la cantidad de números pares, con su sumatoria, y la cantidad de números impares
con su sumatoria.
 */


#include <iostream>
using namespace std;
//funcines
void f1();
//variables
int sumPares = 0,sumImpares = 0,cantPares = 0,cantImpares = 0;
#include <iostream>
using namespace std;
int main() {
        f1();
    return 0;
}
void f1(){
	for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            sumPares += i;
            cantPares++;
        } else {
            sumImpares += i;
            cantImpares++;
        }
    }
    cout << "Cantidad de números pares: " << cantPares << endl;
    cout << "Sumatoria de números pares: " << sumPares << endl;
    cout << "Cantidad de números impares: " << cantImpares << endl;
    cout << "Sumatoria de números impares: " << sumImpares << endl;
	}
