/*Calcular y mostrar el área de un triángulo,
 si se ingresa por teclado la base y la altura.*/
#include<iostream>
using namespace std;
int main(){
	float area, base,altura, resultado=0;
	cout<<"ingresar la base del triangulo ";cin>>base;
	cout<<"ingresar la altura del triangulo ";cin>>altura;
	area= (base*altura)/2;
	resultado = area;
	cout<<"El area del triangulo es de: "<<resultado;
	return 0;
}
