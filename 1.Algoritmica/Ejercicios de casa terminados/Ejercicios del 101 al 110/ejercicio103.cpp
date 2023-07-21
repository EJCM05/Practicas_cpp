/*
Desarrolle un algoritmo/programa que lea de la entrada estándar un vector de enteros y
determine el mayor elemento del vector*/


#include <iostream>
#include <vector>
using namespace std;
//Funciones
void f1();
//variables
	vector<int> numeros;
    int n;
int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
    cout << "Introduce el número de elementos del vector: ";
    cin >> n;
    cout << "Introduce los elementos del vector: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        numeros.push_back(x);
    }
    int mayor = numeros[0];
    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    cout << "El mayor elemento del vector es: " << mayor << endl;
	
	}

