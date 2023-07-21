/*
Realice un algoritmo/programa que solicite al usuario que piense un número entero entre el
1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango [1-100], e
indicarle al usuario si el número que digito es menor o mayor al número aleatorio, así hasta
que lo adivine. Y por último mostrarle el número de intentos que le llevo.
 */
#include <iostream>
using namespace std;
//variables y funciones
void f1();
int num,dat,contador=0;
int main(){
	f1();	
	return 0;
}
void f1(){	
	srand(time(NULL)); //para generar un numero aleatorio
	dat = 1 + rand() % (100);
	do{
		cout<<"Digite un numero: ";cin>>num;
		if(num>dat){
			cout<<"Digite un numero menor "<<endl;
			}
		if(num<dat){
			cout<<"Digite un numero mayor "<<endl;
			}
			contador++;
	}while(num != dat);
		cout<<"Adivinaste el numero"<<endl;
		cout<<"Numero de intentos "<<contador<<endl;
	cin.get();
	}
	

