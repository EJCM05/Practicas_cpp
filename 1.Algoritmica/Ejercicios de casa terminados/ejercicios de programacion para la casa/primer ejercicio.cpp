/*Dada una cantidad en Bolívares, obtener la equivalencia en dólares, asumiendo que la
unidad cambiaría es un dato desconocido. */
#include<iostream>
using namespace std;
int main(){
	float tasa, cantidad, dolar, bolivar, resultado = 0;
	cout<<"Ingrese la cantidad en bolivares: "<<endl;
	cin>>cantidad;
	cout<<"Ingrese la Tasa de cambio en bolivares: "<<endl;
	cin>>tasa;
	resultado = cantidad/tasa;
	cout<<"El equivalente en dolares es : "<<resultado,cout<<"$"<<endl;
	return 0;
}
