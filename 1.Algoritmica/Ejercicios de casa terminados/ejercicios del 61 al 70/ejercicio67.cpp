/*
Escriba un algoritmo/programa que lea valores enteros hasta que se introduzca un valor en
el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los
valores mayores a 0 introducidos
 */
#include <iostream>
using namespace std;
//funciones
void f1();
//Variables 
int n,s=0;
int main(){
	f1();
	return 0;
}
void f1(){
	do{
		cout<<"digite un numero: ";cin>>n;
		if(n>0){
			s+= n;
			}
		}while( ((n<20)||(n>30)) && (n!=0) );
	cout<<"la suma es: "<<s<<endl;
	}


