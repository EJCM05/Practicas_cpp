/*
 * Escribe un algoritmo/programa que defina un vector de números y calcule la multiplicación
acumulada de sus elementos.
 */
#include <iostream>
#include <vector>
using namespace std;
    void f1();
    vector<int> vec = {1, 2, 3, 4, 5};
    int mult = 1;
int main() {
	f1();
    return 0;
}
void f1(){
	for (auto i : vec) {
        mult *= i;
    }
    cout << "La multiplicación acumulada de los elementos del vector es: " << mult << endl;
	}
