/*Dados dos números naturales, decidir si uno es divisor del otro*/
#include <iostream>
using namespace std;
int f1();
int a,b;
int main(){
	cout<<"Ingrese el primer numero: "<<endl;cin>>a;
	cout<<"Ingrese el segundo numero: "<<endl;cin>>b;
	cout<<f1()<<endl;
	return 0;
}
int f1(){
	if(a%b == 0){
		cout<<"El numero "<<a,cout<<" Es divisible entre "<<b<<endl;
		}
	else{
		cout<<"El numero "<<a<<endl;
		cout<<"No es divisible entre "<<b<<endl;
		}
	
	return 0;
	}
