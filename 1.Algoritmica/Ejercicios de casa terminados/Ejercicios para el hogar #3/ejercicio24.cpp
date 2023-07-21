/*Se desea un algoritmo/programa que permita registrar la edad de un individuo, 
luego arrojar un mensaje que indique si es mayor de edad.*/
#include <iostream>
using namespace std;
//declaracion de funcion
float f1();
//area de variables globales-***********
float edad_p;
int main(){
	cout<<"***Confirmar la edad de un individuo***"<<endl;
	cout<<"Ingrese su edad: "<<endl;cin>>edad_p;
	cout<<""<<f1()<<endl;
	return 0;
}
//funcion
float f1(){
	if(edad_p >= 18){
		cout<<"Usted es mayor de edad!!!"<<endl;
		}
	else{
		cout<<"usted no es mayor de edad"<<endl;
		}
	return 0;
	}
