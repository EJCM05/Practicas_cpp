/*Realice un algoritmo/programa que calcule y muestre en la salida estándar la suma de los
cuadrados de los 10 primeros enteros mayores que cero.
 */
#include <iostream>
using namespace std;
//funciones
void f1();
//variables
int s=0,c;
int main(){
	f1();
			
			
	return 0;
}
void f1(){
	for(int i=1;i<=10;i++){
		c = i * i;
		s += c;
		cout<<"El resultado de la suma es: "<<s<<endl;
		}
	}

