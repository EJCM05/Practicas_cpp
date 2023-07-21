/*Dado un tiempo en segundos, calcular los segundos restantes que le corresponden para
convertirse exactamente en minutos.*/
#include <iostream>
using namespace std;
float f1();
float seg, t= 60;
int main(){
	cout<<"Ingrese los segundos: "<<endl;cin>>seg;
	cout<<f1()<<endl;
	
	return 0;
}
float f1(){
 float result;
   result= t-seg;
 if( seg >= 1 && seg <= 60){
	cout<<"El tiempo restante es de: "<<result<<endl; 
	}
 else{
	 cout<<"Ingrese un numero valido entre 1 Segundo y 60 segundos "<<endl;
	 }
 return 0;
 }
