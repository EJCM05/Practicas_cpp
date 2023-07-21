/*Construir un algoritmo/programa, que calcule el promedio del sueldo de tres trabajadores. Si dicho
promedio es superior a 450.000,oo Bs. Se presentará en pantalla el promedio de ingreso y el siguiente
mensaje “Trabajadores con buen sueldo”, en caso contrario el sistema no mostrará nada*/
#include <iostream>
using namespace std;
//funciones
int f1();
//variables
int trabajador_1,trabajador_2,trabajador_3, sueldo_pre = 450.000 ;
int main(){
	cout<<"Ingrese el sueldo del trabajador 1. En Bs.S"<<endl;cin>>trabajador_1;
	cout<<"Ingrese el sueldo del trabajador 2. En Bs.S"<<endl;cin>>trabajador_2;
	cout<<"Ingrese el sueldo del trabajador 3. En Bs.S"<<endl;cin>>trabajador_3;
	cout<<f1()<<endl;
	return 0;
}
int f1(){
	if(trabajador_1 && trabajador_2 && trabajador_3 >= sueldo_pre){
		cout<<"*****Trabajadores con buen sueldo******"<<endl;
		cout<<"Trabajador 1: "<<trabajador_1;cout<<"Bs.S"<<endl;
		cout<<"Trabajador 2: "<<trabajador_2;cout<<"Bs.S"<<endl;
		cout<<"Trabajador 3: "<<trabajador_3;cout<<"Bs.s"<<endl;
		}
		return 0;
	}

	
	
	

