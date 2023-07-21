/*
 Escribe un algoritmo/programa que defina un vector de números y calcule la suma de sus
elementos
 */
 #include <iostream>
using namespace std;
void f1();
int vector[] = {1, 2, 3, 4, 5};
int suma = 0;
int main(){
	f1();
	return 0;
	}
void f1(){
	int n = sizeof(vector)/sizeof(vector[0]);
	for(int i=0; i<n; i++){
    suma += vector[i];
	}
	cout<<suma<<endl;
		}
