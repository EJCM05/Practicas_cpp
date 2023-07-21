/*
Realizar un algoritmo/programa que nos permita poder almacenar información para 5 trabajadores,
mediante el uso de un arreglo que contenga la siguiente información: Número de Cédula de Identidad del
Trabajador, Edad del Trabajador, Cantidad de Hijos del Trabajador, Años Trabajando en la
Empresa y Sueldo del Trabajador. Posteriormente listar toda la información almacenada en el arreglo
bidimensional de dos formas: 1-. Mostrando listado individual para cada trabajador. 2-. Mostrando una
tabla con su respectivo encabezado de títulos y que contenga toda la información completa de todos los
trabajadores.
 */ 

#include <iostream>
using namespace std;
//funciones
void f1();
int f2();
//variables;
 string trabajadores[5][5];
int main(int argc, char **argv){
		cout<<f2();
	return 0;
}
int f2(){
	f1();
	return 0;
	}

void f1(){
	
    for (int i = 0; i < 5; i++) {
        cout << "Introduce la información del trabajador " << i + 1 << ":" << endl;
        cout << "Número de Cédula de Identidad: ";
        cin >> trabajadores[i][0];
        cout << "Edad: ";
        cin >> trabajadores[i][1];
        cout << "Cantidad de Hijos: ";
        cin >> trabajadores[i][2];
        cout << "Años Trabajando en la Empresa: ";
        cin >> trabajadores[i][3];
        cout << "Sueldo: ";
        cin >> trabajadores[i][4];
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Información del trabajador " << i + 1 << ":" << endl;
        cout << "Número de Cédula de Identidad: " << trabajadores[i][0] << endl;
        cout << "Edad: " << trabajadores[i][1] << endl;
        cout << "Cantidad de Hijos: " << trabajadores[i][2] << endl;
        cout << "Años Trabajando en la Empresa: " << trabajadores[i][3] << endl;
        cout << "Sueldo: " << trabajadores[i][4] << endl;
        cout << endl;
    }
    cout << endl;
    cout << "Tabla con la información completa de todos los trabajadores:" << endl;
    cout << "Cédula\tEdad\tHijos\tAños\tSueldo" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << trabajadores[i][j] << "\t";
        }
        cout << endl;
    }
	}

