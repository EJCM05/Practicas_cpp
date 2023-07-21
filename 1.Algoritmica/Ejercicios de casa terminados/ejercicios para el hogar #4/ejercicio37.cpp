/*A un trabajador le pagan según sus horas y una tarifa de pago por horas. Si la cantidad de
horas trabajadas es mayor a 40 horas, entonces la tarifa se incrementa en un 50% para las
horas extras. Calcular el salario del trabajador dadas las horas trabajadas y la tarifa.*/
#include <iostream>
using namespace std;
//variables
float f1();
//funciones 
float horas,tarifa_h,incremento = 05;
int main(){
	cout<<"--------Programa de pago segun sus horas con porcentaje extra-------"<<endl;
	cout<<"Ingrese el numero de horas trabajadas: "<<endl;cin>>horas;
	cout<<"Ingrese la tarifa de pago por horas: "<<endl;cin>>tarifa_h;
	system("clear");
	cout<<f1()<<endl;
	return 0;
}
float f1(){
	float result, result2;
	result = horas * tarifa_h;
	result2 = incremento * result;
	if(horas >= 40){
		cout<<"Su paga es de: "<<result2<<endl;
		cout<<"Con un incremento adicional del 50% "<<endl;
	}
	else{
		cout<<"Su paga es de: "<<result<<endl;
		}
		return 0;
	}
