/*Realizar un algoritmo/programa que rellene un vector con los números pares comprendidos entre 1 y
100. Posteriormente los muestre en pantalla en orden ascendente y descendente.*/
#include<iostream>
 #include<cstdlib>
using namespace std;
int i, tabla[50] , num = 0, n = 0;
int vector();
  int main() { 
  vector();
	return 0;
}
int vector(){

   for (i=0;i<=100;i++){
   	if(i%2 == 0){
	tabla[n] = i;
	n++;}
	}
   cout << "forma acendente " << endl;
    for(i=1;i<n;i++)
   { 
   
   cout<<"numeros enteros  " <<num<< " arreglo de numeros enteros "<<tabla[i]<<endl;
   num++;
    }
    cout << "forma decendente" << endl;
    cout << "... FINALIZOELPROCESO DELLENADODELVECTOR... " << endl;
	cout << "... Presionela tecla< ENTER> para continuar ..." << endl; 
	getchar();
	getchar();
	system("clear");
		for(i=50;i>=0;i--)
   { 
   
   cout<<"numeros enteros  " <<num<< " arreglo de numeros enteros "<<tabla[i]<<endl;
   num++;
    }
    return num;
}
