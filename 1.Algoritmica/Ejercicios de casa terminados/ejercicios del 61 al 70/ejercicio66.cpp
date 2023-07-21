/*
Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un
período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del
día, la temperatura más alta y la más baja.
 */


#include <iostream>
void f1();
int cantidad=0,numero=0,menor=0,mayor=0;

using namespace std;
int main()
{
		f1();
	return 0;
}
void f1(){
	float suma=0;
	for(int i=1; i<=6; i++){
		cout<<"temperatura "<<i<<":";
		cin>>numero;
		if(i==1){
			menor=numero;
			mayor=numero;
		}
		else if(numero<menor){
			menor=numero;
		}
		else if (numero>mayor){
			mayor=numero;
		}
		suma= suma + numero;
	}
	cout<<"La temperatura mas baja es de: "<<menor<<endl;
	cout<<"La temperatura mas alta es de: "<<mayor<<endl;
	cout<<"La temperatura media es de: "<<suma/6<<endl;
	}
