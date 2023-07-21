/*Desarrollar un algoritmo/programa que permita ejecutar el siguiente menú y submenú de
opciones:
MENU PRINCIPAL
a. 1-. OPERACIONES MATEMÁTICAS
1-. Calcular la raíz cuadrada de un número
2-. Calcular la potencia de un número
3-.Salir del Submenú
b. 2-. CALCULADORA
1-. Ejecutar la suma de 2 números
2-. Ejecutar la multiplicación de 2 números
3-. Ejecutar la resta de 2 números
4-. Salir del Submenú
c. 3-. TRABAJOS VARIOS
1-. Registrar notas de un estudiante
2-. Indicar el nombre del día de la semana
3-. Salir del Submenú
d. 4-. SALIR DEL PROGRAMA
* */
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <cmath>
#include <math.h>
using namespace std;
//funciones
void menu_principal(),submenu_1(),submenu_2(),submenu_3(),f6(),f7();
float f1(),f2(),f3(),f4(),f5();
float p1 = 0,p= 0,result2= 0;
//variables
int op,op2,op3,op4;
int main(){
	 menu_principal();
	return 0;
}
void menu_principal(){
    cout<<"------------------------------------------------"<<endl;
	cout<<"             MENU PRINCIPAL                     "<<endl<<endl;
	cout<<" 1-. OPERACIONES MATEMÁTICAS   				   "<<endl;
	cout<<" 2-. CALCULADORA                                "<<endl;
	cout<<" 3-. TRABAJOS VARIOS 						   "<<endl;
	cout<<" 4-. SALIR DEL PROGRAMA      				   "<<endl;
    cout<<"------------------------------------------------"<<endl<<endl;	
	cout<<"Ingrese una opcion del menu: ";cin>>op;
	cin.get();
	system("clear");
	switch(op){
		case 1: submenu_1();cout<<endl;
		break;
		case 2: submenu_2();cout<<endl;
		break;
		case 3: submenu_3();cout<<endl;
		break;
		case 4:
		system("exit");
		cout<<"HASTA LUEGO!!!!"<<endl;
		break;
		default:
		system("clear");
		cout<<"ingrese una opcion valida: "<<endl;
		menu_principal();
		}
	}
void submenu_3(){
	cout<<"------------------------------------------------"<<endl<<endl;
	cout<<"               TRABAJOS VARIOS                  "<<endl;
    cout<<"    1-. Registrar notas de un estudiante		   "<<endl;
	cout<<"    2-. Indicar el nombre del día de la semana  "<<endl;
	cout<<"    3-. Salir del Submenú                       "<<endl;
	cout<<"------------------------------------------------"<<endl<<endl;
	cout<<"Ingrese una opcion: ";cin>>op4;
	switch(op4){
		case 1:
		system("clear");
	    f6();
		submenu_3();
		break;
		case 2: 
		system("clear");
		f7();
		submenu_3();
		break;
		case 3:
		system("clear");
		menu_principal();
		break;
		}
	}
void f7(){
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
void f6(){
	int n_est; 
	float notas[100], def=0;
	cout<<" Funcion: Registrar Notas de Un Estudiante :."<<endl;
	cout<<" **Cuantas Notas Desea Ingresar:  "; cin>>n_est;
	cout<<endl;
	for(int n=0; n<=n_est-1; n++){
		cout<<"  * Nota "<<n+1<<":  "; cin>>notas[n];
		def = def + notas[n];
	}
	def /= n_est;
	cout<<" Nota Definitiva Del Estudiante:  "<<def<<endl; 
	cin.get();
	}
void submenu_2(){
	cout<<endl;
	cout<<"------------------------------------------------"<<endl<<endl;
	cout<<"           Calculadora                          "<<endl;
	cout<<" 1.  Ejecutar la suma de 2 números              "<<endl;
	cout<<" 2-. Ejecutar la multiplicación de 2 números    "<<endl;
	cout<<" 3-. Ejecutar la resta de 2 números             "<<endl;
	cout<<" 4-. Salir del Submenú                          "<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"Ingrese una opcion: ";cin>>op3;
	switch(op3){
		case 1:
		system("clear");
		cout<<f3()<<endl;
		submenu_2();
		break;
		case 2: 
		system("clear");
		cout<<f4()<<endl;
		submenu_2();
		break;
		case 3:
		system("clear");
		cout<<f5()<<endl;
		submenu_2();
		break;
		case 4:
		system("clear");
		menu_principal();
		break;
		}
	}
float f5(){
	float res1,res2,result;
	cout<<"Ejecutar la resta de 2 numeros:"<<endl;
	cout<<"Ingrese el numero 1: ";cin>>res1;
	cout<<"Ingrese el numero 2: ";cin>>res2;
	result= res1-res2;
	cout<<"El resultado de la Resta es: ";
	return result;
	}
float f4(){
	float mul1,mul2,result;
	cout<<"Ejecutar la multiplicacion de 2 numeros:"<<endl;
	cout<<"Ingrese el numero 1: ";cin>>mul1;
	cout<<"Ingrese el numero 2: ";cin>>mul2;
	result= mul1*mul2;
	cout<<"El resultado de la multiplicacion es: ";
	return result;
	}
float f3(){
	float sum1,sum2,result;
	cout<<"Ejecutar la suma de 2 numeros:"<<endl;
	cout<<"Ingrese el numero 1: ";cin>>sum1;
	cout<<"Ingrese el numero 2: ";cin>>sum2;
	result= sum1+sum2;
	cout<<"El resultado de la suma es: ";
	return result;
	}
void submenu_1(){
    cout<<"------------------------------------------------"<<endl;
	cout<<"         OPERACIONES MATEMÁTICAS				   "<<endl;
    cout<<"1-. Calcular la raíz cuadrada de un número "<<endl;
    cout<<"2-. Calcular la potencia de un número	   "<<endl;
    cout<<"3-. Salir del Submenú                       "<<endl;
	cout<<"------------------------------------------------"<<endl<<endl;
	cout<<"Ingrese una opcion: ";cin>>op2;
	switch(op2){
	case 1:
	system("clear");
	cout<<"Cacular la raiz cuadrada de un numero: "<<endl<<endl;
	cout<<f1()<<endl;
	submenu_1();
	break;
	case 2:
	cout<<"Cacular la potencia de un numero: "<<endl;
	cout<<f2()<<endl;
	submenu_1();
	break;
	case 3:
	cout<<"Salir del Submenu "<<endl;
	system("clear");
	menu_principal();
	break;
	default: cout<<"Ingrese una opcion valida."<<endl;
		}
	}
float f1(){
	float result,n1;
	cout <<"Pon un numero para obtener la raiz cuadrada: ";cin >> n1; 
	result = sqrt(n1); 
	cout << "La raiz cuadrada de " << n1 << " es "; 
	return result;
	}
float f2(){
	cout<<"Ingrese un numero: ";
	cin>>p1;
	cout<<"Ingrese la potencia: ";
	cin>>p;
	result2 = pow(p,p1);
	cout<<"El numero "<<p1<<" Elevado a la potencia "<<p <<" es ";
	return result2;
	}
