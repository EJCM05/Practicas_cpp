/*Dada la velocidad en km/h y el número de minutos transcurridos, determinar la distancia
recorrida.
D=v*t
*/
#include<iostream>
#include<conio.h>
using namespace std;

float formula(float v,float t);
float velocidad,tiempo;;
int main(){
	cout<<"Ingrese la velocidad en Km/h"<<endl;
	cin>>velocidad;
	cout<<"Ingrese el tiempo transcurrido en minutos "<<endl;
	cin>>tiempo;
	cout<<"La distancia recorrida es de = "<<formula(velocidad,tiempo);
	getch();
	return 0;
}
float formula(float v,float t){
	float d = 0;
	d=v*t;
	return d;
}

