/* Desarrollar un  algoritmo/programa 
que nos permita registrar mediante arreglos unidimensionales,
 una lista de “n” números,  y  luego ejecutar lo siguiente: a.- Listar los números positivos,
  con la sumatoria de los mismos y su respectivo promedio. b.- Listar los números negativos,
   con sus respectivos productos.*/
 #include<iostream>
 #include<cstdlib>
 #include<cmath>
 using namespace std;
 int numeros(int nun1);
 int nun3 = 0;
 int main(){
	    cout << " " << endl;
		cout << "ingrese la cantidad de numeros que desea registrar ";cin>>nun3;
	  numeros(nun3);
	 return 0;}
	  int numeros(int nun1){
	int numero [nun1], i, valor = 0, suma1 = 0, suma2 = 0, p_negativos = 0, p_positivos = 0, c_positivos = 0, c_negativos = 0;	  
		  for(i=0; i<nun1; i++){
		cout << " " << endl;
		cout << "ingrese el numero: ";cin>>numero[i];
		 }
		 for(i=0; i<nun1; i++){
		if(numero[i] < 0){
		cout << " " << endl;
		cout << "numeros negativos " << endl;
		cout << " " << endl;
		cout << " "<<numero[i];
		suma1 = suma1+numero[i];
		c_negativos++;
		}
		valor = 1;
		 }
		for(i=0; i<nun1; i++){
		if(numero[i] > 0){
		cout << " " << endl;
		cout << "numeros positivos " << endl;
		cout << " " << endl;
		cout << " "<<numero[i];
		suma2 = suma2+numero[i];
		valor = 2;
		c_positivos++;
		}
		 }
		p_negativos = suma1/c_negativos;
		p_positivos = suma2/c_positivos;
		cout << endl;
		cout << "sumatoria numeros negativos " << suma1;
		cout << " " << endl;
		cout << "sumatoria de numeros positivos " << suma2;
		cout << " " << endl;
		cout << "promedio de numeros negativos " << p_negativos;
		cout << " " << endl;
		cout << "promedio de numeros positivos " << p_positivos;
		  return valor;
		  }
