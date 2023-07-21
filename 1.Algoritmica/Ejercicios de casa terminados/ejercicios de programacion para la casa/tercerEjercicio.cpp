/*Desarrolle un algoritmo/programa que permita leer cuatro dígitos enteros, posteriormente
desarrollar las siguientes operaciones básicas: (a) Sumar todos los dígitos leídos. (b) Restar
el cuarto digito menos el segundo. (c) Multiplicar el primer digito por el tercero y luego por el
segundo. (d) dividir el resultado de la multiplicación entre el cuarto digito. (e) Calcular el
porcentaje al resultado de la multiplicación, tomando como valor de porcentaje el monto del
segundo digito*/
#include<iostream>
using namespace std;
int main(){
	int d1,d2,d3,d4,cent,total, re1 = 0, re2 = 0, re3 = 0, re4 = 0, re5 = 0;
	cout<<"Ingrese el primer digito: "<<endl;cin>>d1;
	cout<<"Ingrese el segundo digito: "<<endl;cin>>d2;
	cout<<"Ingrese el tercer digito: "<<endl;cin>>d3;
	cout<<"ingrese el cuarto digito:"<<endl;cin>>d4;
	re1=d1+d2+d3+d4;
	re2=d4-d2;
	re3=d1*d3*d2;
	re4=re3/d4;
	cent=re3*0.01*d2;
	re5= cent;
	cout<<"El resultado de las operaciones son:"<<endl;
	cout<<"(A) Sumar todos los digitos leidos:"<<re1<<endl;
	cout<<"(B) Restar el cuarto digito menos el segundo.:"<<re2<<endl;
	cout<<"(C)Multiplicar el primer digito por el tercero y luego por el segundo.:"<<re3<<endl;
	cout<<"(D) dividir el resultado de la multiplicacion entre el cuarto digito.:"<<re4<<endl;
	cout<<"(E) Calcular el porcentaje al resultado de la multiplicacion, tomando como valor de porcentaje el monto del segundo digito:"<<re5<<endl;

	return 0;
}
