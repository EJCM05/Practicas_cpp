/*
Hacer un algoritmo/programa que permita cargar dos vectores con cinco números enteros
cada uno y cargar otro vector con los números del primer vector y los del segundo vector.
*/
#include <iostream>
using namespace std;
//funciones
void f1();
//variables
 int vector1[5], vector2[5], vector3[10];
int main(){
	f1();	
	return 0;
}
void f1(){

    
    cout << "Introduce 5 números enteros para el primer vector: ";
    for (int i = 0; i < 5; i++) {
        cin >> vector1[i];
    }
    
    cout << "Introduce 5 números enteros para el segundo vector: ";
    for (int i = 0; i < 5; i++) {
        cin >> vector2[i];
    }
    
    for (int i = 0; i < 5; i++) {
        vector3[i] = vector1[i];
    }
    
    for (int i = 0; i < 5; i++) {
        vector3[i + 5] = vector2[i];
    }
    
    cout << "El tercer vector es: ";
    for (int i = 0; i < 10; i++) {
        cout << vector3[i] << " ";
    }
    cout << endl;
    
	
	}

