/*
Desarrollar un algoritmo/programa que calcule la media aritmética de “n” números. Luego mostrar en
pantalla la cantidad de números registrados*, el valor acumulado* y la media aritmética. 
 */
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
float n;
int m = 0;
int resultado, resultado2;
void f1();
int main(){
	f1();
	return 0;
}
void f1(){
	
	do{
		cout<<"Digite un numero: "; cin>>n;
		if(n>0){
			m++;
			
		resultado2 += n;
		}
	}while(n != 0);
	cout<<" La cantidad de numeros registrados es: "<<m<<endl;
	resultado = resultado2/m;
	cout<<" La media aritmetica de los numeros ingresados es: "<<resultado<<endl;
	cout<<" La suma de los digitos ingresados es: "<<resultado2<<endl;
	}
