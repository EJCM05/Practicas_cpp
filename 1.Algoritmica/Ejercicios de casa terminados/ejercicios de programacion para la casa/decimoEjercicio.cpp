/*Dada la base y altura de un rectángulo, calcular el área y el perímetro del mismo.
Las fórmulas son área = base X altura y perímetro = 2 X (base + altura).*/
#include<iostream>
using namespace std;
int main(){
	float ba,al,ar,pe;
	cout<<"Ingrese la base del rectangulo: "<<endl;cin>>ba;
	cout<<"Ingrese la altura del rectangulo: "<<endl;cin>>al;
	ar = ba*al; 
	pe= 2*(ba + al);
	cout<<"El area del rectangulo es de: "<<ar<<endl;
	cout<<"El perimetro del rectangulo es de: "<<pe<<endl;
	return 0;
}
