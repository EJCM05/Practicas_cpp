/*Llenar un vector de 20 elementos, imprimir la posición y el valor del elemento mayor
almacenado en el vector. Suponga que todos los elementos del vector son diferentes.*/
#include <iostream>
using namespace std;
void f1();
int main()
{
    f1();
    return 0;
}
void f1(){
	const int n = 20;
    int valores[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valores[i];
    }

    int mayor = valores[0];
    int pos = 0;
    for (int i = 1; i < n; i++)
        if (valores[i] > mayor)
        {
            mayor = valores[i];
            pos = i;
        }

    cout << "\nEl valor mayor es " << mayor << " y se encuentra en la posición " << pos << endl;

	}
