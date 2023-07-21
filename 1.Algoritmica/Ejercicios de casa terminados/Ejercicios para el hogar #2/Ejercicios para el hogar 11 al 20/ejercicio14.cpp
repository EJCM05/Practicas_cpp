/*La empresa Hierro Gomez, trabaja con laminas de hierro para fabricar una pieza. Se
conoce que: (a) la lmina mide en promedio 4 metros de largo por 1.5 metros de ancho; (b)
la pieza a fabricar consume 0.5 metros en total. Se requiere que calcule y muestre cuantas
piezas se fabrican con una lamina y cuanto sera el desperdicio.*/
#include<iostream>
#include<conio.h>
using namespace std;
//area de funciones
	float formula();
//area de variables globales
	float total_la = 6, total_la2 = 0.5;
int main(){
	cout<<"la lamina mide en promedio 4 metros de largo por 1.5 metros de ancho"<<endl;
	cout<<"la pieza a fabricar consume 0.5 metros en total"<<endl;
	cout<<"Se requiere que calcule y muestre cuantas piezas se fabrican con una lamina y cuanto sera el desperdicio."<<endl<<endl;
	cout<<"El total de laminas que se extraen es de "<<formula(),cout<<" con 0% de desperdicio"<<endl;
	getch();
	return 0;
}
float formula(){
	float result;
	result = total_la / total_la2;
	return result;
}


