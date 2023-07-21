/*
 Desarrollar un algoritmo/programa, que nos permita mostrar tres veces un saludo. 
*/


#include <iostream>
using namespace std;
//funciones
float f1();
//variables
int i;
int main(){
	cout<<f1()<<endl;
	return 0;
}

float f1(){
	i = 1;
	while ( i <= 3){
		cout << " ***********************************" << endl;
		cout << " * Saludo Nro. " << i << "*"<< endl;
		cout << " * HOLA APRECIADOS ESTUDIANTES *" << endl;
		cout << " ***********************************" << endl << endl;
		cout << "Presione la tecla < ENTER > para continuar ..." << endl;
		getchar();
		getchar();
		system("clear");
		i = i+1;
		}
		cout << "" << endl << endl << endl;
		cout << "Finalizo la presentación de los tres saludos" << endl;
		return 0;
}
