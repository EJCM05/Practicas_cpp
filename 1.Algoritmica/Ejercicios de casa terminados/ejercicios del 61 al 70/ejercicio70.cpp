/*
Escriba un algoritmo/programa que calcule el valor de: 1+3+5+...+2n-1.
 */


#include <iostream>
using namespace std;
void f1();
int n ,suma= 0;
int main(){
	f1();
	return 0;
}
void f1(){
	cout<<"Digite la cantidad de valores: ";
	cin>>n;
	for(int i=1;i<=(2*n)-1;i+=2){
		suma+=i;
	}
	cout<<"La suma es: "<<suma<<endl;
	 
	}


