/*
 * Diseñe un algoritmo/programa que forme dos arreglos relacionados que almacenen los
códigos de los N artículos que se venden en un almacén y la existencia (número de
unidades existentes) de cada uno de los artículos, ejemplo: Del artículo con código 101 hay
30 unidades en existencia; del artículo con código 200 hay 40 unidades y así
sucesivamente.
a. Por cada proveedor o cliente que llega al almacén se genera un registro con los
siguientes datos:
b. Tipo de transacción [1 para proveedor (recibo); 2 para cliente (venta)]
c. Código del artículo transado
d. Número de unidades transadas (recibidas o vendidas)
e.Al final se deben mostrar los códigos de los artículos y las existencias de cada uno de
ellos, es decir, los arreglos de códigos y de existencias actualizados. En caso de que
la cantidad vendida supere la existencia, la operación se debe anular, y se debe emitir
un mensaje de error al usuario. 
 */

#include <iostream>
using namespace std;
void f1();
int main()
{
   f1();
    return 0;
}
void f1(){
	 int n;
    cout << "Ingrese el número de artículos: ";
    cin >> n;

    int codigos[n], existencias[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el código del artículo " << i + 1 << ": ";
        cin >> codigos[i];
        cout << "Ingrese la existencia del artículo " << i + 1 << ": ";
        cin >> existencias[i];
    }

    int transaccion, codigo, unidades;
    while (true)
    {
        cout << "\nTipo de transacción [1 para proveedor (recibo); 2 para cliente (venta)]: ";
        cin >> transaccion;
        if (transaccion != 1 && transaccion != 2)
            break;

        cout << "Código del artículo transado: ";
        cin >> codigo;

        bool encontrado = false;
        int indice;
        for (int i = 0; i < n; i++)
            if (codigos[i] == codigo)
            {
                encontrado = true;
                indice = i;
                break;
            }

        if (!encontrado)
            cout << "El código del artículo no existe." << endl;
        else
        {
            cout << "Número de unidades transadas: ";
            cin >> unidades;

            if (transaccion == 1)
                existencias[indice] += unidades;
            else
                if (existencias[indice] < unidades)
                    cout << "La cantidad vendida supera la existencia. La operación se anula." << endl;
                else
                    existencias[indice] -= unidades;
        }
    }

    cout << "\nCódigos de los artículos y las existencias de cada uno de ellos:" << endl;
    for (int i = 0; i < n; i++)
        cout << codigos[i] << ": " << existencias[i] << endl;

	}
