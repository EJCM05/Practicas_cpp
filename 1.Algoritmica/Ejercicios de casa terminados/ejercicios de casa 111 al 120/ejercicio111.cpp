/*
Hacer un algoritmo/programa que permita cargar un vector con 10 números enteros y
determinar. ¿Cuantos y cuales números se repiten?
*/
#include <iostream>
#include <map>
using namespace std;
//funciones
void f1();
//variables
	int numeros[10];
    map<int, int> contador;
int main(){
	f1();	
	return 0;
}
void f1(){    
    cout << "Introduce 10 números enteros: ";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        contador[numeros[i]]++;
    }
    
    cout << "Números repetidos: ";
    for (auto elemento : contador) {
        if (elemento.second > 1) {
            cout << elemento.first << " ";
        }
    }
	}

