/*Desarrolla un algoritmo/programa que use un bucle para mostrar el resultado de multiplicar los números
del 1 al 20 por el resultado de obtener el módulo de dicho número con un número indicado por el teclado
por el usuario. Ejemplo: Si el usuario elige como número para el cálculo, el número 3. El resultado sería:
1 MODULO DE 3 = 1
2 MODULO DE 3 = 2
3 MODULO DE 3 = 0
4 MODULO DE 3 = 1
5 MODULO DE 3 = 2
6 MODULO DE 3 = 0
7 MODULO DE 3 = 1
8 MODULO DE 3 = 2
9 MODULO DE 3 = 0
10 MODULO DE 3 = 1 ... Así continua la operación hasta terminar con el resto de 20 MODULO DE 3 es 2.*/
#include <iostream>
using namespace std;
 //funciones
 int f1();
 //variables 
int num;
int main(){
	cout<<"Ingrese un numero para el modulo";cin>>num;
	cout<<f1();
	return 0;
}
int f1(){
	for (int i=1;i <= 20;i++){ 
		cout << i << " Modulo " << num << " = " << i%num << endl;}
	return 0;
	}

