/*Leer dos dígitos enteros y luego mostrar en pantalla los dígitos leídos en forma ascendente*/
#include <iostream>
using namespace std;
//funciones 
int f1();
//variables 
int a,b;
int main(){
	cout<<"Escribe dos numeros: "<<endl;cin>>a>>b;
	cout<<"Los digitos son:"<<endl;
	cout<<f1()<<endl<<endl<<endl;
	return 0;
} 
int f1(){
	if(a<b){
	cout<<a<<endl;
	cout<<b<<endl;
	}
	else{
		cout<<b<<endl;
		cout<<a<<endl;
		}
	return 0;
}
