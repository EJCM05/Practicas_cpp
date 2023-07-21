/*
Registrar 10 números al azar y buscar un número determinado de la lista.
 */
#include <iostream>
using namespace std;
//funciones
void f1();
int f2();
//variables
bool s=true,n=false;
int numeros[10];
int objeto;
int main(){
	f1();
	return 0;
}
void f1(){
	for(int i=0;i<10;i++){
		cout<< i+1 << " Registre los primeros 10 numeros: ";
		cin>>numeros[i];
		}
	cout << "Indique el Valor que desea Buscar: ";
	cin >> objeto;
	for (int i= 0 ; i < 10 ; i++ ){
	if ( numeros[i] == objeto){
	cout<<"EL VALOR: " << objeto << endl;
	cout<<"SE ENCUENTRA EN LA CELDA: "<<numeros[i]<<endl;
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
