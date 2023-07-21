/*Calcular el cociente y el resto de la división de dos números naturales.*/
#include <iostream>
using namespace std;
int op(),op2();
int r1,r2,num_1,num_2;
int main(){
	cout<<"Ingrese el numero diviendo:"<<endl;cin>>num_1;
	cout<<"Ingrese el numero divisor: "<<endl<<endl;cin>>num_2;
	cout<<"El cociente es: "<<op()<<endl;
	cout<<"El residuo es: "<<op2()<<endl;
	return 0;
}
int op(){
	r1 = num_1 / num_2;
	return r1	;
}
int op2(){
	r2 =num_1 % num_2;	
	return r2;
	}

