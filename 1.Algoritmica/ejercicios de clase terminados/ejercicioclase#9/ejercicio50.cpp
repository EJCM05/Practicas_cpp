/*
Desarrollar un algoritmo/programa, que permita registrar en un vector las 5 calificaciones de un estudiante.
con notas comprendidas entre 1 y 20 puntos. presentar en pantalla todas las notas del estudiante, el
acumulado, la calificación definitiva y su valoración cualitativa.
 */
#include <iostream>
//funciones 
void f1();
//variables
int notas[5],n;
int sum=0;
using namespace std;
int main(){
	f1();
	return 0;
}
void f1(){
	for(int i=1;i<=5;i++){
		notas[i]= i+1;
		cout<<"Ingrese la nota "<<i<<endl;
		cin>>notas[i];
		}
	for(int i=1;i<=5;i++){
	cout<<"La nota numero "<<i<<" Es " <<notas[i]<<endl;
	sum += (notas[i]/5);
		}	
	cout<<"la nota definitiva es: "<<sum;
	}


