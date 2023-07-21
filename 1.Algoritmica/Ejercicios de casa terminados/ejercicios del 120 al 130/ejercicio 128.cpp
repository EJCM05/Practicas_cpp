/*Almacenar 10 números en un vector, elevar al cuadrado cada valor almacenado en el
vector, almacenar el resultado en otro vector. Imprimir el vector original y el vector
resultante.*/
#include <iostream>
using namespace std;
void f1();
int main()
{
	f1();
    
    return 0;
}
void f1(){
	const int n = 10;
    int valores[n];
    int cuadrados[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valores[i];
        cuadrados[i] = valores[i] * valores[i];
    }

    cout << "\nVector original:\n";
    for (int i = 0; i < n; i++)
        cout << valores[i] << " ";

    cout << "\nVector de cuadrados:\n";
    for (int i = 0; i < n; i++)
        cout << cuadrados[i] << " ";

	}
