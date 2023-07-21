/*
Escriba un algoritmo/programa que calcule x^y, donde tanto x como y son enteros positivos,
sin utilizar la función pow().
 */


#include <iostream>
using namespace std;
void f1();
int x, y, resultado = 1; 
int main(){
	f1();
	return 0;
}
void f1(){
	
 cout << "Ingrese un Numero x" << endl;
 cin >> x;
 cout << "Ingrese la Potencia y" << endl;
 cin >> y;
 for(int i=1; i<=y; i++){
  resultado *= x;
 }
 cout<< "El Resultado es: " << resultado << endl;
}


