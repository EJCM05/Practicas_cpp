/*
Diseñe un algoritmo/programa que lea dos vectores de igual cantidad de posiciones A y B
de N elementos cada uno y multiplique el primer elemento de A con el último elemento de B
y luego el segundo elemento de A por el penúltimo elemento de B y así sucesivamente
hasta llegar a ejecutar todas las multiplicaciones de A x B. El resultado de la multiplicación
almacenarlo en un vector C, emitiendo los listados respectivos.
 */
#include <iostream>
#include <vector>
using namespace std;
//variables
void f1();
//funciones
    int N;
int main(int argc, char **argv){
	f1();
	return 0;
	}
void f1(){
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> N;
    vector<int> A(N), B(N), C(N);
    cout << "Ingrese los elementos del vector A: ";
    for (int i = 0; i < N; i++) cin >> A[i];
    cout << "Ingrese los elementos del vector B: ";
    for (int i = 0; i < N; i++) cin >> B[i];
    for (int i = 0; i < N; i++) {
        C[i] = A[i] * B[N-i-1];
    }
    cout << "El resultado de la multiplicación es: ";
    for (int i = 0; i < N; i++) cout << C[i] << " ";
    cout << endl;
	
	}

