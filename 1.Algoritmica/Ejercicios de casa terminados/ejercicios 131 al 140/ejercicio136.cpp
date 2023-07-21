/*
Una casa de cambio desea obtener estadísticas semanales (día por día) de la ventana de
dólares, las estadísticas a obtener son las siguientes: Para esto se cuenta con los reportes
de venta de la semana cada reporte tiene el número del día en que se hizo la venta (1 a 6,
1=lunes) y la cantidad de dólares vendidos. Nota: Suponga que el cliente compra en Bolívares 
y se debe hacer la venta en dólares, puede haber varias ventas de un mismo día,
pueden haber días sin ventas. Modelo del reporte a presentar:

					REPORTE DE LA SEMANA
			====================================
			Día  		Ventas  	Dólares
			====================================
			lunes		xxxxxx		xxxxxx
			martes		xxxxxx		xxxxxx
			miércoles 	xxxxxx		xxxxxx
			jueves		xxxxxx		xxxxxx
			viernes		xxxxxx		xxxxxx
			sábado		xxxxxx		xxxxxx
			====================================
 */


#include <iostream>
#include <vector>
#include <string>
using namespace std;
//variables
void f1();
//funciones
 const int DIAS = 6;
    vector<string> nombres_dias = {"lunes", "martes", "miércoles", "jueves", "viernes", "sábado"};
    vector<int> ventas_dias(DIAS, 0);
    vector<int> dolares_dias(DIAS, 0);
    int dia, dolares;
int main(int argc, char **argv){
	f1();
	
	return 0;
	}
void f1(){
    cout << "Ingrese los reportes de venta (día y dólares vendidos):" << endl;
    while (cin >> dia >> dolares) {
        ventas_dias[dia-1]++;
        dolares_dias[dia-1] += dolares;
    }
    cout << "\t\t\t	REPORTE DE LA SEMANA" << endl;
    cout << "\t\t	====================================" << endl;
    cout << "\t\t	Día  \t\tVentas  \tDólares" << endl;
    cout << "\t\t	====================================" << endl;
    for (int i = 0; i < DIAS; i++) {
    cout << "\t\t" << nombres_dias[i] << "\t\t" << ventas_dias[i] << "\t\t" << dolares_dias[i] << endl;
    }
    cout << "\t\t====================================" << endl;
	
	}

