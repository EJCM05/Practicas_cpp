/*Almacenar N números en un vector, imprimir cuantos son ceros, cuántos son negativos,
cuantos positivos. Imprimir además la suma de los negativos y la suma de los positivos.*/
#include <iostream>
#include <vector>
using namespace std;
void f1();
int main() {
   f1();
    return 0;
}
void f1(){
	 int n;
    vector<int> numeros;
    int ceros = 0;
    int negativos = 0;
    int positivos = 0;
    int sumaNegativos = 0;
    int sumaPositivos = 0;

    cout << "Ingrese la cantidad de numeros que desea almacenar: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int numero;
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero;
        numeros.push_back(numero);

        if (numero == 0) {
            ceros++;
        } else if (numero < 0) {
            negativos++;
            sumaNegativos += numero;
        } else {
            positivos++;
            sumaPositivos += numero;
        }
    }

    cout << "Cantidad de ceros: " << ceros << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;
    cout << "Cantidad de numeros positivos: " << positivos << endl;
    cout << "Suma de los numeros negativos: " << sumaNegativos << endl;
    cout << "Suma de los numeros positivos: " << sumaPositivos << endl;

	}
