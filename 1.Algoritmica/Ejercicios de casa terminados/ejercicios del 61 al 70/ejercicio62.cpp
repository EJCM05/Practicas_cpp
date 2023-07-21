/*
Realizar un algoritmo/programa que permita leer 10 número, mediante el uso de una sola
variable de lectura, al final presentar la sumatoria de los números leídos y su promedio.
 */


#include <iostream>
using namespace std;
//variables
void f1();
//funciones
int n,re,re2;
int main(){
	f1();
	
	return 0;
}
void f1(){
	for(int i=1;i<=10;i++){
	cout<<"ingrese un numero: "<<endl;cin>>n;
	re += n;
}
	re2= re/10;	cout<<"la suma de los numeros es: "<<re<<endl;
	cout<<"el promedio es: "<<re2;
	
	
	}
