/*Desarrolle un algoritmo/programa: 
Que permita ejecutar el cálculo de la distancia recorrida por un vehículo
que posee una velocidad constante (m/s), durante un tiempo -T? (seg),asumir
que se trata de un movimiento rectilíneo y uniforme; (En este caso la distancia
sería igual a la velocidad por el tiempo).*/

#include<iostream>
using namespace std;

int main(){
	float v,t,d,resultado=0;
	cout<<"Ingresa la velocidad del vehiculo en Mts:";cin>>v;
	cout<<"Ingresa el tiempo en Segundos: ";cin>>t;
	d=v*t;
	resultado=d;
	cout<<"La distancia recorrida en Mts/s es de:"<<resultado<<endl;
	return 0;
}
