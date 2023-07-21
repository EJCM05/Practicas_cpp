/*Un comerciante de computadores ofrece -P? precio por compra al contado o 12 cuotas de
-T? Bolivares cada una. Desarrolle un programa para calcular y mostrar cual es el
porcentaje que se cobra por el recargo en el pago del computador por cuotas.*/
#include<iostream>
#include<conio.h>
using namespace std;
	float form(float num);
	
	float pre_contado, pre_cuotas, porcentaje;

int main(){
	cout<<"Ingrese el precio al contado: "<<endl; 
	cin>>pre_contado;
	cout<<"Precio por cuotas (12): "<<endl;
	cin>>pre_cuotas;
	cout<<"Porcentaje de compra por cuotas es de: "<<form(porcentaje)<<"%";
	getch();
	return 0;
}
float form(float num){
	pre_cuotas*=12;
	porcentaje = (pre_cuotas - pre_contado)*100/pre_contado;
	return porcentaje;
}

