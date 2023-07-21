/*ingresar por teclado un valor numérico entero que corresponde al nombre de un año.
Mostrar en pantalla si el año registrado es bisiesto. Un año es bisiesto si el año es divisible
por 4 y no es divisible por 100 o es divisible por 400.	*/
#include <iostream>
using namespace std;
//funciones
int f1();
//variables
int año;
int main(){
	cout<<"programa para determinar si un año es bisiesto:"<<endl;
	cout<<"Ingrese el año que desea saber: "<<endl;cin>>año;
	cout<<f1()<<endl;
	return 0;
}
int f1(){
	if( (año%4 == 0 && año % 100 != 0)|| año % 400 == 0){
	cout<<"El año "<<año<<" Es bisiesto"<<endl;
}
else{
    cout<<"El año "<<año<<" No es bisiento"<<endl;
}	
	return 0;
	}
	

