/*
Hacer un algoritmo/programa que permita cargar tres vectores con diez números enteros
cada uno y calcular lo siguiente:
a. El promedio de cada vector.
b. El promedio de los tres vectores.
c. En un cuarto vector almacenar la suma de los tres primeros, tal como se refleja en el
ejemplo siguiente: a[0] + b[0] + c[0] = d[0].
d. Realizar un listado que muestre los cuatro vectores con los valores originales,
seguidamente muestre en orden ascendente el vector de la sumatoria, así como
también en orden descendente.
*/
#include <iostream>
#include <algorithm>
using namespace std;
//funciones
void f1();
//variables
int vector1[10], vector2[10], vector3[10], vectorSuma[10];
    int suma1 = 0, suma2 = 0, suma3 = 0;
int main(){
	f1();	
	return 0;
}
void f1(){
    cout << "Introduce 10 números enteros para el primer vector: ";
    for (int i = 0; i < 10; i++) {
        cin >> vector1[i];
        suma1 += vector1[i];
    }
    
    cout << "Introduce 10 números enteros para el segundo vector: ";
    for (int i = 0; i < 10; i++) {
        cin >> vector2[i];
        suma2 += vector2[i];
    }
    
    cout << "Introduce 10 números enteros para el tercer vector: ";
    for (int i = 0; i < 10; i++) {
        cin >> vector3[i];
        suma3 += vector3[i];
    }
    
    double promedio1 = static_cast<double>(suma1) / 10;
    double promedio2 = static_cast<double>(suma2) / 10;
    double promedio3 = static_cast<double>(suma3) / 10;
    
    cout << "El promedio del primer vector es: " << promedio1 << endl;
    cout << "El promedio del segundo vector es: " << promedio2 << endl;
    cout << "El promedio del tercer vector es: " << promedio3 << endl;
    
    double promedioTotal = (promedio1 + promedio2 + promedio3) / 3;
    cout << "El promedio de los tres vectores es: " << promedioTotal << endl;
    
    for (int i = 0; i < 10; i++) {
        vectorSuma[i] = vector1[i] + vector2[i] + vector3[i];
    }
    
    cout << "Vector 1: ";
    for (int i = 0; i < 10; i++) {
        cout << vector1[i] << " ";
    }
    cout << endl;
    
    cout << "Vector 2: ";
    for (int i = 0; i < 10; i++) {
        cout << vector2[i] << " ";
    }
    cout << endl;
    
    cout << "Vector 3: ";
    for (int i = 0; i < 10; i++) {
        cout << vector3[i] << " ";
    }
    cout << endl;
    
    cout << "Vector Suma: ";
    for (int i = 0; i < 10; i++) {
        cout << vectorSuma[i] << " ";
    }
    cout << endl;
    
    sort(vectorSuma, vectorSuma + 10);
    
    cout << "Vector Suma ordenado de forma ascendente: ";
    for (int i = 0; i < 10; i++) {
        cout << vectorSuma[i] << " ";
    }
    cout << endl;
    
    reverse(vectorSuma, vectorSuma + 10);
    
    cout << "Vector Suma ordenado de forma descendente: ";
    for (int i = 0; i < 10; i++) {
        cout << vectorSuma[i] << " ";
    }
    cout << endl;
	}

