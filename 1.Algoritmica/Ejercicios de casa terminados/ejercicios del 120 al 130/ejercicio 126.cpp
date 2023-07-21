/*
 * Calcular el promedio de 50 valores almacenados en un vector. Determinar además cuantos
son mayores que el promedio y cuantos menores, imprimir el promedio, el número de datos
mayores que el promedio y una lista de valores mayores que el promedio.
 * */
#include <iostream>
using namespace std;
void f1();
int main()
{
   f1();
    return 0;
}
void f1(){
	 const int n = 50;
    int valores[n];
    double suma = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valores[i];
        suma += valores[i];
    }

    double promedio = suma / n;
    int mayores = 0;
    cout << "\nValores mayores que el promedio:\n";
    for (int i = 0; i < n; i++)
        if (valores[i] > promedio)
        {
            mayores++;
            cout << valores[i] << endl;
        }

    cout << "\nPromedio: " << promedio << endl;
    cout << "Número de datos mayores que el promedio: " << mayores << endl;
    cout << "Número de datos menores que el promedio: " << n - mayores << endl;

	}
