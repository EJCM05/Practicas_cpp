/*
Se requiere que diseñe un algoritmo/programa que permita leer números enteros, mediante una matriz de
“n” filas x “m” columnas; y que posteriormente permita emitir el listado de los valores almacenados en el
arreglo.
 */ 

#include <iostream>
using namespace std;
//funciones
void f1();
int f2();
//variables;
 int n, m;
int main(int argc, char **argv){
		cout<<f2();
	return 0;
}
int f2(){
	f1();
	return 0;
	}

void f1(){
    cout << "Introduce el número de filas de la matriz: ";
    cin >> n;
    cout << "Introduce el número de columnas de la matriz: ";
    cin >> m;
    int matriz[n][m];
    cout << "Introduce los elementos de la matriz: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }
    cout << "La matriz es: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
	}
