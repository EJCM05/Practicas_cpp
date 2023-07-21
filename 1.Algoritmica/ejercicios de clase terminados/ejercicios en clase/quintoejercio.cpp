/*Desarrollar un programa que permita leer 4 calificaciones para 4 estudiantes.
Presentar en pantalla un listado que contenga:

a)EL número de la cedula de identidad de los estudiantes.
b)La calificación definitiva de cada estudiante.
c)El promedio de notas por cada evaluación.
d)El promedio de notas de la sección completa.*/
#include <iostream>
using namespace std;
float c1[4],c2[4],c3[4],c4[4],n1,n2,sum(),prom();
int i=0;
int main()
{
	for(i=0;i>=3;i++)
	{
	cout<<"Ingrese la primera nota: "<<endl;cin>>c1[i];
	cout<<"Ingrese la segunda nota: "<<endl;cin>>c2[i];
	cout<<"Ingrese la tercera nota: "<<endl;cin>>c3[i];
	cout<<"Ingrese la cuarta nota: "<<endl;cin>>c4[i];
    
}
cout<<"Las notas del estudiante son: "<<endl<<c1[i]<<endl<<c2[i]<<endl<<c3[i]<<endl<<c4[i]<<endl;
	cout<<"La suma de todas las notas es: "<<sum()<<endl;
	cout<<"El promedio de las notas es: "<<prom();
	
	
	
	
	
	
	
	return 0;
}
float sum(){
	n1=c1[i]+c2[i]+c3[i]+c4[i];
	return n1;
	}
float prom(){
	n2=sum()/4;
	return n2;
	}

