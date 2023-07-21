/*Un trabajador necesita calcular su salario semanal, el cual se obtiene de la sig. manera: Si
trabaja 40 horas o menos se le paga 780,35 Bs/h. Si trabaja más de 40 horas se le paga
940,26 Bs/h, por cada una de las primeras 40 horas y 1.326,55 Bs por cada hora extra.*/
#include <iostream>
using namespace std;
//funciones
float f1(); 
//variables
float trabajo_s ,trabajo_h, minimo_h = 780.35 ,maximo_h = 940.26 ,extra_h = 1326;
int main(){
	cout<<"***CALCULO PARA SALARIO SEMANAL DE UN TRABAJADOR***"<<endl;
	cout<<"Ingrese el numero de horas trabajadas a la semana: ";cin>>trabajo_s;
	cout<<"Ingrese el numero de horas extra trabajados: ";cin>>trabajo_h;
	cout<<endl;
	cout<<"----------------PROCESANDO CALCULO-----------------------"<<endl;
	system("clear");
	cout<<f1()<<endl;
	
	return 0;
}
float f1(){
	float result,result2,result3,result4;
	result = trabajo_s * minimo_h;
	result2 = trabajo_s * maximo_h;
	result3 = trabajo_h * extra_h;
	result4 = result2 + result3;	
	if(trabajo_s < 40){
		cout<<"Su pago semanal es de: "<<result;cout<<" Bs.S"<<endl;
		}
	else if(trabajo_s >= 40){
		cout<<"su pago semanal es de: "<<result2;cout<<" Bs.S"<<endl;
		cout<<"Su pago por horas extra es de:"<<result3;cout<<" Bs.S"<<endl;
		cout<<"Su pago total es de: "<<result4;cout<<"Bs.S"<<endl;
		}
	else{
		cout<<"Ingrese un numero de horas"<<endl;
	}
	return 0;
	}

