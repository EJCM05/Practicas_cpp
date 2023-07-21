/*La Empresa ―La Bien Pagada‖, desea un programa que permita ejecutar el cálculo del
Sueldo Neto a Cobrar por un empleado que posee adicional al sueldo base, una serie de
asignaciones y deducciones. Las asignaciones se calculan por: Cantidad de Horas Extras
Diurnas, cantidad de horas extras nocturnas, cantidad de domingos laborados, cantidad de
días feriados laborados. Dichas asignaciones deben convertirse en Bolívares, tomando en
consideración los siguientes aspectos: el valor de la hora extra diurna se calcula con un
35% de incremento sobre el valor de la hora normal, el valor de la hora extra nocturna se
calcula con un 55% de incremento sobre el valor de la hora normal, los domingos de pagan
al doble del valor de un día normal y los feriados a razón del 3,5% del valor de un día
normal. Las deducciones se calculan sobre el sueldo base y son las siguientes: Seguro
Social 3%, IPASME 7%, Ley de Política y Ahorro Habitacional 6,35%, Caja de Ahorros 10%
y Sindicato 7%. Presentar en Pantalla un listado con: Cédula del Trabajador, Primer
Apellido del Trabajador, Segundo Apellido del Trabajador, Primer Nombre del Trabajador,
Segundo Nombre del Trabajador, Edad del Trabajador, Fecha de Ingreso a la Empresa,
Todas sus asignaciones, Todas sus Deducciones y el Sueldo Neto a Cobrar. */

#include <iostream>
#include <cstring>
using namespace std;

float calc_hrsdiarias(), calc_hrsdiar(), calc_hrsnoctur(), calc_domlab(), calc_diasfer(), total_asig(), calc_ss(), calc_ipasme(), calc_habit(), calc_ahorros(), calc_sindicato(), total_deduc(), sueldo_total();
float sueldo_base, ext_diur, ext_noctur, dom_lab, dias_fer, seguro_social, ipasme, habit, ahorro, sindicato, hrs_diarias;
int ci, edad;
char name1[20], name2[20], apellido1[20], apellido2[20], fecha_ing[20];

int main(){
	
	cout<<"Ingrese: "<<endl<<endl;
	cout<<"Primer Nombre: "; cin.getline(name1, 20, '\n');
	cout<<"Segundo Nombre: "; cin.getline(name2, 20, '\n');
	cout<<"Primer Apellido: "; cin.getline(apellido1, 20, '\n');
	cout<<"Segundo Apellido: "; cin.getline(apellido2, 20, '\n');
	cout<<"Fecha de Ingreso: "; cin.getline(fecha_ing, 20, '\n');
	cout<<"Cedula De Identidad: "; cin>>ci;
	cout<<"Edad: "; cin>>edad;
	cout<<"Sueldo Base: "; cin>>sueldo_base;
	
	cout<<"Ademas cuenta con las siguientes asignaciones: "<<endl<<endl;
	cout<<"Horas Extras Diurnas Laboradas: "; cin>>ext_diur;
	cout<<"Horas Extras Nocturnas Laboradas: "; cin>>ext_noctur;
	cout<<"Domingos Laboradas: "; cin>>dom_lab;
	cout<<"Dias Feriados Laborados: "; cin>>dias_fer;
	
	cout<<"****************************************************************************************"<<endl<<endl;
	
	cout<<"Trabajador: "<<endl;
	cout<<""<<apellido1<<" "<<apellido2<<endl;
	cout<<""<<name1<<" "<<name2<<endl;
	cout<<"Cedula: "<<ci<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Ingreso: "<<fecha_ing<<endl;
	
	cout<<"*****************************************************************************************"<<endl<<endl;
	
	cout<<"***************** Asignaciones: *******************"<<endl<<endl;
	cout<<"Horas Extras Diurnas: "<<calc_hrsdiar()<<" bs"<<endl;
	cout<<"Horas Extras Nocturnas: "<<calc_hrsnoctur()<<" bs"<<endl;
	cout<<"Domingos Laborados: "<<calc_domlab()<<" bs"<<endl;
	cout<<"Dias Feriados Laborados: "<<calc_diasfer()<<" bs"<<endl;
	cout<<"Total: "<<total_asig()<<" bs"<<endl<<endl;
	
	cout<<"******************* Deducciones: ******************"<<endl<<endl;
	cout<<"Seguro Social: "<<calc_ss()<<" bs"<<endl;
	cout<<"IPASME: "<<calc_ipasme()<<" bs"<<endl;
	cout<<"Ley de Politica y Ahorro Habitacional: "<<calc_habit()<<" bs"<<endl;
	cout<<"Caja de Ahorros: "<<calc_ahorros()<<" bs"<<endl;
	cout<<"Sindicato: "<<calc_sindicato()<<" bs"<<endl;
	cout<<"Total: "<<total_deduc()<<" bs"<<endl<<endl;
	
	cout<<"*************** Sueldo Total: "<<sueldo_total()<<" bs"<< " ****************************"<<endl<<endl;
	return 0;
}

// Asignaciones: 
float calc_hrsdiarias(){
	hrs_diarias = sueldo_base / 7;
	hrs_diarias /= 24;
	return hrs_diarias;
}

float calc_hrsdiar(){
	float c;
	c =  calc_hrsdiarias() * 35 / 100;
	c = c + calc_hrsdiarias();
	c = c * ext_diur;
	return c;
}

float calc_hrsnoctur(){
	float c;
	c = calc_hrsdiarias() * 55 / 100;
	c = c + calc_hrsdiarias();
	c = c * ext_noctur;
	return c;
}

float calc_domlab(){
	float c; 
	c = (calc_hrsdiarias() * 24) * 2;
	c = c * dom_lab;
	return c;
}

float calc_diasfer(){
	float c;
	c = (calc_hrsdiarias() * 24) * 3.5 / 100;
	c = c * dias_fer;
	return c;
}

float total_asig(){
	float c;
	c = calc_hrsdiar() + calc_hrsnoctur() + calc_domlab() + calc_diasfer();
	return c;
}

// Deducciones: 

float calc_ss(){
	float c;
	c = sueldo_base * 3 / 100;
	return c;
}

float calc_ipasme(){
	float c;
	c = sueldo_base * 7 / 100;
	return c;
}

float calc_habit(){
	float c;
	c = sueldo_base * 6.35 / 100;
	return c;
}

float calc_ahorros(){
	float c;
	c = sueldo_base * 10 / 100;
	return c;
}

float calc_sindicato(){
	float c;
	c = sueldo_base * 7 / 100;
	return c;
}

float total_deduc(){
	float c; 
	c = calc_ss() + calc_ipasme() + calc_habit() + calc_ahorros() + calc_sindicato();
	return c;
}

float sueldo_total(){
	float c;
	c = sueldo_base + total_asig() - total_deduc();
	return c;
}

