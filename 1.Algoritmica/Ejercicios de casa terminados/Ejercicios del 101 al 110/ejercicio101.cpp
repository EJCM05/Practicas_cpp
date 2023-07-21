/*
  
 */


#include <iostream>
#include <vector>
using namespace std;
//funciones
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
    cout << "Los números del vector con sus índices asociados son: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Índice: " << i << ", Número: " << numeros[i] << endl;
    }
}

