/* 	Una compañía de alquiler de automóviles sin conductor, desea calcular y mostrar lo que
debe pagar cada cliente, de acuerdo a las siguientes condiciones: A) Si no se rebasan los
300 km, se cancelan 1.000 Bs. B) Si la distancia recorrida es superior a 300 km, pero
inferior a 1.000 km, se cobran 2.000 Bs. C) Si igual o es superior a 1.000 se cobran 70 Bs
por cada kilómetro adicional, para las distancias hasta 500 km adicionales. Mostrar en
pantalla, la cantidad de kilómetros recorrida, y el monto que se le cobrará al conductor,
según cada una de las etapas del recorrido.*/
#include <iostream>
using namespace std;
//funciones
float f1();
//variables
float km, tar_ex = 70;
int main(){
	cout<<"********Calculo de lo que debe pagar cada**********"<<endl;
	cout<<"Ingrese la cantidad de KM recorridos para el cobro: ";cin>>km;
	system("clear");
	cout<<f1()<<endl;
	
	return 0;
}
float f1(){
	float extra;
	extra = km * tar_ex;
	if( km == 300 ){
		cout<<"Su tarifa de cobro es de: 1.000 Bs.S"<<endl;
		cout<<"Sus kilometos recorridos: "<<km<<" Km"<<endl;
		}
	else if(km > 300 && km < 1000){
		cout<<"Su tarifa de cobro es de: 2.000 Bs.S"<<endl;
		cout<<"Sus kilometos recorridos: "<<km<<" Km"<<endl;
		}
	else if(km >= 1000){
		cout<<"su cobro es de 2.000 Bs.S"<<endl;
		cout<<"Sus kilometos recorridos: "<<km<<" Km"<<endl;
		cout<<"con un extra de: "<<extra<<" adicional por superar los 1000 Km"<<endl;
		}
	else{
		cout<<"Ingrese los km"<<endl;
		}
	return 0;
	}
