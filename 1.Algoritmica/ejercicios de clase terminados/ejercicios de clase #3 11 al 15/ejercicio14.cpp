/* Realizar un algoritmo que permita registrar la cantidad de metros recorridos por un ciclista en una hora. En
caso que recorra menos de 50 Kms, se presentará un mensaje con la cantidad de kms recorridos e
indicándole que “DEBE ENTRENAR MÁS POR ENCONTRARSE POR DEBAJO DE LOS PARÁMETROS
MINIMOS”.
 */
#include <iostream>
using namespace std;
//funciones
float f1();
//variables
float metros_recorridos, minimo = 50000;
int main(){
	cout<<"----Registro para la cantidad de metros recorridos en una Hora--------"<<endl;
	cout<<"Ingrese la cantidad de metros recorridos en (1 HORA)"<<endl;cin>>metros_recorridos;
	cout<<"----------------------------------------------------------------------"<<endl;
	system("clear");
	cout<<""<<f1()<<endl;
	
	
	return 0;
}
float f1(){
	if(metros_recorridos < minimo ){
		cout<<"DEBE ENTRENAR MÁS POR ENCONTRARSE POR DEBAJO DE LOS PARÁMETROS MINIMOS"<<endl;
		}
	else{
		cout<<"Los metros recorridos son: "<<metros_recorridos;cout<<" MTS"<<endl;
		}
	return 0; 	
	}
