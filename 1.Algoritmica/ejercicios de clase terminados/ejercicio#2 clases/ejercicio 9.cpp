/*
Desarrollar un algoritmo/programa que permita registrar tres trabajadores con los siguientes datos: cedula
del trabajador, sueldo base, edad, sexo. Si el trabajador tiene mas de 60 años se le otorgara un bono del 
27,35% sobre el sueldo base. Presentar un listado que muestre toda la informacion de los trabajadores, con
el sueldo base, el bono asignado y el sueldo neto a cobrar.
*/

#include <iostream>
#include <string.h>

using namespace std;

float edad1, edad2, edad3;
char sexo1[10];
char sexo2[10];
char sexo3[10];
int cedula1, cedula2, cedula3;
float sueldo1, sueldo2, sueldo3, M_edad1, M_edad2, M_edad3;
float registro();

int main()
{
	cout<<"Trbajador (1) registre su numero de cedula: "; cin>>cedula1;
	cout<<"\nTrabajdor (2) registre su numero de cedula: "; cin>>cedula2;
	cout<<"\nTrabajdor (3) registre su numero de cedula: "; cin>>cedula3;
	
	cout<<"\nTrabjador (1) registre el sueldo base que quiere tener: "; cin>>sueldo1;
	cout<<"\nTrabjador (2) registre el sueldo base que quiere tener: "; cin>>sueldo2;
	cout<<"\nTrabjador (3) registre el sueldo base que quiere tener: "; cin>>sueldo3;
		
	M_edad1 = edad1;
	M_edad2 = edad2;
	M_edad3 = edad3;
	
	cout<<"\nTrabajador (1) registre su edad: "; cin>>edad1;
	cout<<endl;

	if(edad1 >= 60){
		cout<<"\nTrabajador (1) Ud ha recibido un bono del 27.35% por ser mayor a 60 años";
			cout<<endl;
		}
	
	cout<<"\nTrabajador (2) registre su edad: "; cin>>edad2;
	cout<<endl;
	
	if(edad2 >= 60){
		cout<<"\nTrabajador (2) Ud ha recibido un bono del 27.35% por ser mayor a 60 años";
			cout<<endl;
		}
	
	cout<<"\nTrabajador (3) registre su edad: "; cin>>edad3;
	cout<<endl;

	if(edad3 >= 60){
		cout<<"\nTrabajador (3) Ud ha recibido un bono del 27.35% por ser mayor a 60 años";
		cout<<endl;
		}
		cout<<endl;
		
	cout<<"\nTrabajador (1) registre su tipo de sexo [M-F]: "; cin>>sexo1;
	cout<<"\nTrabajador (2) registre su tipo de sexo [M-F]: "; cin>>sexo2; 
	cout<<"\nTrabajador (3) registre su tipo de sexo [M-F]: "; cin>>sexo3;
	
	system("clear");
	
	cout<<registro();
	
	cout<<"\nTrabajador (1) su numero de cedula es: "<<cedula1;
	cout<<"\nTrabajador (2) su numero de cedula es: "<<cedula2;
	cout<<"\nTrabajador (3) su numero de cedula es: "<<cedula3;
	
	cout<<"\nTrabjador (1) su edad es: "<<edad1;
	cout<<"\nTrabjador (2) su edad es: "<<edad2;
	cout<<"\nTrabjador (3) su edad es: "<<edad3;
	
	cout<<"\nTrabajador (1) su tipo de sexo es: "; cout<<sexo1;	
	cout<<"\nTrabajador (2) su tipo de sexo es: "; cout<<sexo2;	
	cout<<"\nTrabajador (3) su tipo de sexo es: "; cout<<sexo3;
	
	
	return 0;
}
float registro(){
	
	float bono = 02735;
	float porcentaje_ganado, porcentaje_ganado2, porcentaje_ganado3;
	
	porcentaje_ganado = sueldo1 * bono;
	porcentaje_ganado2 = sueldo2 * bono;
	porcentaje_ganado3 = sueldo3 * bono;
	
	cout<<"\nSi el trabajador (1) tiene 60 años resive: "<<porcentaje_ganado;
	cout<<"\nSi el trabajador (2) tiene 60 años resive: "<<porcentaje_ganado2;
	cout<<"\nSi el trabajdor (3) tiene 60 años resive: "<<porcentaje_ganado3;
	
	return 0;
	}

