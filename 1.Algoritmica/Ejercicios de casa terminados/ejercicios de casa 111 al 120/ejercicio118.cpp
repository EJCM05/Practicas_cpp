/*
Cargar un vector de ―n‖ posiciones con numero enteros, a partir de este crear 2 vectores;
uno con los números pares y el otro con los numero impares, además decir cuál de los
vectores es más grande y el promedio de los elementos en cada vector.
*/
#include <iostream>
#include <vector>
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
    cout << "Introduce la cantidad de números en el vector: ";
    cin >> n;
    vector<int> vectorOriginal(n), vectorPares, vectorImpares;
    cout << "Introduce " << n << " números enteros: ";
    for (int i = 0; i < n; i++) {
        cin >> vectorOriginal[i];
        if (vectorOriginal[i] % 2 == 0) {
            vectorPares.push_back(vectorOriginal[i]);
        } else {
            vectorImpares.push_back(vectorOriginal[i]);
        }
    }
    
    if (vectorPares.size() > vectorImpares.size()) {
        cout << "El vector de números pares es más grande." << endl;
    } else if (vectorPares.size() < vectorImpares.size()) {
        cout << "El vector de números impares es más grande." << endl;
    } else {
        cout << "Ambos vectores tienen el mismo tamaño." << endl;
    }
    
    int sumaPares = 0;
    for (int numero : vectorPares) {
        sumaPares += numero;
    }
    
    int sumaImpares = 0;
    for (int numero : vectorImpares) {
        sumaImpares += numero;
    }
    
    double promedioPares = static_cast<double>(sumaPares) / vectorPares.size();
    double promedioImpares = static_cast<double>(sumaImpares) / vectorImpares.size();
    
    cout << "El promedio de los elementos en el vector de números pares es: " << promedioPares << endl;
    cout << "El promedio de los elementos en el vector de números impares es: " << promedioImpares << endl;
	}

