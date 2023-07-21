/*Elaborar un algoritmo/programa que permita calcular el sueldo neto a cobrar por un trabajador que tiene las
siguientes asignaciones: sueldo básico, bolívares en horas extras diurnas, bolívares en horas extras
nocturnas, bolívares en domingos laborados y bolívares en días feriados laborados... Adicionalmente tiene
las siguientes deducciones: Seguro Social el 7%, Fondo de Ahorro Habitacional (FAO) 4%, Paro Forzoso
1,5%. Presentar un reporte en pantalla que contenga:

a)Cédula del Trabajador.*
b)Todas Asignaciones.*
c)Sumatoria de Asignaciones.*
d)Todas las Deducciones.*
e)Sumatoria de las Deducciones.*
f)Sueldo Neto a Cobrar.  */
#include <iostream>
using namespace std;
float formula(), formula2(), formula3();
float seguro = 07, habitacional = 04, paro_forsozo = 015;
float total_asignaciones, total_deducciones, sueldo_total, sueldo_basico, diurnas_extras, nocturnas_extras, domingos_laborados, dias_feriados ;
int cedula_t;
int main(){
	cout<<"*******************************************************************"<<endl;
	cout<<"** Sueldo Neto a cobrar con todas las asignaciones y deducciones **"<<endl;
	cout<<"*******************************************************************"<<endl;
	cout<<"Ingrese su numero de cedula: "<<endl;cin>>cedula_t;
	cout<<"Ingrese su sueldo basico: "<<endl;cin>>sueldo_basico;
	cout<<"Ingrese su sueldo ganado en horas diurnas extras :"<<endl;cin>>diurnas_extras;
	cout<<"Ingrese su sueldo ganado en horas nocturnas extras :"<<endl;cin>>nocturnas_extras;
	cout<<"Ingrese la cantidad ganada en domingos laborados: "<<endl;cin>>domingos_laborados;
	cout<<"Ingrese la cantidad ganada en dias feriados laborados: "<<endl;cin>>dias_feriados;
	cout<<"********************************************************************"<<endl;
	cout<<"%PROCESANDO%"<<endl;
	cout<<"********************************************************************"<<endl<<endl;
	
	cout<<"su numero de cedula es C.I: "<<cedula_t<<endl;
	cout<<"sus asignaciones son : "<<endl;
	cout<<"sueldo basico: "<<sueldo_basico<<endl; 
	cout<<"sueldo ganado en horas extras diurnas: "<<diurnas_extras<<endl; 
	cout<<"sueldo ganado en horas extras nocturnas: "<<nocturnas_extras<<endl; 
	cout<<"sueldo ganado en domingos laborados: "<<domingos_laborados<<endl;
	cout<<"sueldo ganado en dias feriados laborados: "<<dias_feriados<<endl<<endl; 
	cout<<"****Sus deducciones son*****: "<<endl;
	cout<<"Seguro Social el 7%"<<endl;
	cout<<"Fondo de Ahorro Habitacional (FAO) 4%"<<endl;
	cout<<"Paro Forzoso 1,5%"<<endl<<endl;
	cout<<"*********Sumatoria de las Deducciones******* "<<endl<<endl;
	cout<<"El total de deducciones es de: "<<formula2()<<endl<<endl;
	cout<<"El sueldo neto a cobrar es de: "<<formula3()<<endl<<endl;
	return 0;
}
	float formula(){
	float total;
	total = sueldo_basico + diurnas_extras + nocturnas_extras + domingos_laborados + dias_feriados;
	return total;
	}
	float formula2(){
	float s1,s2,s3,s4;
	s1= formula() / seguro;
	s2= formula() / habitacional;
	s3= formula() / paro_forsozo;
	s4= s1 + s2 + s3;
	return s4;
	}

	float formula3(){
	float sueldo_total;
	sueldo_total = formula()- formula2();
	return sueldo_total;
	}
