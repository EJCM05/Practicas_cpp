/* 60) Desarrollar un algoritmo/programa en lenguaje C que permita registrar 4 notas de 5 estudiantes,
posteriormente calcular la calificación definitiva almacenándola en un vector. Seguidamente presentar
en pantalla un listado de los promedios ordenados en forma ascendente y otro en forma descendente. */

#include<iostream>

using namespace std;

int es1[4];
int es2[4];
int es3[4];
int es4[4];
int es5[4];
int def[5];

float sum=0;

void f1();

int main(){
	for(int i=0;i<4;i++){
		cout <<endl<< " Ingrese la nota "<<i+1<<" del estudiante 1: ";cin>>es1[i];
		sum+=es1[i];
		}
		def[0]=sum/4;
		sum=0;
		system("clear");
for(int i=0;i<4;i++){
		cout <<endl<< " Ingrese la nota "<<i+1<<" del estudiante 2: ";cin>>es2[i];
		sum+=es2[i];
		}
		def[1]=sum/4;
		sum=0;
		system("clear");
for(int i=0;i<4;i++){
		cout << " Ingrese la nota "<<i+1<<" del estudiante 3: ";cin>>es3[i];
		sum+=es3[i];
		}
		def[2]=sum/4;
		sum=0;	
	system("clear");
for(int i=0;i<4;i++){
		cout << " Ingrese la nota "<<i+1<<" del estudiante 4: ";cin>>es4[i];
		sum+=es4[i];
		}
		def[3]=sum/4;
		sum=0;
system("clear");
for(int i=0;i<4;i++){
		cout << " Ingrese la nota "<<i+1<<" del estudiante 5: ";cin>>es5[i];
		sum+=es5[i];
		}
		def[4]=sum/4;
		sum=0;
system("clear");
		
		f1();
	return 0;
}
void f1(){
	int i,j,aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(def[j] > def[j+1]){
				aux = def[j];
				def[j] = def[j+1];
				def[j+1] = aux;
			}
		}
	}
		cout<<"Numeros de forma Ascendente: ";
	for(i=0;i<5;i++){
		cout<<def[i]<<" ";
	}
	
	cout<<"\nNumeros de forma Descendente: ";
	for(i=4;i>=0;i--){
		cout<<def[i]<<" ";
	}
	}
