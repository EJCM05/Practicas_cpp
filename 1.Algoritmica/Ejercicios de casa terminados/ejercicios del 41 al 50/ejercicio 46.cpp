/*
Una persona se encuentra en la disyuntiva de comprar un automóvil o un terreno, los cuales
cuestan exactamente la misma cantidad de dinero. Sabe que mientras el automóvil se
devalúa, con el terreno sucede lo contrario. Esta persona comprará el automóvil si al cabo
de tres años la devaluación de éste no es mayor que la mitad del incremento del valor del
terreno. Ayúdele a esta persona a determinar si debe o no comprar el automóvil. 
 */


#include <iostream>

using namespace std;

float precio, incremento, decremento;

float devaluacion();

int main()
{
	cout<<"Ingresa el precio que vale el carro y el terreno: ";cin>>precio;
	
	cout<<"Ingresa el incremento anual del terreno en %";cin>>incremento;
	
	cout<<"Ingresa la devaluacion anual del carro en %";cin>>decremento;
	
	cout<<devaluacion();
	
	return 0;
}
float devaluacion(){
	
	int devaluacion_carro, incremento_terreno;
	
	devaluacion_carro = ((precio * decremento)/100)*3;
	incremento_terreno = (((precio * incremento)/100)*3)/2;
	
	cout<<"La mitad del incremento del terreno en 3 años es: "<<incremento_terreno;
	cout<<endl;
	cout<<"La mitad de la devaluacion del carro en 3 años es: "<<devaluacion_carro;
	cout<<endl;
	
	if(devaluacion_carro < incremento_terreno){
		cout<<"Te conviene comprar el carro"<<endl;
		}
	else{
		cout<<"Te conviene comprar el terreno"<<endl;
		}
	return 0;
	}
