/*
Escriba un algoritmo/programa, con una función llamada mult() que acepte dos números
reales como parámetros, multiplique estos dos números y despliegue el resultado.
 */
#include <iostream>
using namespace std;
int mult(int a,int b);
int n1,n2;
int main(){
	cout<<"Digite el primer numero: ";cin>>n1;
	cout<<"Digite el segundo numero: ";cin>>n2;
	cout<<mult(n1,n2);
	return 0;
}
//definicion de funcion
int mult(int a, int b){ 
	int result;
	result=n1*n2;
    return result;
}
