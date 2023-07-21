/*ejercicio do while modificado */
#include <iostream>
# include <cstdlib>
# include <cstdio>
# include <iomanip>
#include <cstring>
using namespace std;
//funciones
void f1();
//var
string letra;
int main(){
	f1();
	return 0;
}
void f1(){
	do{
	cout<< endl;
	cout << " RECUERDE QUE CUANDO DESEE SALIR DEBE PRESIONAR LA TECLA < * >" << endl << endl;
	cout << "Presione por teclado una letra y luego enter: ";	
	cin >> letra;
	cout<<endl;
	cout << "La tecla presionada fue: " << letra << endl << endl << endl;
	cout << "... Presione la tecla < Enter > Para Continuar ... " << endl;
	getchar();
	getchar();
	system ("clear");
	}
	while (letra!="*");
	cout << " " << endl;
	cout << " GRACIAS POR UTILIZAR EL PROGRMA ... FIN DEL SISTEMA " << endl << endl << endl;
}
