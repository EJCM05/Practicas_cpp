/* Ejercicio 53: Desarrollar un algoritmo/programa que permita leer 4 calificaciones para 4 estudiantes, con 
notas comprendidas entre 1 y 8 puntos. Presentar en pantalla los datos de cada estudiante. 
Las notas reflejadas (las notas se deben validar para que no se puedan registrar 
calificaciones diferentes al rango comprendido entre 1 y 8), la calificación definitiva y su 
valoración cualitativa en función del siguiente criterio:
a. Uno (1) Muy Deficiente
b. Dos (2) Deficiente
c. Tres (3) Mejorable
d. Cuatro (4) Regular
e. Cinco (5) Aceptable
f. Seis (6) Bueno
g. Siete (7) Sobre Saliente
h. Ocho (8) Excelente
 */
 
#include<iostream>
using namespace std;

int def1(), def2(), def3(), def4();

int notas1[4], notas2[4], notas3[4], notas4[4], c=0;
char flag='F';

int main(){
	
	// PIDUENDO NOTAS DE LOS ESTUDIANTES
		cout<<"\n\t.: Estudiante 1 :. "<<endl<<endl;
	for(int i=0; i<4; i++){
		flag='F';
		while(flag!='V'){
		cout<<"\t** Ingrese Nota "<<i+1<<": "; cin>>notas1[i];
		if(notas1[i]>=1 && notas1[i]<=8){
			flag='V';
		}
		}
	}
	
	system("cls");
	
		cout<<"\n\t.: Estudiante 2 :. "<<endl<<endl;
	for(int i=0; i<4; i++){
		flag='F';
		while(flag!='V'){
		cout<<"\t** Ingrese Nota "<<i+1<<": "; cin>>notas2[i];
		if(notas2[i]>=1 && notas2[i]<=8){
			flag='V';
		}
		}
	}
	system("cls");
		cout<<"\n\t.: Estudiante 3 :. "<<endl<<endl;
	for(int i=0; i<4; i++){
		flag='F';
		while(flag!='V'){
		cout<<"\t** Ingrese Nota "<<i+1<<": "; cin>>notas3[i];
		if(notas3[i]>=1 && notas3[i]<=8){
			flag='V';
		}
		}
	}
	system("cls");
		cout<<"\n\t.: Estudiante 4 :. "<<endl<<endl;
	for(int i=0; i<4; i++){
		flag='F';
		while(flag!='V'){
		cout<<"\t** Ingrese Nota "<<i+1<<": "; cin>>notas4[i];
		if(notas4[i]>=1 && notas4[i]<=8){
			flag='V';
		}
		}
	}
	system("cls");
	
	// IMPRIMIENDO EN PANTALLA: 
	cout<<"\n\t.: Estudiante 1 :."<<endl;
	cout<<"\n ** NOTAS **"<<endl;
	for(int i=0; i<4; i++){
		cout<<"\n\tNota "<<i+1<<": "<<notas1[i];
	}
	cout<<"\n\n ** DEFINITIVA = "<<def1()<<" ** "<<endl<<endl;
	switch(def1()){
		case 1: cout<<" ** MUY DEFICIENTE ** "; break;
		case 2: cout<<" ** DEFICIENTE ** "; break;
		case 3: cout<<" ** MEJORABLE ** "; break;
		case 4: cout<<" ** REGULAR ** "; break;
		case 5: cout<<" ** ACEPTABLE ** "; break;
		case 6: cout<<" ** BUENO ** "; break;
		case 7: cout<<" ** SOBRE SALIENTE ** "; break;
		case 8: cout<<" ** EXCELENTE ** "; break;
	}
	
	cout<<endl<<endl;
	
	cout<<"\n\n=========================================================================\n\n";
	
	system("pause");
	system("cls");
	
	cout<<"\n\t.: Estudiante 2 :."<<endl;
	cout<<"\n ** NOTAS **"<<endl;
	for(int i=0; i<4; i++){
		cout<<"\n\tNota "<<i+1<<": "<<notas2[i];
	}
	cout<<"\n\n ** DEFINITIVA = "<<def2()<<" ** "<<endl<<endl;
	switch(def2()){
		case 1: cout<<" ** MUY DEFICIENTE ** "; break;
		case 2: cout<<" ** DEFICIENTE ** "; break;
		case 3: cout<<" ** MEJORABLE ** "; break;
		case 4: cout<<" ** REGULAR ** "; break;
		case 5: cout<<" ** ACEPTABLE ** "; break;
		case 6: cout<<" ** BUENO ** "; break;
		case 7: cout<<" ** SOBRE SALIENTE ** "; break;
		case 8: cout<<" ** EXCELENTE ** "; break;
	}
	
	cout<<endl<<endl;
	
	cout<<"\n\n=========================================================================\n\n";
	
	system("pause");
	system("cls");
	cout<<"\n\t.: Estudiante 3 :."<<endl;
	cout<<"\n ** NOTAS **"<<endl;
	for(int i=0; i<4; i++){
		cout<<"\n\tNota "<<i+1<<": "<<notas3[i];
	}
	cout<<"\n\n ** DEFINITIVA = "<<def3()<<" ** "<<endl<<endl;
	switch(def3()){
		case 1: cout<<" ** MUY DEFICIENTE ** "; break;
		case 2: cout<<" ** DEFICIENTE ** "; break;
		case 3: cout<<" ** MEJORABLE ** "; break;
		case 4: cout<<" ** REGULAR ** "; break;
		case 5: cout<<" ** ACEPTABLE ** "; break;
		case 6: cout<<" ** BUENO ** "; break;
		case 7: cout<<" ** SOBRE SALIENTE ** "; break;
		case 8: cout<<" ** EXCELENTE ** "; break;
	}
	
	cout<<endl<<endl;
	
	cout<<"\n\n=========================================================================\n\n";
	
	system("pause");
	system("cls");
	cout<<"\n\t.: Estudiante 4 :."<<endl;
	cout<<"\n ** NOTAS **"<<endl;
	for(int i=0; i<4; i++){
		cout<<"\n\tNota "<<i+1<<": "<<notas4[i];
	}
	cout<<"\n\n ** DEFINITIVA = "<<def4()<<" ** "<<endl<<endl;
	switch(def4()){
		case 1: cout<<" ** MUY DEFICIENTE ** "; break;
		case 2: cout<<" ** DEFICIENTE ** "; break;
		case 3: cout<<" ** MEJORABLE ** "; break;
		case 4: cout<<" ** REGULAR ** "; break;
		case 5: cout<<" ** ACEPTABLE ** "; break;
		case 6: cout<<" ** BUENO ** "; break;
		case 7: cout<<" ** SOBRE SALIENTE ** "; break;
		case 8: cout<<" ** EXCELENTE ** "; break;
	}
	
	cout<<endl<<endl;
	cout<<"\n\n=========================================================================\n\n";
	system("pause");
	system("cls");
	
	system("pause");
	return 0;
}

// FUNCIONES PARA CALCULAR LA NOTA DEFINITIVA

int def1(){
	int c=0;
	for(int i=0; i<4; i++){
		c = c + notas1[i];
	}
	c/=4;
	return c;
}
int def2(){
	int c=0;
	for(int i=0; i<4; i++){
		c = c + notas2[i];
	}
	c/=4;
	return c;
}
int def3(){
	int c=0;
	for(int i=0; i<4; i++){
		c = c + notas3[i];
	}
	c/=4;
	return c;
}
int def4(){
	int c=0;
	for(int i=0; i<4; i++){
		c = c + notas4[i];
	}
	c/=4;
	return c;
}
