/*A un trabajador le descuentan de su sueldo el 10% si su sueldo es menor o igual a 10.000,
por encima de 10.000 y hasta 20.000 el 5% del adicional y por encima de 20.000 el 3% del
adicional. Calcular el descuento y sueldo neto que recibe el trabajador dado el valor de su
sueldo base. */
#include <iostream>
using namespace std;
// funciones 
float f1();
//variables

float sueldo, des_1 = 0.1, des_2 = 0.5 , des_3 = 0.3;
int main(){
	cout<<"Ingrese su sueldo para calcular: "<<endl;cin>>sueldo;
	cout<<f1()<<endl;
	return 0;
}
float f1(){
	 float op, op2, op3, op4,op5,op6;
	 op = sueldo * des_1 ;
	 op2 = sueldo - op;
	 op3 = sueldo * des_2;
	 op4 = sueldo - op3;
	 op5 = sueldo * des_3; 
	 op6 = sueldo - op5;
	 if( sueldo <= 10000){
		 cout<<"Usted recibe un sueldo de: "<<sueldo<<endl;
		 cout<<"con un descuento de "<<op<<" El total seria "<<op2<<endl;
		 }
	 else if( sueldo >= 10000 || sueldo <= 20000 ){
		 cout<<"usted recibe un sueldo de: "<<sueldo<<endl;
		 cout<<"con un descuento de "<<op3<<" El total seria "<<op4<<endl;
		 }
	 else if(sueldo > 20000){
		 cout<<"usted recibe un sueldo de: "<<sueldo<<endl;
		 cout<<"con un descuento de "<<op5<<" El total seria "<<op6<<endl;
		 }
	return 0;
	}

