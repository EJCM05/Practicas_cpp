	/*Un corredor reporta el numero de minutos que corre en un año. Escribir un programa que
	de como salida la cantidad de tiempo equivalente en meses, semanas, días, horas y
	minutos.*/
#include<iostream>
#include<conio.h>
using namespace std;
//declaracion de funciones
float trans(float m,float s,float d,float h);
//area de variables globales
float minutos_recorridos,meses = 43800,semanas =10080 ,dias= 1440 ,horas =60;
//funcion principal main
int main(){
	cout<<"Ingrese la cantidad de minutos Recorridos en 1 año: "<<endl;
	cin>>minutos_recorridos;
	cout<<trans(meses,dias,semanas,horas)<<endl;
	getch();
	return 0;
}
float trans(float m,float s,float d,float h){
	m = minutos_recorridos / meses;
		cout<<"el tiempo transcurrido en meses es de: "<<m<<endl;
	s = minutos_recorridos / semanas;
		cout<<"el timpo transcurrido en semanas es de: "<<s<<endl;
	d = minutos_recorridos / dias;
		cout<<"el tiempo transcurrido en dias es de: "<<d<<endl;
	h = minutos_recorridos / horas;
		cout<<"el tiempo transcurrido en horas es de: "<<h<<endl;
		return 0;
}
