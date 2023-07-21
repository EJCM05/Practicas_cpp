/*Implementar un algoritmo que permita leer un valor entero. Suponer que el número es un
día de la semana y que 1 corresponde a lunes, 2 a martes, 3 a miércoles y así
sucesivamente. Mostrar el nombre del día de la semana que se está leyendo. Si el número
registrado es menor a 1 o superior a 7, mostrar un mensaje de error, que le indique al
usuario que los números a registrar deben ser entre 1 y 7, según corresponda a los días de
la semana.
 */
#include <iostream>
using namespace std;
//funciones
int f1();
//variables
int op;

int main(){
	cout<<"algoritmo para saber los dias de la semana"<<endl;
	cout<<"Digite un numero para saber que dia de la semana es: "<<endl;cin>>op;
	cout<<f1()<<endl;
	
	
	
	return 0;
}
int f1(){
	switch(op){
		case 1: cout<<"El dia de la semana selecionado es Lunes"<<endl;break; 
		case 2: cout<<"El dia de la semana selecionado es Martes"<<endl;break; 
		case 3: cout<<"El dia de la semana selecionado es Miercoles"<<endl;break; 
		case 4: cout<<"El dia de la semana selecionado es Jueves"<<endl;break; 
		case 5: cout<<"El dia de la semana selecionado es Viernes"<<endl;break; 
		case 6: cout<<"El dia de la semana selecionado es Sabado"<<endl;break; 
		case 7: cout<<"El dia de la semana selecionado es Domingos"<<endl;break; 
		default: cout<<"El numero ingresado es incorrecto"<<endl;
			  }
	return 0;
	}
