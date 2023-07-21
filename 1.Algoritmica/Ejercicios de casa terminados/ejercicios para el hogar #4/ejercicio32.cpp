/* Determinar la edad de una persona. Mostrar la edad en años, meses y días */
#include <iostream>
using namespace std;
//funciones
float f1(),f2();
//variables
float edad_p, años_m = 12, años_d = 365;
int main(){
	cout<<"********Determinar la edad de una persona en Años, meses, dias*******"<<endl;
	cout<<"Ingrese Su edad: "<<endl;cin>>edad_p;
	cout<<f1()<<endl;
	
	return 0;
}

float f1(){
	float result, result2;
		result = edad_p*años_m;
		result2= edad_p*años_d;
	if(edad_p >= 1){
		cout<<"Su edad en años es: "<<edad_p<<endl;
		cout<<"Su edad en meses es: "<<result<<endl;
		cout<<"Su edad en dias es de: "<<result2<<endl;
		 }
	else{
		cout<<"La edad es a partir de 1 año"<<endl;
		}
		return 0;
	}
