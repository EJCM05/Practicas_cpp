/*
Realice un algoritmo/programa que lea de la entrada estándar números hasta que se
introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida
estándar el número de valores mayores que cero leídos.
 */
#include <iostream>
using namespace std;
float n;
int m =0;
void f1();
int main(){
	f1();
	return 0;
}
void f1(){
	do{
		cout<<"Digite un numero: "; cin>>n;
		if(n>0){
			m++;
		}
	}while(n!=0);
	cout<<"\nNumero de valores mayores a 0: "<<m<<endl;
	}
