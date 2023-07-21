/* Ejercicio 49: El dueño de una empresa desea planificar las decisiones financieras que tomará en el
siguiente año. La manera de planificarlas depende de lo siguiente: Si actualmente su
capital se encuentra con saldo negativo, pedirá un préstamo bancario para que su nuevo
saldo sea de $10.000. Si su capital tiene actualmente un saldo positivo pedirá un préstamo
bancario para tener un nuevo saldo de $20.000. Pero si su capital tiene actualmente un
saldo superior a los $20.000 no pedirá ningún préstamo. Posteriormente repartirá su
presupuesto de la siguiente manera: A) $5.000 para equipo de cómputo. B) $2.000 para
mobiliario, y C) Del resto, la mitad será para la compra de insumos y la otra para otorgar
incentivos al personal. Desplegar qué cantidades se destinarán para la compra de insumos 
* e incentivos al personal y, en caso de que fuera necesario, a cuánto ascendería la
cantidad que se pediría al banco. */

#include<iostream>
#include<stdlib.h>
using namespace std;

float f1(), f2(), f3();

float saldo; 
int opc=0;

int main(){
	
	cout<<"\n\tSaldo de la cuenta: "; cin>>saldo;
	
	if(saldo<0){
	opc=1;
	}
	else{}
	
	if(saldo>0){
	opc=2;
	}
	else{}
	
	if(saldo>20000){
	opc=3;
	}
	else{}
	
	getchar();
	getchar();
	system("clear");
	
	switch(opc){
		
		case 1:
		
		cout<<"Saldo: "<<saldo<<endl;
		cout<<"Prestamo solicitado "<<10000-saldo;  // -150 
		
		cout<<"Saldo actual: 10000$"<<endl;
		
		cout<<"======= Presupuesto Repartido En ======="<<endl;
		
		cout<<"   A-) -5000$ Equipo de Computo"<<endl;
		cout<<"   B-) -2000$ Mobiliaria"<<endl;
		cout<<"   C-) -"<<f1()<<"$ Insumos y -"<<f1()<<"$ Incentivos para el personal";
		
		break;
		
		case 2: 
		
		cout<<"Saldo: "<<saldo<<endl;
		cout<<"Prestamo solicitado "<<20000-saldo<<"$"; 
		
		cout<<"Saldo actual: 20000$"<<endl;
		
		cout<<"======= Presupuesto Repartido En =======";
		
		cout<<"   A-) -5000$ Equipo de Computo"<<endl;
		cout<<"   B-) -2000$ Mobiliaria"<<endl;
		cout<<"   C-) -"<<f2()<<"$ Insumos y -"<<f2()<<"$ Incentivos para el personal";
		
		break;
		
		case 3: 
		
		cout<<"Saldo: "<<saldo<<endl;
		cout<<"Prestamo solicitado 0$"<<endl; 
		
		cout<<"Saldo actual: "<<saldo<<endl;
		
		cout<<"======= Presupuesto Repartido En ======="<<endl;
		
		cout<<"   A-) -5000$ Equipo de Computo"<<endl;
		cout<<"   B-) -2000$ Mobiliaria"<<endl;
		cout<<"   C-) -"<<f3()<<"$ Insumos y -"<<f3()<<"$ Incentivos para el personal";
		
		break;
		
		default: cout<<"\n\tERROR..."; break;
		}
	
	
	return 0;
}

float f1(){
	float c;
	c = 10000;
	c = c - 5000 - 2000;
	c = c / 2;
	return c;
	}

float f2(){
	float c;
	c = 20000;
	c = c - 5000 - 2000;
	c = c / 2;
	return c;
	}

float f3(){
	float c;
	c = saldo;
	c = c - 5000 - 2000;
	c = c / 2;
	return c;
	}
