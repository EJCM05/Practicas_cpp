/*Escriba un algoritmo que permita convertir un valor ingresado en pies a metros.
La fórmula a utilizar es 1 pie = 30.48 cm.*/
#include<iostream>
using namespace std;
int main(){
	float valor, pie = 0.3048,var, resultado=0;
	cout<<"Ingrese el valor de pies para transformar a metros"<<endl;cin>>valor;
	var= pie*valor;
	cout<<"La transformacion en metros es de: "<<var,cout<<" Mts"<<endl;
	return 0;
}
