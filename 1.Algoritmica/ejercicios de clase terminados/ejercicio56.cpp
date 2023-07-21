/*
Desarrollar un
algoritmo/programa, que nos permita registrar mediante arreglos
unidimensionales, una lista de “n” personas, mediante su número de cédula de identidad (se
debe validar que no se repita el número de cédula) y posteriormente nos permita buscar
cualquier persona en forma secuencial por su número de cédula. El programa debe preguntar
si desea efectuar otra búsqueda, así como emitir un mensaje cuando no se consigue la cédula
buscada.
 */
#include <iostream>
using namespace std;
//funciones
void f1();
int f2();
//variables
int npersonas;
bool s=true,n=false;
int cedulas[1000];
int objeto;
int main(){
	f1();
	return 0;
}
void f1(){
	//relleno de personas
	cout<<"¿Cuantas personas desea registrar?"<<endl;cin>>npersonas;
	//relleno del vector
	for(int i=0;i<npersonas;i++){
			cout<< i+1 << " Registro de personas ";
			cin>>cedulas[i];		
		}
	//cedulas
	cout << "Indique la cedula que desea Buscar: ";
	cin >> objeto;
	//bucle para buscar en el vector
	for (int i= 0 ; i < 10 ; i++ ){
	if ( cedulas[i] == objeto){
	cout<<"La cedula " << objeto << endl;
	cout<<"SE ENCUENTRA EN LA CELDA: "<<cedulas[i]<<endl;
			}
		}
	cout<<f2()<<endl;
	}
int f2(){
	char valor;
	cout<<"¿Desea volver a registrar otro valor?";
	cin>>valor;
	if(valor == s){
		system("clear");
		f1();
		}
	else{
		exit(0);
	cout<<"ADIOS!!!"<<endl;
		}
	return 0;
	}
