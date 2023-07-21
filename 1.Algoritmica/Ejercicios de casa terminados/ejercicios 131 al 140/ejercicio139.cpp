/*
En una empresa de ―n‖ cantidad de empleados, tiene la siguiente información para cada
trabajador: la cédula (validar que no se repitan los números de cédula al momento de
efectuar en registro de los trabajadores), el salario base mensual, la evaluación de
idoneidad (B, R, M) con carácter anual y las ausencias en todos los meses del año. Se sabe
que si la evaluación es B y que no tiene ausencias por 9 o más meses del año y el
porcentaje de ausencias en caso de que las tenga no supere el 10% del mes, el trabajador
cobrará un 30% más del salario básico por concepto de estimulación. Realizar un
algoritmo/programa que permita determinar mediante arreglos unidimensionales, lo
siguiente:
a. ¿Cuánto dinero debe pagar la empresa por concepto de estimulación?
b. Cuáles de los trabajadores evaluados en M tiene menor salario.
c. El mes con mayor cantidad de ausencias.
d. Generar e Imprimir un nuevo vector con los trabajadores que deben cobrar la
estimulación y la cantidad que debe recibir el pago por este concepto, ordenada de
mayor a menor.
e. Porcentaje de trabajadores evaluados en B. 
 */


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//funciones
void f1();
//variables
   struct Empleado {
    int cedula;
    double salario_base;
    char evaluacion;
    vector<int> ausencias;
    double pago_estimulacion;
};
bool comparar_por_pago_estimulacion(const Empleado& a, const Empleado& b){
    return a.pago_estimulacion > b.pago_estimulacion;
}

int main(int argc, char **argv){
	f1();
	return 0;
	}
void f1(){

    int n;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;
    vector<Empleado> empleados(n);
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la cédula del empleado " << i+1 << ": ";
        cin >> empleados[i].cedula;
        for (int j = 0; j < i; j++) {
            if (empleados[j].cedula == empleados[i].cedula) {
                cout << "Error: cédula repetida. Ingrese una cédula válida: ";
                cin >> empleados[i].cedula;
                j = -1;
            }
        }
        cout << "Ingrese el salario base mensual del empleado " << i+1 << ": ";
        cin >> empleados[i].salario_base;
        cout << "Ingrese la evaluación de idoneidad del empleado " << i+1 << " (B, R, M): ";
        cin >> empleados[i].evaluacion;
        empleados[i].ausencias.resize(12);
        for (int j = 0; j < 12; j++) {
            cout << "Ingrese las ausencias del empleado " << i+1 << " en el mes " << j+1 << ": ";
            cin >> empleados[i].ausencias[j];
        }
        empleados[i].pago_estimulacion = 0.0;
    }
    double total_estimulacion = 0.0;
    for (int i = 0; i < n; i++) {
        if (empleados[i].evaluacion == 'B') {
            int meses_sin_ausencias = 0;
            double porcentaje_ausencias = 0.0;
            for (int j = 0; j < 12; j++) {
                if (empleados[i].ausencias[j] == 0) meses_sin_ausencias++;
                porcentaje_ausencias += empleados[i].ausencias[j] / 30.0;
            }
            porcentaje_ausencias /= 12.0;
            if (meses_sin_ausencias >= 9 && porcentaje_ausencias <= 0.1) {
                empleados[i].pago_estimulacion = empleados[i].salario_base * 0.3;
                total_estimulacion += empleados[i].pago_estimulacion;
            }
        }
    }
    cout << "La empresa debe pagar " << total_estimulacion << " por concepto de estimulación." << endl;
    double menor_salario = empleados[0].salario_base;
    for (int i = 1; i < n; i++) {
        if (empleados[i].evaluacion == 'M' && empleados[i].salario_base < menor_salario) {
            menor_salario = empleados[i].salario_base;
        }
    }
    cout << "Los trabajadores evaluados en M con menor salario son: ";
    for (int i = 0; i < n; i++) {
        if (empleados[i].evaluacion == 'M' && empleados[i].salario_base == menor_salario) {
            cout << empleados[i].cedula << " ";
        }
    }
    cout << endl;
    int mes_mayor_ausencias = 0, total_ausencias_mes_mayor = 0;;
    for (int j = 0; j < 12; j++) {
        int total_ausencias_mes = 0;
        for (int i = 0; i < n; i++) {
            total_ausencias_mes += empleados[i].ausencias[j];
        }
        if (total_ausencias_mes > total_ausencias_mes_mayor) {
            mes_mayor_ausencias = j;
            total_ausencias_mes_mayor = total_ausencias_mes;
        }
    }
    cout << "El mes con mayor cantidad de ausencias es: " << mes_mayor_ausencias+1 << endl;
    sort(empleados.begin(), empleados.end(), comparar_por_pago_estimulacion);
    cout << "Trabajadores que deben cobrar la estimulación (ordenados de mayor a menor):" << endl;
    for (int i = 0; i < n; i++) {
        if (empleados[i].pago_estimulacion > 0) {
            cout << "Cédula: " << empleados[i].cedula << ", pago por estimulación: " << empleados[i].pago_estimulacion << endl;
        }
    }
    int trabajadores_B = 0;
    for (int i = 0; i < n; i++) {
        if (empleados[i].evaluacion == 'B') trabajadores_B++;
    }
    double porcentaje_trabajadores_B = (double)trabajadores_B / n * 100.0;
    cout << "El porcentaje de trabajadores evaluados en B es: " << porcentaje_trabajadores_B << "%" << endl;
    
	}
