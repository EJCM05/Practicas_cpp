/*
Escriba un algoritmo/programa que calcule el valor de: 1+2+3+...+n.
 */


#include <iostream>
using namespace std;
void f1();
int n,s=0;
int main(){
	f1();
	return 0;
}
void f1(){
	cout<<"ingrese el numero de elementos: ";cin>>n;
	for(int i=1;i<=n;i++){
		s +=i;
		}
		cout<<"la suma es: "<<s<<endl;
	}
