/* Ejercicio 50: Una persona desea iniciar un negocio, para lo cual piensa verificar cuánto dinero le
prestaría el banco por hipotecar su casa. Tiene una cuenta bancaria, pero no quiere
disponer de ella a menos que el monto por hipotecar su casa sea muy pequeño.

 Si el monto de la hipoteca es menor que $1.000.000 entonces invertirá el 50% de la inversión
total, y un socio invertirá el otro 50%.

 Si el monto de la hipoteca es de $1.000.000 o más, entonces invertirá el monto total de la 
hipoteca y el resto del dinero que se necesite paracubrir la inversión total se repartirá a 
partes iguales entre el socio y él. */

#include<iostream>
using namespace std;

void f1(), f2();

int inver_total, costo_hipoteca;

int main(){
	
	cout<<"\n\tIngrese el total de la inversion: "; cin>>inver_total;
	cout<<"\n\tIngrese el total del prestamo por la hipoteca: "; cin>>costo_hipoteca;
	
	if(costo_hipoteca<1000000){
		f1();
		}
	else{
		if(costo_hipoteca>=100000){
			f2();
			}
		}
	
	return 0;
}

void f1(){
	float c;
	c = inver_total /2;
	cout<<"El Costo de la hipoteca es: "<<costo_hipoteca<<" Por lo tanto:"<<endl;
	cout<<"tEl total a invertir seria: "<<c<<"Bs, siendo este el 50% de la inversion total de "<<inver_total<<"Bs"<<endl;
	cout<<"saldo restante: "<<costo_hipoteca-c<<endl;
	}

void f2(){
	cout<<"El Costo de la hipoteca es: "<<costo_hipoteca<<", \n\tPor lo tanto:"<<endl;
	cout<<"El total a invertir seria: "<<costo_hipoteca<<"Bs, restando para la inversion total "<<inver_total-costo_hipoteca<<"Bs"<<endl;
	cout<<"saldo restante: "<<inver_total-costo_hipoteca<<endl;
	cout<<"los "<<inver_total-costo_hipoteca<<"bs que faltan para cubrir el costo de la inversion, se repartiran en partes iguales: ";
	cout<<"Quedando: "<<(inver_total-costo_hipoteca)/2<<"bs que cubrir para cada uno."<<endl;
	}
