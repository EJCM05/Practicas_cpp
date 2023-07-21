/*
. Hacer un algoritmo/programa que permita cargar dos vectores con ―n‖ números enteros
cada uno (ambos con igual cantidad de números), y cargar en un tercer vector n la suma de
los dos primeros vectores, se debe tener en cuenta que la suma se realiza según sus
posiciones, ej: a[0] + b[0] = c[0]
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
    cout << "Introduce la cantidad de números en cada vector: ";
    cin >> n;

    int vector1[n], vector2[n], vectorSuma[n];
    
    cout << "Introduce " << n << " números enteros para el primer vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }
    
    cout << "Introduce " << n << " números enteros para el segundo vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }
    
    for (int i = 0; i < n; i++) {
        vectorSuma[i] = vector1[i] + vector2[i];
    }
    
    cout << "La suma de los dos vectores es: ";
    for (int i = 0; i < n; i++) {
        cout << vectorSuma[i] << " ";
    }
    cout << endl;
	}

