/*Leer tres números naturales y calcular el máximo el mínimo y el promedio de esos
números.*/
#include <iostream>
using namespace std;
int f1(),f2();
int a,b,c;
int main(){
	cout<<"Ingrese el primer numero"<<endl;cin>>a;
	cout<<"Ingrese el segundo numero"<<endl;cin>>b;
	cout<<"Ingrese el tercer numero"<<endl;cin>>c;
	cout<<""<<f1()<<endl;
	cout<<"El promedio de los tres numeros es: "<<f2()<<endl; 
	return 0;
}
int f1(){
	//primera
	    if ((a != b) && (a != c) && (b != c)){
        if (a > b){
            if (a > c){
                cout<< "El numero mayor es: "<<a<<endl;
            }
            else{
                cout<< "El numero mayor es: "<<c<<endl;
          }
        }
        else{
            if (b > c){
                cout<< "El numero mayor es: "<<b<<endl;
            }
            else{
                cout<< "EL numero mayor es: "<<c<<endl;
            }
        }
    }
    else{
        cout<< "Los numeros no son diferentes"<<endl;
   } 
   //segunda  
   if ((a != b) && (a != c) && (b != c)){
        if (a < b){
            if (a < c){
                cout<< "El numero menor es: "<<a<<endl;
            }
            else{
                cout<< "El numero menor es: "<<c<<endl;
          }
        }
        else{
            if (b < c){
                cout<< "El numero menor es: "<<b<<endl;
            }
            else{
                cout<< "EL numero menor es: "<<c<<endl;
            }
        }
    }
    else{
        cout<< "Los numeros no son diferentes"<<endl;
   } 
      
   return 0;
}
int f2(){
	int result;
	result = (a+b+c) / 3;
	return result;
	}

