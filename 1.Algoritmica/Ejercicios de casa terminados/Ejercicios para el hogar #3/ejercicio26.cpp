/*En la fábrica de zapatos ―Los Pies de Todos‖, quieren un sistema de facturación, el cual
permita efectuarle un descuento del 17,28%, en caso que la compra sea superior a Bs.
152.387,00.*/
#include <iostream>
using namespace std;
//funciones
float factura();
//variables
float precio,descuento = 1728;
int main(){
	cout<<"Ingrese el monto a pagar: "<<endl;cin>>precio;
	cout<<factura()<<endl;
	return 0;
}
float factura(){
	float monto, result2;
	double  result;
	result = (descuento * precio)/100;
	monto = result / 100;
	result2 = precio - monto;  
	if(precio  > 152.387){
	cout<<"***Facturacion De la Fabrica de zapatos***"<<endl;
	cout<<"Precio total: "<<precio;
	cout<<"Bs.S"<<endl;
	cout<<"Con un descuento de: "<<monto;
	cout<<"Bs.S"<<endl;
	cout<<"El monto total es de: "<<result2;
	cout<<"Bs.S"<<endl;
	}
    else{
	cout<<"el monto total es de: "<<precio;
	cout<<" Bs.S"<<endl;
	}
	return 0;
	}
