/* Dados sus tres lados, determinar si un triángulo es: equilátero, isósceles o escaleno.
Equilátero: todos sus lados son iguales. 
* Isósceles: Dos lados iguales y uno diferente.
Escaleno: Todos sus lados diferentes.*/


#include <iostream>
using namespace std;
//funciones
int f1();
//variable
int lado_1, lado_2, lado_3;
int main(){
	cout<<"Algoritmo para determinar si un triangulo es equilatero ,isoceles o escaleno "<<endl;
	cout<<"Ingrese el primer: "<<endl;cin>>lado_1;
	cout<<"Ingrese el segundo lado: "<<endl;cin>>lado_2;
	cout<<"Ingrese el tercer lado: "<<endl;cin>>lado_3;
	cout<<"******Calculando******"<<endl;
	system("clear");
	cout<<f1()<<endl;
	return 0;
}
int f1(){
	if(lado_1 && lado_2 && lado_3){
		cout<<"El triagnulo es Equilatero "<<endl;
		}
	else if(lado_1 == lado_2||lado_1 == lado_3||lado_2 == lado_3){
		cout<<"el triangulo es un Isoceles"<<endl;
		}
	else{
		cout<<"Es un triangulo Escaleno";	
	}
	return 0;
	}

