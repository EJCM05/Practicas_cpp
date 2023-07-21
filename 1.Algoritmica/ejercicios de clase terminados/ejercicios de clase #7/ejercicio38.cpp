/*
Desarrollar un algoritmo/programa que reciba por teclado una letra en minúscula y la muestre en
mayúscula. No debe transcribir ninguna letra con acentos. Para salir del programa debe presionar la
barra espaciadora y luego Intro.
 */

//tolower()

#include <iostream>
#include <ctype.h>
#include <cstring>
using namespace std;
//funciones
void f1();
//variables
char letra;
int main(){
	f1();
	
	return 0;
}
void f1(){
	do{
	cout<<"Ingrese una letra en minuscula para convertirla en mayuscula: ";cin>>letra;
	letra = toupper(letra);
	cout<<"la letra en mayuscula es: "<<letra<<endl ;
	cout << "... Presione la tecla < Enter > Para Continuar ... " << endl;
	getchar();
	getchar();
	system ("clear");
	}while(letra!="*");
	cout << " " << endl;
	}
