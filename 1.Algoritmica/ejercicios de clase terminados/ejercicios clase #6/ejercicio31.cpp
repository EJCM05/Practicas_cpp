/*Realizar un algoritmo/programa que permita solicitar un número y luego ejecutar la tabla de multiplicar
correspondiente, desde el 1 hasta el 20.*/

#include<iostream>
using namespace std;
int f1();
int num;

int main(){
	cout << "******TABLAS DE MULTIPLICAR****" << endl;
	cout << "Seleciona un numero (del 1 al 20) :";cin >> num;
	cout<<f1();
	return 0;
	}
int f1(){
	
	if (num >=1 && num<=20)
	{
	for (int i=1; i<=20 ; i++)
	{
	cout << num << " x " << i << " = " << num*i << endl;
	}
	}
	else
	{
	cout << "Error: tu número no está entre el 1 y el 20." << endl;
	}
	return 0;
	}
