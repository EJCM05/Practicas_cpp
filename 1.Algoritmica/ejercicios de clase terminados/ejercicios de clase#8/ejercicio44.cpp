/*
 44) CANTV Posee dos tipos de clientes: Residencial y Empresarial, realice un algoritmo/programa que permita
procesar una cantidad cualquiera de clientes, teniendo como datos por C/U de ellos: Código del Cliente,
Tipo de Cliente, Lectura Actual, Lectura Anterior; calculando y dando como salida la cantidad de Impulsos
consumidos y el neto a pagar por cada cliente (Bs). Los Impulsos se cobran a razón de: Residencial 189,75
Bs. Empresarial 247,26 Bs. Nota: Cant. De Imp = L. Actual - L. Anterior.
* (l_ac - l_an)* residencial o empresarial
 */
#include <iostream>
#include <cstring>
using namespace std;
//funciones
void f1();
//variables
float numero, residencial=189.75,empresarial= 247.26,result,result2;
int n_c,codigo_c,l_ac,l_an, op;
int main(){
	f1();
	return 0;
}
void f1(){
	cout<<"             *EMPRESA CANTV*"<<endl;
	cout<<"Tipos de clientes: Residencial || Empresarial "<<endl;
	cout<<"Ingrese cuantos clientes desea registrar: "<<endl;cin>>n_c;
	for(int i=1;i<=n_c;i++){
		cout<<endl;
		cout<<"Cliente #N "<<i<<endl;
		cout<<"Ingrese su codigo de cliente "<<endl;cin>>codigo_c;
		cout<<"Ingrese su Tipo de Cliente: "<<endl;
		cout<<"1. Residencial "<<endl;
		cout<<"2. Empresarial "<<endl;
		cout<<"Selecione un numero : ";cin>>op;
		switch(op){
		case 1:
		cout<<"Lectura actual de Megas: "<<endl;cin>>l_ac;
		cout<<"Lectura anterior de Megas:  "<<endl;cin>>l_an;
		cout<<endl;
		result = (l_an-l_ac) * residencial;
		cout<<"el costo es de : "<<result<<" Bs.s "<<endl;
		break;
		case 2:
		cout<<"Lectura actual de Megas: "<<endl;cin>>l_ac;
		cout<<"Lectura anterior de Megas:  "<<endl;cin>>l_an;
		cout<<endl;
		result2 = (l_an-l_ac) * empresarial;
		cout<<"el costo es de : "<<result2<<" Bs.s"<<endl;
		break;
			}
			
		}
		}
		
