/*
 * Realice un algoritmo/programa para llevar el control de las ventas de una tienda, donde se
deben llenar tres vectores ―Factu‖ Numero de Factura, ―Cant‖ Cantidad de artículos llevados
y ―Valor‖ Valor de la Factura, el tamaño de los vectores está dado por un numero N dado
por teclado. Determine:
a. El número de la factura con mayor valor.
b. El promedio de artículos llevados en cada factura.
c. Imprimir los números de factura y el valor de las que estén por encima del promedio
de artículos.
d. Cuál es la factura que lleva mayor cantidad de artículos
 * */
#include <iostream>
#include <vector>
using namespace std;
int m,n,z;
void f1();
vector<int> factu(m);
vector<int> cant(n);
vector<double> valor(z);
int main()
{
  f1();
    return 0;
}
void f1(){
	

    cout << "Ingrese el número de facturas: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el número de la factura " << i + 1 << ": ";
        cin >> factu[i];
        cout << "Ingrese la cantidad de artículos llevados en la factura " << i + 1 << ": ";
        cin >> cant[i];
        cout << "Ingrese el valor de la factura " << i + 1 << ": ";
        cin >> valor[i];
    }

    // Encontrar el número de la factura con mayor valor
    int max_valor_index = 0;
    for (int i = 1; i < n; i++) {
        if (valor[i] > valor[max_valor_index]) max_valor_index = i;
    }
    cout << "El número de la factura con mayor valor es: " << factu[max_valor_index] << endl;

    // Calcular el promedio de artículos llevados en cada factura
    double suma_cant = 0;
    for (int i = 0; i < n; i++) {
        suma_cant += cant[i];
    }
    double promedio_cant = suma_cant / n;
    cout << "El promedio de artículos llevados en cada factura es: " << promedio_cant << endl;

    // Imprimir los números de factura y el valor de las que estén por encima del promedio de artículos
    cout << "Facturas con cantidad de artículos por encima del promedio:" << endl;
    for (int i = 0; i < n; i++) {
        if (cant[i] > promedio_cant) {
            cout << "Número de factura: " << factu[i] << " - Valor: " << valor[i] << endl;
        }
    }

    // Encontrar la factura que lleva mayor cantidad de artículos
    int max_cant_index = 0;
    for (int i = 1; i < n; i++) {
        if (cant[i] > cant[max_cant_index]) max_cant_index = i;
    }
    cout << "La factura que lleva mayor cantidad de artículos es: " << factu[max_cant_index] << endl;

}
