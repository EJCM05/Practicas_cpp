/*
 El gobierno del estado de México desea reforestar un bosque que mide determinado
número de hectáreas. Si la superficie del terreno excede a 1 millón de metros cuadrados,
entonces decidirá sembrar de la siguiente manera:
	PORCENTAJE DE LA
  SUPERFICIE DEL BOSQUE					TIPO DE ÁRBOL
 	70%										Pino
	20%  									Oyamel
	10%  									Cedro
Si la superficie del terreno es menor o igual a un millón de metros cuadrados, entonces
decidirá sembrar de la siguiente manera:
PORCENTAJE DE LA SUPERFICIE DEL BOSQUE         TIPO DE ÁRBOL
	50%                                         Pino
	30%											Oyamel
	20% 										Cedro
El gobierno desea saber el número de pinos, oyameles y cedros que tendrá que sembrar
en el bosque, si se sabe que en 10 metros cuadrados caben 8 pinos, en 15 metros
cuadrados caben 15 oyameles y en 18 metros cuadrados caben 10 cedros. También se
sabe que una hectárea equivale a 10 mil metros cuadrados.
 */
#include <iostream>
using namespace std;
//funciones
int f1(),f2(),f3(),f4(),f5(),f6(),f7();
//variables
int result, result2, result3;
int pino_max = 70 , oyamel_max = 20,cedro_max = 10;
int pino_min = 50 , oyamel_min = 30, cedro_min = 20;
int t_terreno,min_tam = 1000000; 

int main(){
	cout<<"Ingrese la cantidad de metros cuadrados a Reforestar: ";cin>>t_terreno;
	cout<<f1()<<endl;
	return 0;
}
int f1(){
	if(t_terreno <= min_tam){
		cout<<"El tamaño de la siembra de pino es de: "<<f2()<<" unidades"<<endl;
		cout<<"El tamaño de la siembra de oyamel es de: "<<f3()<<" unidades"<<endl;
		cout<<"El tamaño de la siembra de cedro es de: "<<f4()<<" unidades"<<endl;
		}
	else{
		cout<<"El tamaño de la siembra de pino es de: "<<f5()<<" unidades"<<endl;
		cout<<"El tamaño de la siembra de oyamel es de: "<<f6()<<" unidades"<<endl;
		cout<<"El tamaño de la siembra de cedro es de: "<<f7()<<" unidades"<<endl;
		
		}	
	return 0;
	}
int f5(){
	int res;
	res =(((pino_max * t_terreno)/100)/10)/8;
	return res;
	}	
int f6(){
	int res2;
	res2=  (((oyamel_max * t_terreno)/100)/15)/15;
	return res2;
	}
int f7(){
	int res3;
	res3 = (((cedro_min * t_terreno)/100)/15)/10;
	return res3;
	}
	
int f2(){
	result = (((pino_min * t_terreno)/100)/10)/8;
	return result;
	}
int f3(){
	result2 = (((oyamel_min * t_terreno)/100)/15)/15;
	return result2;
	}
int f4(){
	result3 = (((cedro_min * t_terreno)/100)/15)/10;
	return result3;
	}
