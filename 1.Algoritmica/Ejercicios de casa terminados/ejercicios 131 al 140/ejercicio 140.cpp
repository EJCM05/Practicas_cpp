/*
Una tienda posee 4 vendedores y 5 tipos de marcadores para vender, existen n cantidad de
clientes y de ellos se conoce el nombre y el RIF. Desarrolle un algoritmo/programa que
permita calcular e imprimir lo siguiente:
a. Cantidad de marcadores por tipo vendidos por cada vendedor.
b. Cantidad de marcadores vendidos por cada vendedor.
c. Total de marcadores vendidos por la tienda.
d. Cuál es el cliente que compra más marcadores.
e. Cuál es el cliente que compra menos marcadores.
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//variables
void f1();
//funciones
struct Cliente {
    string nombre;
    string RIF;
    int marcadores_comprados;
};
int main(int argc, char **argv){
	f1();
	return 0;
	}
void f1(){
	const int VENDEDORES = 4;
    const int TIPOS_MARCADORES = 5;
    vector<vector<int>> marcadores_vendidos(VENDEDORES, vector<int>(TIPOS_MARCADORES, 0));
    int n;
    cout << "Ingrese la cantidad de clientes: ";
    cin >> n;
    vector<Cliente> clientes(n);
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre y el RIF del cliente " << i+1 << ": ";
        cin >> clientes[i].nombre >> clientes[i].RIF;
        clientes[i].marcadores_comprados = 0;
        for (int j = 0; j < VENDEDORES; j++) {
            for (int k = 0; k < TIPOS_MARCADORES; k++) {
                int cantidad;
                cout << "Ingrese la cantidad de marcadores del tipo " << k+1 << " vendidos al cliente " << i+1 << " por el vendedor " << j+1 << ": ";
                cin >> cantidad;
                marcadores_vendidos[j][k] += cantidad;
                clientes[i].marcadores_comprados += cantidad;
            }
        }
    }
    cout << "Cantidad de marcadores por tipo vendidos por cada vendedor:" << endl;
    for (int i = 0; i < VENDEDORES; i++) {
        cout << "Vendedor " << i+1 << ":" << endl;
        for (int j = 0; j < TIPOS_MARCADORES; j++) {
            cout << "\tTipo " << j+1 << ": " << marcadores_vendidos[i][j] << endl;
        }
    }
    cout << "Cantidad de marcadores vendidos por cada vendedor:" << endl;
    for (int i = 0; i < VENDEDORES; i++) {
        int total_vendedor = 0;
        for (int j = 0; j < TIPOS_MARCADORES; j++) {
            total_vendedor += marcadores_vendidos[i][j];
        }
        cout << "Vendedor " << i+1 << ": " << total_vendedor << endl;
    }
    int total_tienda = 0;
    for (int i = 0; i < VENDEDORES; i++) {
        for (int j = 0; j < TIPOS_MARCADORES; j++) {
            total_tienda += marcadores_vendidos[i][j];
        }
    }
    cout << "Total de marcadores vendidos por la tienda: " << total_tienda << endl;
    int cliente_mas_marcadores = 0, cliente_menos_marcadores = 0;;
    for (int i = 1; i < n; i++) {
        if (clientes[i].marcadores_comprados > clientes[cliente_mas_marcadores].marcadores_comprados) {
            cliente_mas_marcadores = i;
        }
        if (clientes[i].marcadores_comprados < clientes[cliente_menos_marcadores].marcadores_comprados) {
            cliente_menos_marcadores = i;
        }
    }
    cout << "El cliente que compra más marcadores es: " << clientes[cliente_mas_marcadores].nombre << endl;
    cout << "El cliente que compra menos marcadores es: " << clientes[cliente_menos_marcadores].nombre << endl;
	
	}
