/*Desarrollar un algoritmo/programa que permita registrar el cálculo del área de un cuadrado y de un
rectángulo, posteriormente sumar las dos áreas. Si el resultado es superior a 350, entonces restarle el 25%
del área. Presentar en pantalla: Todos los datos del cuadrado, todos los datos del rectángulo. La sumatoria
del área total, el área descontada y el área final que queda.
 * */

#include <iostream>
using namespace std;
//area de funciones
float fcuadrado(),frectangulo(), sum(),sum2(), sum3();
//area de variables
float lado_c,alto_r,ancho_r;
int main(){
	cout<<"-------Programa para calcular el area de un cuadrado y de un rectangulo-------"<<endl;
	cout<<"Ingrese uno de los lados del Cuadrado. En centimetros: "<<endl;cin>>lado_c;
	cout<<"Ingrese lo alto y ancho del rectangulo. En centimetros:"<<endl;
	cout<<"Ingrese el alto. En centimetros"<<endl;cin>>alto_r;
	cout<<"Ingrese lo ancho. En centimetros"<<endl;cin>>ancho_r;
	cout<<"El area total del cuadrado es: "<<fcuadrado();cout<<" Cm"<<endl;
	cout<<"El area total del rectanglo es: "<<frectangulo();cout<<" Cm"<<endl;
	cout<<"La sumatoria del area total es: "<<sum();cout<<" Cm"<<endl;
	cout<<sum2()<<endl;
	
	return 0;
}
float fcuadrado(){
	float area_c;
	area_c = lado_c * lado_c;
	return area_c;
	}
float frectangulo(){
	float area_r;
	area_r = alto_r * ancho_r;
	return area_r;
	}
float sum(){
	float result;
	result = fcuadrado() + frectangulo();
	return result;
	}
float sum2(){
	float resultado_d,resultado_f;
	if(sum() >= 350){
		resultado_d = 025 * sum();
		resultado_f = resultado_d-sum();
		cout<<"El area descontada es: "<<resultado_d;
		cout<<" El area total es: "<<resultado_f<<endl;
		}
		return 0;
	}
