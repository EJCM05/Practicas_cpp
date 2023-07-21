/*Calcular el nuevo salario de un obrero si obtuvo un incremento del 35,75 % sobre su salario
anterior. */
#include<iostream>
using namespace std;
int main(){
	float actual,anterior,diferencia,incremento = 0.3575,total, resultado = 0;
	cout<<"Ingrese la cantidad del salario anterior: "<<endl;
	cin>>anterior;
	actual=anterior*incremento;
	total=actual+anterior;
	resultado=total;
	cout<<"El nuevo salario es de: "<<resultado,cout<<"$ con un incremento de:"<<actual,cout<<"$ sobre el salario viejo"<<endl;
	
	return 0;
}
