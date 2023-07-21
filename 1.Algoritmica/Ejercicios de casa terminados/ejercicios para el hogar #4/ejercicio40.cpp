/*Elabore un programa que permita emitir la factura correspondiente a una compra de un
artículo determinado, del que se adquieren una o varias unidades. El IVA es del 12% y si el
monto bruto (precio venta más IVA) es mayor de 250.00 Bs.F se debe realizar un descuento
del 5% sobre el monto total.*/
#include <iostream>
#include <cstring>
using namespace std;
//funciones
float f1();
//variables 
float price_a, u_articulo ,iva1 = 0.12, iva2 = 0.5, op1,op2,op3,op4;
string articulo;

int main(){
	cout<<"*****************Factura de compra************************"<<endl;
	cout<<"Ingrese el nombre del articulo: "<<endl;cin>>articulo;
	cout<<"Ingrese el precio del articulo: "<<endl;cin>>price_a;
	cout<<"¿cuantas unidades desea llevar?: "<<endl;cin>>u_articulo;
	cout<<"----------------Procesando calculo-------------------------"<<endl;
	system("clear");
	cout<<f1()<<endl;
	return 0;
}
float f1(){
	op1 = price_a * u_articulo;
	op2 = (op1 * iva1) + op1 ;
	op3 = (op2 * iva2);
	op4 = op2 - op3;
	if(op1 < 250){
		cout<<"Su precio es de: "<<op2<<" con un iva del 12%"<<endl;
		}
	else{
		cout<<"Su precio es de: "<<op3<<" descuento del 5%"<<endl;
		}
	return 0;
	}
