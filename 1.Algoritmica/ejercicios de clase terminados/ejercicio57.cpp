/*
Desarrollar un algoritmo/programa en Lenguaje C++, que nos permita registrar 5 calificaciones para 5
estudiantes. Cada estudiante se identifica con el número de cédula. El programa se debe desarrollar con
los vectores que sean requeridos. Al final almacenar también en el vector el acumulado de las notas, la
definitiva de cada estudiante. Mostar en pantalla el listado de estudiantes con todos los valores
almacenados en los vectores y su respectiva valoración cualitativa. Debe existir un menú que en una de
sus alternativas permita realizar la búsqueda de la información de un estudiante por su número de cédula.
 */
#include <iostream>
using namespace std;
//funciones
void f1(), f3(), menu();
int f2();
//variables
int npersonas;
int j, suma;
bool s=true,n=false;
int cedulas[1000];
int n1, n2, n3, n4,n5;
int objeto;
int op;
int main(){
	menu();
	return 0;
}
void menu(){
	cout<<"        ---Menu---        "<<endl;
	cout<<"1. Registrar estudiantes  "<<endl;
	cout<<"2. Mostrar informacion    "<<endl;
	cout<<"--------------------------"<<endl;
	cin>>op;
	switch(op){
		case 1:
		f1();break;
		case 2:
		f3();break;
		default: cout<<"Selecione una opcion valida"<<endl;
		system("clear");
		menu();
		}
	
	
	}
void f1(){
	//relleno de personas
	cout<<"¿Cuantas personas desea registrar?"<<endl;cin>>npersonas;
	//relleno del vector
	for(int i=0;i<npersonas;i++){
			cout<<"Registro de estudiantes"<<endl;
			cout<< i+1 << " Cedula de estudiante ";
			cin>>cedulas[i];	
		cout<<"Nota 1"<<endl;cin>>n1;
		cout<<"Nota 2"<<endl;cin>>n2;
		cout<<"Nota 3"<<endl;cin>>n3;
		cout<<"Nota 4"<<endl;cin>>n4;
		cout<<"Nota 5"<<endl;cin>>n5;
		}
	return(menu());
	}

void f3(){
	//cedulas
	cout << "Indique la cedula que desea Buscar: ";
	cin >> objeto;
	//bucle para buscar en el vector
	for (int i= 0 ; i < 10 ; i++ ){
	if ( cedulas[i] == objeto){
	cout<<"La cedula " << objeto << endl;
	cout<<"SE ENCUENTRA EN LA CELDA: "<<cedulas[i]<<endl;
	cout<<"Las notas del estudiante son: "<<endl;
	cout<<n1<<endl;
	cout<<n2<<endl;
	cout<<n3<<endl;
	cout<<n4<<endl;
	cout<<n5<<endl;
	suma = (n1+n2+n3+n4+n5)/5; 
	cout<<"la nota final es: "<<suma;
			
			}
		}
	cout<<f2()<<endl;
	}	
int f2(){
	char valor;
	cout<<"¿Desea volver a registrar otro valor?";
	cin>>valor;
	if(valor == s){
		system("clear");
		f1();
		}
	else{
		exit(0);
	cout<<"ADIOS!!!"<<endl;
		}
	return 0;
	}
