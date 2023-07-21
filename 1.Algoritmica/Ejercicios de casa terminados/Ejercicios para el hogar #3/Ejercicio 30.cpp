/* Ejercicio 30: Calcular el costo del flete, para el envío de un paquete a cualquier lugar del país.*/

#include <iostream>
using namespace std;

float calc_1(), calc_2(), calc_3(), calc_4(), calc_5(), calc_6(), calc_7(), calc_8(), calc_9();

float peso, total=0;
char prior, tamaño[20];

int main(){
	cout<<"TIPO DE PAQUETE---------------------------ESCALA DE PRIORIDAD"<<endl;	 	
	cout<<"	                      A                       B		        C      "<<endl; 
	cout<<"Caja Pequeña        \t35 Bs/gramo     \t25 Bs/gramo    \t15 Bs/gramo"<<endl;
	cout<<"Caja Mediana        \t65 Bs/gramo     \t55 Bs/gramo    \t45 Bs/gramo"<<endl;
	cout<<"Caja Grande         \t95 Bs/gramo     \t85 Bs/gramo    \t75 Bs/gramo"<<endl;
	cout<<"\n\tIngrese el Tamaño de la caja: "; cin.getline(tamaño, 20, '\n');
	cout<<"\n\tSeleccione el nivel de prioridad (A, B, C): "; cin>>prior;
	
	
	switch(tamaño[0]){
		case 'p':  
		switch(prior){
			case 'a': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_1()<<" bs"; break;
			case 'b': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_2()<<" bs"; break;
			case 'c': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_3()<<" bs"; break;
			case 'A': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_1()<<" bs"; break;
			case 'B': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_2()<<" bs"; break;
			case 'C': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_3()<<" bs"; break;
			default: cout<<"Intentelo de nuevo"; break;			
		}
		break ;
		case 'm':  
		switch(prior){
			case 'a': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_4()<<" bs"; break;
			case 'b': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_5()<<" bs"; break;
			case 'c': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_6()<<" bs"; break;
			case 'A': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_4()<<" bs"; break;
			case 'B': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_5()<<" bs"; break;
			case 'C': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_6()<<" bs"; break;
			default: cout<<"Intentelo de nuevo"; break;			
		}
		break ;
		case 'g':  
		switch(prior){
			case 'a': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_7()<<" bs"; break;
			case 'b': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_8()<<" bs"; break;
			case 'c': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_9()<<" bs"; break;
			case 'A': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_7()<<" bs"; break;
			case 'B': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_8()<<" bs"; break;
			case 'C': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_9()<<" bs"; break;
			default: cout<<"Intentelo de nuevo"; break;			
		}
		break ;
		case 'P':  
		switch(prior){
			case 'a': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_1()<<" bs"; break;
			case 'b': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_2()<<" bs"; break;
			case 'c': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_3()<<" bs"; break;
			case 'A': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_1()<<" bs"; break;
			case 'B': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_2()<<" bs"; break;
			case 'C': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_3()<<" bs"; break;
			default: cout<<"Intentelo de nuevo"; break;			
		}
		break ;
		case 'M':  
		switch(prior){
			case 'a': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_4()<<" bs"; break;
			case 'b': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_5()<<" bs"; break;
			case 'c': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_6()<<" bs"; break;
			case 'A': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_4()<<" bs"; break;
			case 'B': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_5()<<" bs"; break;
			case 'C': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_6()<<" bs"; break;
			default: cout<<"Intentelo de nuevo"; break;			
		}
		break ;
		case 'G':  
		switch(prior){
			case 'a': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_7()<<" bs"; break;
			case 'b': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_8()<<" bs"; break;
			case 'c': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_9()<<" bs"; break;
			case 'A': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_7()<<" bs"; break;
			case 'B': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_8()<<" bs"; break;
			case 'C': cout<<"\n\tIngrese El Peso De La Caja En Gramos: "; cin>>peso;
						cout<<"\n\tEl costo de envio es: "<<calc_9()<<" bs"; break;
			default: cout<<"Intentelo de nuevo"; break;			
		}
		break ;
		default: cout<<"Intentelo De Nuevo";
}
	return 0;
}
float calc_1(){
	total = peso * 35;
	return total;
}
float calc_2(){
	total = peso * 25;
	return total;
}
float calc_3(){
	total = peso * 15;
	return total;
}
float calc_4(){
	total = peso * 65;
	return total;
}
float calc_5(){
	total = peso * 55;
	return total;
}
float calc_6(){
	total = peso * 45;
	return total;
}
float calc_7(){
	total = peso * 95;
	return total;
}
float calc_8(){
	total = peso * 85;
	return total;
}
float calc_9(){
	total = peso * 75;
	return total;
}
