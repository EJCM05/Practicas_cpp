/*
Realice un algoritmo/programa que solicite de la entrada estándar un entero del 1 al 10 y
muestre en la salida estándar su tabla de multiplicar.
 */
#include <iostream>
using namespace std;
int n;
void f1();
int main(){
	f1();
	return 0;
}
void f1(){
	do{
		cout<<"Ingresa un numero para mostrar la tabla de multiplicar del 1 al 10"<<endl;cin>>n;
		}while((n<1)||(n>10));
		for(int i=1;i<=10;i++){
			cout<<n<<" x "<<i<<" = "<<n*i<<endl;
			}
	}
