/*Resuelva el problema que tiene una gasolinera. Los surtidores de la misma registran lo que
surten en galones, pero el precio de la gasolina está fijado en litros. Se requiere que
calcule y muestre lo que hay que cobrarle a un cliente, considerando que: (a) cada galón
tiene 3.785 litros; (b) el precio del litro es de 100 Bolívares.*/
#include<iostream>
#include<conio.h>
using namespace std;
//Area de declaracion de funciones
	float price(float d), litros();
//area de variables
	float demanda, galon = 3.785, l_price= 100; 
int main(){
	cout<<"Ingrese la cantidad de galones que desea surtir"<<endl;
	cin>>demanda;
	cout<<price(demanda)<<endl;
	getch();
	return 0;
}
float price(float d){
		float result, result2;
		result = demanda * galon;
		result2 = result * l_price;
	cout<<"La cantidad de galones en litros es de "<<result,cout<<"L El precio en bolivares es de "<<result2,cout<<"Bs.S"<<endl;
	return 0;
}

