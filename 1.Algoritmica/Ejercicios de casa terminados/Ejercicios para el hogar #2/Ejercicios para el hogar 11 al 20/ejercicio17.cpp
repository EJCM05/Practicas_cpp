/*Calcular el numero de pulsaciones que una persona debe tener por cada 10 segundos de
ejercicio, si la formula es: num. pulsaciones = (220 - edad)/10*/
#include<iostream>
#include<conio.h>
using namespace std;
//area de funciones
	int formula();
//area de variables
	int num_pulsaciones, edad;
int main(){
	cout<<"Calcular el numero de pulsaciones cada 10 segundos"<<endl;
	getch();
	cout<<"Por favor ingrese su edad: "<<endl;
	cin>>edad;
	cout<<"El numero de pulsaciones recomendado segun su edad es de= "<<formula()<<endl;
	getch();
	return 0;
}
	int formula(){
		int fc_max;
		fc_max = (220 - edad)/10;
		return fc_max;
	}
