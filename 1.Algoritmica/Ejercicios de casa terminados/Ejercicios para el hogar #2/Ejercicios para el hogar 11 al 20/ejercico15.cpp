/* Dados como datos el precio final pagado por un producto y el precio justo (PJ) que debió
pagar en realidad, se requiere que calcule y muestre el porcentaje de descuento que le ha
sido aplicado */
#include<iostream>
#include<conio.h>
using namespace std;
//area de declaracion de funciones
	float formula(float pre,float des);
	float formula2(float pj,float desc);
//area de variables globales 
	float precio, precio_justo, descuento;
int main(){
	cout<<"Ingrese el precio Final del producto: "<<endl;
	cin>>precio;
	cout<<"Ingrese el precio Justo del producto"<<endl;
	cin>>precio_justo;
	cout<<"ingrese el porcentaje de descuento deseado"<<endl;
	cin>>descuento;
	cout<<"El calculo por precio Final es: "<<formula(precio, descuento)<<endl;
	cout<<"El calculo por precio Justo es: "<<formula(precio_justo, descuento)<<endl;
	getch();
	return 0;
}
float formula(float pre, float des){
	float result;
	result = pre * des;
	return result;
}
float formula2(float pj,float des){
	float result2;
	result2 = pj * des;
	return result2;
}
