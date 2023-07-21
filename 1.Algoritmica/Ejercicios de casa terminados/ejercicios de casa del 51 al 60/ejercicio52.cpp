/* Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes
al que corresponde*/
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
	cout<<"ingrese un numero para el mes del año: "<<endl;cin>>op;
	switch(op){
		case 1:
			cout<<"El mes es Enero"<<endl;
		break;
		case 2:
			cout<<"El mes es Febrero"<<endl;
		break;
		case 3:
			cout<<"El mes es Marzo"<<endl;
		break;
		case 4:
			cout<<"El mes es Abril"<<endl;
		break;
		case 5:
			cout<<"El mes es Mayo"<<endl;
		break;
		case 6:
			cout<<"El mes es Junio"<<endl;
		break;
		case 7:
			cout<<"El mes es Julio"<<endl;
		break;
		case 8:
			cout<<"El mes es Agosto"<<endl;
		break;
		case 9:
			cout<<"El mes es Septiembre"<<endl;
		break;
		case 10:
			cout<<"El mes es Octubre"<<endl;
		break;
		case 11:
			cout<<"El mes es Noviembre"<<endl;
		break;
		case 12:
			cout<<"El mes es Diciembre"<<endl;
		break;
		default: cout<<"ingrese un valor de 1 al 12 para mostrar el mes correspondiente"<<endl;
		}
	}

