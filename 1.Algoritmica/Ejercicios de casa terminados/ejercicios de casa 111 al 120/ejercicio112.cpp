/*
Hacer un algoritmo/programa que permita cargar dos vectores con cinco números enteros
cada uno y determinar lo siguiente: ¿Cuál es el número mayor de los dos vectores?
*/
#include <iostream>
#include <algorithm>
using namespace std;
//funciones
void f1();
//variables
 int vector1[5], vector2[5];
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
    
    int maximo1 = *max_element(vector1, vector1 + 5);
    int maximo2 = *max_element(vector2, vector2 + 5);
    
    cout << "El número mayor de los dos vectores es: " << max(maximo1, maximo2) << endl;
    
	}

