/*Desarrollar un algoritmo/programa que permita leer 4 calificaciones 
*de un estudiante. Presentar en
pantalla la siguiente información: Todas las notas del estudiante.
*El valor acumulado de las 4 notas. La
calificación definitiva del estudiante.*/
#include <iostream>
using namespace std;
float c1,c2,c3,c4,n1,n2,sum(),prom();
int main()
{
	cout<<"Ingrese la primera nota: "<<endl;cin>>c1;
	cout<<"Ingrese la segunda nota: "<<endl;cin>>c2;
	cout<<"Ingrese la tercera nota: "<<endl;cin>>c3;
	cout<<"Ingrese la cuarta nota: "<<endl;cin>>c4;
	cout<<"Las notas del estudiante son: "<<endl<<c1<<endl<<c2<<endl<<c3<<endl<<c4<<endl;
	cout<<"La suma de todas las notas es: "<<sum()<<endl;
	cout<<"El promedio de las notas es: "<<prom();
	return 0;
}
float sum(){
	n1=c1+c2+c3+c4;
	return n1;
	}
float prom(){
	n2=sum()/4;
	return n2;
	}
