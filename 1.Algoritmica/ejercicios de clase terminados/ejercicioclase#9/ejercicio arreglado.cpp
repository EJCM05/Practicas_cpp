/*Desarrollar un Algoritmo/Programa que rellene un
vector con los 100 primeros números enteros y los
muestre en pantalla.*/
#include <iostream>
#include <cstdlib>
using namespace std;
int i, tabla[100];
int f1();
int main(){
	// RUTINA PARA LLENAR EL VECTOR O ARREGLO UNIDIMENSIONAL
for (i=0;i<100;i++){
	tabla[i]=i+1;
	cout << "Almacenando la posicion: " << i << " del Vector con el valor: " << i+1 << endl;
	}
	cout << "... FINALIZO EL PROCESO DE LLENADO DEL VECTOR ..." << endl;
	cout << "... Presione la tecla < ENTER > para continuar ..." << endl;
	getchar();
	getchar();
	system("clear");
		f1();	
	return 0;
	}
int f1(){
// RUTINA PARA MOSTRAR EL VECTOR O ARREGLO UNIDIMENSIONAL
for (i=0;i<100;i++){
	cout << "Valor Almacenado en la Posición: " << i << ". Corresponde a: ·" << tabla[i]<<endl;
}
	return 0;}
