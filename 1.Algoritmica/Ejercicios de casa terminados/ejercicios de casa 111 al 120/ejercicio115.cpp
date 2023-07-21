/*
Hacer un algoritmo/programa que permita cargar dos vectores con cinco números enteros
cada uno y determinar si existe un número en el primer vector repetido en el segundo
vector.
*/
#include <iostream>
#include <unordered_set>
using namespace std;
//funciones
void f1();
//variables
int vector1[5], vector2[5];
unordered_set<int> conjunto;
    
int main(){
	f1();	
	return 0;
}
void f1(){

    cout << "Introduce 5 números enteros para el primer vector: ";
    for (int i = 0; i < 5; i++) {
        cin >> vector1[i];
        conjunto.insert(vector1[i]);
    }
    
    cout << "Introduce 5 números enteros para el segundo vector: ";
    for (int i = 0; i < 5; i++) {
        cin >> vector2[i];
    }
    
    bool repetido = false;
    for (int i = 0; i < 5; i++) {
        if (conjunto.count(vector2[i]) > 0) {
            repetido = true;
            break;
        }
    }
    
    if (repetido) {
        cout << "Sí existe un número en el primer vector repetido en el segundo vector." << endl;
    } else {
        cout << "No existe un número en el primer vector repetido en el segundo vector." << endl;
    }
    
	
	}

