/*
Se tienen almacenados en la memoria dos vectores M y N de K cantidad de elementos
cada uno. Hacer un algoritmo/programa que escriba la palabra ―Iguales‖ si ambos vectores
son iguales y ―Diferentes‖ si no lo son. Serán iguales cuando en la misma posición de
ambos vectores se tenga el mismo valor para todos los elementos.

 * 
 */


#include <iostream>
#include <vector>
using namespace std;
//variables
 int K;
 vector<int> M(K), N(K);
 bool iguales = true;
//funciones

 void f1();
int main(int argc, char **argv){
	f1();
	
	return 0;
	}
void f1(){
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> K;
    cout << "Ingrese los elementos del vector M: ";
    for (int i = 0; i < K; i++) cin >> M[i];
    cout << "Ingrese los elementos del vector N: ";
    for (int i = 0; i < K; i++) cin >> N[i];
    for (int i = 0; i < K; i++) {
        if (M[i] != N[i]) {
            iguales = false;
            break;
        }
    }
    if (iguales) cout << "Iguales" << endl;
    else cout << "Diferentes" << endl;
	}

