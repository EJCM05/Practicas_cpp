/*
Muchos bancos y cajas de ahorro calculan los intereses de las cantidades depositadas por
los clientes diariamente con base en las siguientes premisas: un capital de $1000, con una
tasa de interés del 6%, renta un interés en un día de 0.06 multiplicado por 1000 y dividido
por 365. Esta operación producirá $0.16 de interés y el capital acumulado será 1000,16. El
interés para el segundo día se calculará multiplicando 0.06 por 1000 y dividiendo el
resultado por 365. Diseñar un programa en c++ que reciba tres entradas: el capital a
depositar, la tasa de interés y la duración del depósito en semanas y calcule el capital total
acumulado al final del período de tiempo especificado.
 */
#include <iostream>
using namespace std;
//funciones
void f1();
//variables
	double capital;
    double tasa_interes;
    int duracion_semanas;
int main(){
	f1();
	return 0;
}
void f1(){
	
    cout << "Introduce el capital a depositar: ";
    cin >> capital;
    cout << "Introduce la tasa de interés (en porcentaje): ";
    cin >> tasa_interes;
    cout << "Introduce la duración del depósito en semanas: ";
    cin >> duracion_semanas;
    int dias = duracion_semanas * 7;
    for (int i = 1; i <= dias; ++i) {
        capital += (capital * tasa_interes / 100) / 365;
    }
    cout << "El capital total acumulado al final del período es: $" << capital;
	}
