
/*
Realice un algoritmo/programa que permita la lectura de los datos y el cálculo de las
estadísticas.

 el programa tiene relacion a ingresar una cantidad de personas decididas por el usuario
 * en el cual se va a calcular su edad, en el año actual basandose solamente en su año de nacimiento
 */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//funciones
void f1();
//variables
int cantidad_p, sum= 0;
//structuras
struct persona{
	int fecha_n;
	}p1;

int main() {
    f1();
    return 0;
	}
void f1(){
	cout<<"Ingrese la cantidad de personas por el cual desea saber su edad: ";cin>>cantidad_p;
	system("clear");
	for(int i=1;i<=cantidad_p;i++){
		cout<<"Persona "<<i<<"/ Ingrese el año de su nacimiento: ";
		cin>>p1.fecha_n;
		sum = 2023 - p1.fecha_n;		
		cout<<"la fecha de nacimiento de la persona "<<i<<" Es: "<<sum<<endl;
		cin.get();
		}
	
	}
