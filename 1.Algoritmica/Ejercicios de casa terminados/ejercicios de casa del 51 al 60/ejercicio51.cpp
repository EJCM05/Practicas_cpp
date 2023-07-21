/*Mostar el nombre del día de la semana que corresponda,pidiéndole al usuario un valor
 numérico entero comprendido entre 1 y 7. */
#include <iostream>
using namespace std;
//funciones
void f1();
//variables
int op;
int main(){
	f1();
	return 0;
}
void f1(){
	cout<<"ingrese un numero de la semana: "<<endl;cin>>op;
	switch(op){
		case 1:
			cout<<"El dia es lunes"<<endl;
		break;
		case 2:
			cout<<"El dia es martes"<<endl;
		break;
		case 3:
			cout<<"El dia es miercoles"<<endl;
		break;
		case 4:
			cout<<"El dia es Jueves"<<endl;
		break;
		case 5:
			cout<<"El dia es viernes"<<endl;
		break;
		case 6:
			cout<<"El dia es sabado"<<endl;
		break;
		case 7:
			cout<<"El dia es Domingo"<<endl;
		break;
		default: cout<<"ingrese un valor de 1 al 7"<<endl;
		}
	}
