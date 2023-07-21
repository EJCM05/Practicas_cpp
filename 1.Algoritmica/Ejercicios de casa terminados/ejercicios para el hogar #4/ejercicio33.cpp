/*Se desea desarrollar un algoritmo que identifique si un número es positivo, negativo o es
igual a cero.*/
#include <iostream>
using namespace std;
//Funciones
int f1();
//variables
int num_1;
int main(){
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Ingrese un numero para saber si es positivo o negativo o es igual a 0"<<endl;cin>>num_1;
	cout<<f1()<<endl;
	
	
	return 0;
}
int f1(){
	if(num_1 == 0){
		cout<<"El numero ingresado es Neutro = 0 "<<endl;
		}
	else if(num_1 > 0){
	cout<<"El numero ingresado es positivo"<<endl;
	}
	else{
		cout<<"El numero ingresado es negativo"<<endl;
		}
	return 0;
}
