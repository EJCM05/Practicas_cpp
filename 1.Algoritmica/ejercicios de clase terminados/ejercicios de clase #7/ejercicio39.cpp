/*
Escribir un algoritmo/programa, en lenguaje C, que: (1) Pida por teclado dos números (datos enteros). (2)
Muestre por pantalla el mensaje: La suma es <suma>. (3) Pregunte al usuario si desea realizar otra suma o
no. (4) Repita los pasos 1o, 2o y 3o, mientras que, el usuario no responda 'n' o 'N' de (no). (5) Muestre por
pantalla la suma total de los números introducidos.
  */
#include <iostream>
using namespace std;
//fun
void f1();
float sum();
//var
char letra;
int n1,n2;
int main(){
	f1();
	return 0;
}
void f1(){
	cout<<" Algoritmo "<<endl;
	cout<<"Ingrese el primer numero: ";cin>>n1;
	cout<<"Ingrese el segundo numero: ";cin>>n2;
	cout<<"La suma de los dos digitos es: "<<sum()<<endl;
	cout<<"Desea repetir la suma: S o N";cin>>letra;
	
	
	}
float sum(){
	int suma;
	suma = n1 + n2;
	return suma;
	}
