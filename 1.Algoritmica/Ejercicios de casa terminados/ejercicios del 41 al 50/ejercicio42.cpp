/*
 Un científico desea que un algoritmo le ayude en su trabajo analizándole tres valores que
se suministran, para determinar si los dos primeros son las medidas de una figura
conocida. Para ello, calcule el área de cada una de las figuras que se mencionan a
continuación y compárela con el tercer valor suministrado; si hay coincidencia, imprima un
mensaje que indique de qué figura se trata. Las figuras a analizar son: A) Triángulo: b X h /
2 - Valor1 y Valor2 son base y altura. B) Círculo: pi X r2 - Valor1 y Valor2 son radio y pi y C)
Rectángulo: b X h - Valor1 y Valor2 son base y altura.
*/
#include <iostream>
#include <math.h>
using namespace std;
//funciones
float f1(),f2(),f3(),menu();
//variables
float valor_1,valor_2,tri,cir,rec,pi = 3.14;
int op;
int main(){
	cout<<"************************Programa de ayuda*********************"<<endl;
	cout<<" 1.) Triángulo"<<endl; 
	cout<<" 2.) Círculo  "<<endl;
	cout<<" 3.) Rectángulo  "<<endl;
	cout<<"**************************************************************"<<endl;
	cout<<"Ingrese una opcion del menu: ";cin>>op;
	system("clear");
	cout<<menu()<<endl;
	return 0;
}
float f1(){
	tri = (valor_1 * valor_2) / 2;
	return tri;
	}
float f2(){
	cir = pi * pow(valor_1,2);
	return cir;
	}
float f3(){
	rec = (valor_1 * valor_2);
	return rec;
	}
float menu(){ 
	switch(op){
		case 1: 
		cout<<"Calcular el area de un triangulo:"<<endl;
		cout<<"Ingrese la base del triangulo: ";cin>>valor_1;
		cout<<"Ingrese la altura del triangulo: ";cin>>valor_2;
		cout<<"El area del triangulo es de: "<<f1()<<endl;break;
		case 2:
		cout<<"Calcular el area de un circulo:"<<endl;
		cout<<"Ingrese el radio: ";cin>>valor_1;
		cout<<"El area del circulo es: "<<f2()<<endl;break;
		case 3:
		cout<<"calcular el area del rectangulo: "<<endl;
		cout<<"Ingrese la base: ";cin>>valor_1;
		cout<<"Ingrese la altura: ";cin>>valor_2;
		cout<<"El area del rectangulo es: "<<f3()<<endl;break;
		default: cout<<"Ingrese una opcion valida del menu "<<endl;
		}
	return 0;
	}


