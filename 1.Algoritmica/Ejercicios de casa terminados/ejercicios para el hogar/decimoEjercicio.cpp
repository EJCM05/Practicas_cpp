/*Dada la base y altura de un rect�ngulo, calcular el �rea y el per�metro del mismo.
Las f�rmulas son �rea = base X altura y per�metro = 2 X (base + altura).*/
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
