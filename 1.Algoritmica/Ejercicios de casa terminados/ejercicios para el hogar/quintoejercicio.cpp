/*Obtener la edad de una persona en meses, si se ingresa su edad en años y meses. Por
ejemplo: si se ingresan 3 años y 4 meses debe mostrar 40 meses.*/
#include<iostream>
using namespace std;
int main(){
	float pers,month, year = 12, resultado = 0;
	cout<<"Ingrese Su edad: "<<endl;cin>>pers;
	cout<<"Ingrese el Numero de mes en que se encuentra"<<endl;cin>>month;
	resultado = pers*year+month;
	cout<<"Usted tiene "<<resultado,cout<<" Meses de edad"<<endl;
	return 0;
}
