/*
 Desarrollar un algoritmo/programa que permita mostrar en pantalla el planeta que
corresponde al nombre del día de la semana, en función del siguiente criterio: El lunes,
corresponde a la Luna. El martes a Marte. El miércoles a Mercurio. El jueves a Júpiter. El
viernes a Venus. El sábado a Saturno y el domingo al Sol. Deberá presentar el siguiente
menú:
ORIGEN DE LOS NOMBRES DE LA SEMANA
1 -. Lunes
2 -. Martes
3 -. Miércoles
4 -. Jueves
5 -. Viernes
6 -. Sábado
7 -. Domingo
El reporte de decir como ejemplo: El usuario selecciona la opción 3, luego sale en
pantalla: El día miércoles proviene del nombre del Planeta Mercurio.
 */
#include <iostream>
using namespace std;
//funciones
void f1();
//variables
int op;
int main(){
	f1();
	
	return 0;
}
void f1(){
	cout<<"Digite un numero para dar el dia de la semana y el planeta que corresponde: "<<endl;
	cin>>op;
	switch(op){
		case 1:
		cout<<"El dia es Lunes proviene del planeta La Luna "<<endl;
		break;
		case 2:
		cout<<"El dia es Martes proviene del Planeta  Marte "<<endl;
		break;
		case 3:
		cout<<"El dia es Miercoles proviene del Planeta Mercurio "<<endl;
		break;
		case 4:
		cout<<"El dia es Jueves proviene del Planeta Jupiter "<<endl;
		break;
		case 5:
		cout<<"El dia es Viernes proviene del Planeta Venus "<<endl;
		break;
		case 6:
		cout<<"El dia es Sabado proviene del Planeta Saturno "<<endl;
		break;
		case 7:
		cout<<"El dia es Domingo proviene del Planeta el Sol "<<endl;
		break;
		default: cout<<"digite un numero entre 1 y 7"<<endl;
		}
	}
