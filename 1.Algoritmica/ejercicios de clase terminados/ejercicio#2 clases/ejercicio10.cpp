/*
Desarrollar un algoritmo/programa que permita registrar 3 notas de un estudiante.
Calcular su calificacióndefinitiva. Mostar en pantalla la calificación definitiva,
de igual forma, indicar con un mensaje la expresión "FELICITACIONES APROBO LA MATERIA", 
cuando la calificación sea superior o igual a 12 puntos, en
caso contrario no se emitirá ningún tipo de mensaje.
 */
#include <iostream>
using namespace std;
float form(float n1,float n2, float n3);
float nota1,nota2,nota3;
string nombre;
string apellido;
int main(){
	cout<<"********PROGRAMA PARA CALIFICACION DE ESTUDIANTE********"<<endl;
	cout<<"Por favor ingrese su nombre: "<<endl;cin>>nombre;
	cout<<"Por favor ingrese su Apellido: "<<endl;cin>>apellido;
	cout<<"ingrese el valor de la primera nota "<<endl;cin>>nota1;
	cout<<"ingrese el valor de la segunda nota "<<endl;cin>>nota2;
	cout<<"ingrese el valor de la tercera nota "<<endl;cin>>nota3;
	cout<<"Estudiante: "<<nombre;cout<<" "<<apellido<<endl;
	cout<<form(nota1,nota2,nota3)<<endl;
	return 0;
	}
float form(float n1,float n2, float n3){
 float result;
 result = (nota1 + nota2 + nota3)/3;
 
 if(result >= 12){
	 cout<<"FELICITACIONES APROBO LA MATERIA"<<endl;
	 cout<<"Su nota es de: ";
	 }
 else{
	 cout<<"Su nota es de: "; 
	 }
	return result;
}

