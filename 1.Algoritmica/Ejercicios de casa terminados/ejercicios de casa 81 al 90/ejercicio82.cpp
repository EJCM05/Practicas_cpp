/*
 Diseñe un pseudocódigo/código que imprima la fecha en palabras a partir de la
representación siguiente: S, DD, MM, AAAA. Donde: S = Día de la semana, 1 a 7 (1 =
lunes; 2 = martes; etc.). DD = Día del mes, 1 a 30 ó 31, según el mes. Tener presente que
Febrero tiene 28 días, pero cuando es bisiesto tiene 29 días. AAAA = Cuatro últimas cifras
del año. Presentar la fecha de la siguiente forma: Jueves, 04 de agosto de 2016. Continuar
solicitando fechas, hasta que el usuario responda que no desea mostrar más fechas.
 */
#include <iostream>
#include <ctime>
using namespace std;
//Funciones y variables
void f1();
string dias[] = {"Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado"};
string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
int dia, mes, anio;
int bisiesto;
int continuar = 1;

int main(){
	f1();
	return 0;}
void f1(){
    while (continuar == 1){
        cout << "\nIngrese el día de la semana (1-7): ";
        cin >> dia;
        cout << "\nIngrese el día del mes (1-31): ";
        cin >> mes;
        cout << "\nIngrese el año (AAAA): ";
        cin >> anio;
        if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
            bisiesto = 1;
        else
            bisiesto = 0;
        cout << "\nLa fecha es: " << dias[dia - 1] << ", ";
        if (mes == 2)
        {
            if (bisiesto == 1 && mes == 2 && dia > 29)
                cout << "\nEl año es bisiesto. Febrero tiene 29 días.";
            else if (bisiesto == 0 && mes == 2 && dia > 28)
                cout << "\nEl año no es bisiesto. Febrero tiene 28 días.";
            else
                cout << mes << " de " << meses[mes - 1] << " de " << anio;
        }
        else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)
            cout << "\nEl mes tiene solo 30 días.";
        else if (dia > 31)
            cout << "\nEl mes tiene solo 31 días.";
        else
            cout << dia << " de " << meses[mes - 1] << " de " << anio;
        cout << "\n\n¿Desea mostrar más fechas? (1 = Sí / Otro número = No): ";
        cin >> continuar;
    }
    
}
