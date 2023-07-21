/*
Desarrollar un algoritmo/programa, que permita dar como entrada un valor numérico entre 1
y 31, para definir el día del mes, de igual forma un valor numérico entre 1 y 12 para definir
el mes que corresponde. Supongamos que el año a trabajar no es bisiesto y que todos los
meses tienen 31 días. Se debe mantener validado los días y los meses, mediante un
condicional doble. Presentar en pantalla el número del día que fue registrado con el nombre
del mes que corresponda. Ejemplo. Se registró como día 25 y como mes 10, el reporte
debe decir: ―Día 25 de OCTUBRE‖.
 */
#include <iostream>
#include <string>
using namespace std;
void f1();
int dia, mes;
string meses[12] = {"ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO", "JULIO", "AGOSTO", "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE"};

int main() {
    f1();
   
    return 0;
}
void f1(){
	 cout << "Ingresa el día: ";
    cin >> dia;
    cout << "Ingresa el mes: ";
    cin >> mes;

    if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12) {
        cout << "Día " << dia << " de " << meses[mes-1] << endl;
    } else {
        cout << "Día o mes inválido" << endl;
    }

	
	
	}
