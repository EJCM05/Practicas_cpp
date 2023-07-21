/*Registrar tres dígitos enteros.
 Se debe indicar si alguno de ellos corresponde a la sumatoria de los otros dos.*/

#include <iostream>
using namespace std;
//funciones
int f1();
//variables
int n1,n2,n3;
int main(){
	cout<<"Indique el primer numero: ";cin>>n1;
	cout<<"Indique el segundo numero: ";cin>>n2;
	cout<<"Indique el tercer numero: ";cin>>n3;
	system("clear");
	cout<<f1();
	return 0;
}
int f1(){
	int sum;
	sum = n1+n2;
	if(sum == n3){
		cout<<"La suma del primer numero y el segundo numero, es igual al tercer numero"<<endl;
		}
	else{
		cout<<"La suma de los dos digitos es: "<<sum<<" El tercer digito es: "<<n3<<endl; 
		}
		
	
	
	
	return 0;}
