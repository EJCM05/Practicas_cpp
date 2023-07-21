/*
Desarrollar un algoritmo/programa que permita almacenar en un vector 10 números enteros,
posteriormente presentarlos ordenados en forma descendente
 */


#include <iostream>
using namespace std;
//funciones

//variables

int main(){
	int array[10];
	int i,j,aux;
	cout<<"Programa para ordenar numeros ingresados"<<endl;
	for(int e=0;e<10;e++){
		cout<<"Ingrese los numeros deseados: "<<endl;cin>>array[e];
		}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(array[j] > array[j+1]){
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	cout<<"\nNumeros de forma Descendente: ";
	for(i=4;i>=0;i--){
		cout<<array[i]<<" ";
	}
	
	
	
	
	return 0;
}

