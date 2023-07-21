/* Diseñe un algoritmo/programa que permita decir el monto que debe pagar un cliente por
derecho a estacionamiento. Teniendo conocimiento que se cobran 250,00 Bs por hora, o
por la fracción. El programa debe pedir la cantidad de horas y minutos que duró el vehículo
estacionado. */
//funciones
float f1();
//variables
float horas,minutos,monto_h = 250; 
#include <iostream>
using namespace std;
int main(){
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<"-   **Calculo de estacionamiento por hora incluyendo minutos**    -"<<endl;
	cout<<"-                Precio por hora: 250 Bs.S                        -"<<endl;
	cout<<"-------------------------------------------------------------------"<<endl<<endl;
	cout<<"Ingrese la cantidad de horas: "<<endl;cin>>horas;
	cout<<"Ingrese la cantidad de minutos: "<<endl;cin>>minutos;
	cout<<f1()<<endl;
	return 0;
}
float f1(){
	float result,result2, result3;
	result = horas + ( minutos / 60 );
	result2 = result * monto_h;
	result3 = minutos/60 * 250;
	if(horas >= 1){
		cout<<"El precio completo por estacionamiento es de: "<<result2;cout<<" Bs.S"<<endl;
		}
	else{
		cout<<"EL tiempo fue menos de 1H el precio es de :"<<result3;cout<<" Bs.S"<<endl;
		}
	  return 0;
	}

