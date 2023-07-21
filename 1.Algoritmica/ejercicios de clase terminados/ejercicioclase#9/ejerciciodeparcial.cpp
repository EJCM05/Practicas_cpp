/*ingresar por teclado un valor numérico entero que corresponde al nombre de un año.
Mostrar en pantalla si el año registrado es bisiesto. Un año es bisiesto si el año es divisible
por 4 y no es divisible por 100 o es divisible por 400.	
* eber colmenares 31.060.609
* */
#include <iostream>
using namespace std;
//funciones
void f1();
void inicio();
//variables
int fecha, op;
char letra;
int main(){
	do{
	inicio();}while(1000);
	return 0;
}
void inicio(){
	cout<<"              Menu principal                   "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"    1.calcular si el año ingresado es bisiesto "<<endl;
	cout<<"    2.salir del programa                       "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cin>>op;
	if(op == 1){
	system("clear");
	cout<<"programa para determinar si un año es bisiesto:"<<endl;
	cout<<"Ingrese el año que desea saber: "<<endl;cin>>fecha;
	f1();}
	else if(op == 2 ){
		exit(0);
		}
	else{
		system("clear");
		inicio();
		}
	}
	
void f1(){
	if((fecha%4 == 0 && fecha % 100 != 0)|| fecha % 400 == 0){
	cout<<"El año "<<fecha<<" Es bisiesto"<<endl;
}
	else{
	system("clear");
    cout<<"El año "<<fecha<<" No es bisiento"<<endl<<endl;
	}
	return inicio();
	}
	

