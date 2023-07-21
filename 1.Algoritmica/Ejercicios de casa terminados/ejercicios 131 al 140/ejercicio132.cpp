/*
Se tiene el vector A con N elementos almacenados. Diseñe un algoritmo/programa que
escriba ―SI‖, si el vector esta ordenado ascendentemente o ―NO‖, si el vector no está
ordenado.
 */


#include <iostream>
#include <vector>
using namespace std;
//Funciones
void f1();
//variables
int N;
    vector<int> A(N);
int main(int argc, char **argv){
	f1();
	
	return 0;
	}
void f1(){
	
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;

    cout << "Ingrese los elementos del vector A: ";
    for (int i = 0; i < N; i++) cin >> A[i];
    bool ordenado = true;
    for (int i = 1; i < N; i++) {
        if (A[i] < A[i-1]) {
            ordenado = false;
            break;
        }
    }
    if (ordenado) cout << "SI" << endl;
    else cout << "NO" << endl;
	
	}

