/*Diseñar un algoritmo/programa que permita calcular el total de horas trabajadas por un funcionario que
posee un número determinado de horas extras diurnas y un número determinado de horas extras
nocturnas.*/
#include <iostream>
using namespace std;


float total_h = 0, diurnas_h, nocturnas_h;
float trabajadas();
int main(){
	cout<<"*******Numero total de horas trabajadas*****"<<endl;
	cout<<"Ingrese el numero de horas extras en horario Diurno. En horas :"<<endl;cin>>diurnas_h;
	cout<<"Ingrese el numero de horas extras en horario Nocturno. En horas :"<<endl;cin>>nocturnas_h;
	cout<<trabajadas();cout<<"h TOTAL DE HORAS TRABAJADAS";
	return 0;
}
float trabajadas(){
	total_h = diurnas_h + nocturnas_h;
	return total_h;
	}
