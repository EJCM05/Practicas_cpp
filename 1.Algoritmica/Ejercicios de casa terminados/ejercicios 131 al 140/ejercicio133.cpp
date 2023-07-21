/*
Diseñe un algoritmo/programa que lea un número cualquiera y lo busque en el vector X, el
cual tiene almacenados N elementos. Escribir la posición donde se encuentra almacenado
el número en el vector o el mensaje ―NO‖, si no lo encuentra. Búsqueda secuencial.
 */


#include <iostream>
#include <vector>
using namespace std;
//variables
void f1();
//funciones
	 int N, num;
int main(int argc, char **argv){
	f1();
	return 0;
	}
void f1(){
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;
    vector<int> X(N);
    cout << "Ingrese los elementos del vector X: ";
    for (int i = 0; i < N; i++) cin >> X[i];
    cout << "Ingrese el número a buscar: ";
    cin >> num;
    int pos = -1;
    for (int i = 0; i < N; i++) {
        if (X[i] == num) {
            pos = i;
            break;
        }
    }
    if (pos != -1) cout << "El número se encuentra en la posición " << pos << endl;
    else cout << "NO" << endl;
	
	}

