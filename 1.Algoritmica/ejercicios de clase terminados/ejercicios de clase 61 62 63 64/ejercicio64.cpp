/*
Desarrolle un algoritmo/programa, que permita almacenar en un arreglo de 4 x 4, una cantidad de
números enteros y mostrar su respectivo listado, posteriormente almacenar en dos arreglos
adicionales los números pares e impares, emitiendo un listado para cada uno de ellos, presentando las
respectivas sumatorias
 * 
 */
#include <iostream>
#include <vector>
using namespace std;
//funciones
void f1();
int f2();
int main(){
	cout<<f2();
    return 0;
}
int f2(){
	f1();
	return 0;
	}
void f1(){
	int matriz[4][4];
    cout << "Introduce los elementos de la matriz: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }
    cout << "La matriz es: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    int pares[16];
    int impares[16];
    int nPares = 0;
    int nImpares = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares[nPares] = matriz[i][j];
                nPares++;
            } else {
                impares[nImpares] = matriz[i][j];
                nImpares++;
            }
        }
    }
    int sumaPares = 0;
    cout << "Los números pares son: ";
    for (int i = 0; i < nPares; i++) {
        cout << pares[i] << " ";
        sumaPares += pares[i];
    }
    cout << endl;
    cout << "La suma de los números pares es: " << sumaPares << endl;
    int sumaImpares = 0;
    cout << "Los números impares son: ";
    for (int i = 0; i < nImpares; i++) {
        cout << impares[i] << " ";
        sumaImpares += impares[i];
    }
    cout << endl;
    cout << "La suma de los números impares es: " << sumaImpares << endl;
	}
