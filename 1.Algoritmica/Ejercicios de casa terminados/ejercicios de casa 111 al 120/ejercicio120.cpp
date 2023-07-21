/*
Una tienda de mascotas desea un programa para guardar los nombre en un vector, la
cantidad en otro y el valor en otro, además que imprima la relación de los animales, la
cantidad total, el costo de todos los animales y su valor promedio, que animal es más
costoso y cual es más barato.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//funciones
void f1();
//variables
	int n;
	vector<string> nombres(n);
    vector<int> cantidades(n);
    vector<double> valores(n);
int main(){
	f1();	
	return 0;
}
void f1(){
    cout << "Introduce la cantidad de animales en la tienda: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cout << "Introduce el nombre del animal " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Introduce la cantidad del animal " << i + 1 << ": ";
        cin >> cantidades[i];
        cout << "Introduce el valor del animal " << i + 1 << ": ";
        cin >> valores[i];
    }
    
    cout << "Relación de animales:" << endl;
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << ": " << cantidades[i] << " - $" << valores[i] << endl;
    }
    
    int cantidadTotal = 0;
    double valorTotal = 0;
    for (int i = 0; i < n; i++) {
        cantidadTotal += cantidades[i];
        valorTotal += cantidades[i] * valores[i];
    }
    
    cout << "Cantidad total de animales: " << cantidadTotal << endl;
    cout << "Costo total de todos los animales: $" << valorTotal << endl;
    
    double valorPromedio = valorTotal / cantidadTotal;
    cout << "Valor promedio por animal: $" << valorPromedio << endl;
    
    int indiceMasCostoso = 0, indiceMasBarato = 0;
    for (int i = 1; i < n; i++) {
        if (valores[i] > valores[indiceMasCostoso]) {
            indiceMasCostoso = i;
        }
        if (valores[i] < valores[indiceMasBarato]) {
            indiceMasBarato = i;
        }
    }
    
    cout << "El animal más costoso es: " << nombres[indiceMasCostoso] << endl;
    cout << "El animal más barato es: " << nombres[indiceMasBarato] << endl;
	}

