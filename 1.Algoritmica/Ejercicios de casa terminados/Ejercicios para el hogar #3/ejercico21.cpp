/*La Universidad ―Los Inteligentes‖, desea un programa que permita calcular la calificación
definitiva de un estudiante en cada una de las tres unidades curriculares que cursa
(Trompo, Perinola y Cometa), tomando en consideración los siguientes datos de entrada:
cédula del estudiante, primer nombre, segundo nombre, primer apellido, segundo apellido*,
edad, sexo y cinco calificaciones por cada materia a razón de: nota1=15%, nota2=13%,
nota3=25%, nota4=22% y nota5=25%.* Presentar un listado con toda la información del
estudiante, las calificaciones obtenidas por cada materia, así como el monto de sus
porcentajes y la calificación definitiva. De igual forma, al final, presentar el promedio general
del estudiante.*/
#include <iostream>
#include <cstring>
using namespace std;
//area de declaracion de funciones
float formula1(),formula2(),formula3(),total();
//area de variables globales
string trompo,perinola,cometa,p_nombre,s_nombre,p_apellido,s_apellido,sexo;
int cedula_e;
float edad,n1_1,n1_2,n1_3,n1_4,n1_5, n2_1,n2_2,n2_3,n2_4,n2_5, n3_1,n3_2,n3_3,n3_4,n3_5;
float nota1=015,nota2=013,nota3=025,nota4=022, nota5=025;
int main(){
	cout<<"*****Programa para la universidad de los inteligentes*****"<<endl;
	cout<<"********calificacion definitiva de un estudiante**********"<<endl;
	cout<<"Ingrese la cedula Del estudiante: "<<endl;cin>>cedula_e;
	cout<<"Ingrese el primer nombre: "<<endl;cin>>p_nombre;
	cout<<"Ingrese el segundo nombre: "<<endl;cin>>s_nombre;
	cout<<"Ingrese el primer apellido: "<<endl;cin>>p_apellido;
	cout<<"Ingrese el segundo apellido: "<<endl;cin>>s_apellido;
	cout<<"Ingrese la edad: "<<endl;cin>>edad;
	cout<<"Ingrese su sexo: "<<endl<<endl;cin>>sexo;
	cout<<"Primera Unidad curricular *TROMPO*"<<endl;
	cout<<"Ingrese la primera nota con un valor de 15%"<<endl;cin>>n1_1;
	cout<<"Ingrese la segunda nota con un valor de 13%"<<endl;cin>>n1_2;
	cout<<"Ingrese la tercera nota con un valor de 25%"<<endl;cin>>n1_3;
	cout<<"Ingrese la cuarta nota con un valor de 22%"<<endl;cin>>n1_4;
	cout<<"Ingrese la quinta nota con un valor de 25%"<<endl;cin>>n1_5;
	cout<<""<<endl<<endl;	
	cout<<"segunda Unidad curricular *PERINOLA*"<<endl;
	cout<<"Ingrese la primera nota con un valor de 15%"<<endl;cin>>n2_1;
	cout<<"Ingrese la segunda nota con un valor de 13%"<<endl;cin>>n2_2;
	cout<<"Ingrese la tercera nota con un valor de 25%"<<endl;cin>>n2_3;
	cout<<"Ingrese la cuarta nota con un valor de 22%"<<endl;cin>>n2_4;
	cout<<"Ingrese la quinta nota con un valor de 25%"<<endl;cin>>n2_5;
	cout<<""<<endl<<endl;
	cout<<"segunda Unidad curricular *COMETA*"<<endl;
	cout<<"Ingrese la primera nota con un valor de 15%"<<endl;cin>>n3_1;
	cout<<"Ingrese la segunda nota con un valor de 13%"<<endl;cin>>n3_2;
	cout<<"Ingrese la tercera nota con un valor de 25%"<<endl;cin>>n3_3;
	cout<<"Ingrese la cuarta nota con un valor de 22%"<<endl;cin>>n3_4;
	cout<<"Ingrese la quinta nota con un valor de 25%"<<endl;cin>>n3_5;
	cout<<""<<endl<<endl;
	cout<<"             Cargando..../Calculando....      "<<endl<<endl<<endl;
	cout<<"***********************Datos**********************"<<endl;
	cout<<"Estudiante: ";
	cout<<" "<<p_nombre;
	cout<<" "<<s_nombre;
	cout<<" "<<p_apellido;
	cout<<" "<<s_apellido<<endl;
	cout<<" edad: "<<edad<<endl;
	cout<<"Su numero de cedula C.I:"<<cedula_e<<endl;
	cout<<sexo<<endl<<endl;
	cout<<"Primera unidad curricular *TROMPO*"<<endl<<endl;
	cout<<"La primera nota con un valor de 15% Es de:"<<n1_1<<endl;
	cout<<"La segunda nota con un valor de 13% ES de: "<<n1_2<<endl;
	cout<<"La tercera nota con un valor de 25% Es de: "<<n1_3<<endl;
	cout<<"La cuarta nota con un valor de 22% Es de:"<<n1_4<<endl;
	cout<<"La quinta nota con un valor de 25% Es de:"<<n1_5<<endl;
	cout<<"La calificacion definitiva es de: "<<formula1()<<endl<<endl;	
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<"Segunda unidad curricular *PERINOLA*"<<endl<<endl;
	cout<<"La primera nota con un valor de 15% Es de:"<<n2_1<<endl;
	cout<<"La segunda nota con un valor de 13% ES de: "<<n2_2<<endl;
	cout<<"La tercera nota con un valor de 25% Es de: "<<n2_3<<endl;
	cout<<"La cuarta nota con un valor de 22% Es de:"<<n2_4<<endl;
	cout<<"La quinta nota con un valor de 25% Es de:"<<n2_5<<endl;
	cout<<"La calificacion definitiva total es de: "<<formula2()<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<"tercera unidad curricular *PERINOLA*"<<endl<<endl;
	cout<<"La primera nota con un valor de 15% Es de:"<<n3_1<<endl;
	cout<<"La segunda nota con un valor de 13% ES de: "<<n3_2<<endl;
	cout<<"La tercera nota con un valor de 25% Es de: "<<n3_3<<endl;
	cout<<"La cuarta nota con un valor de 22% Es de:"<<n3_4<<endl;
	cout<<"La quinta nota con un valor de 25% Es de:"<<n3_5<<endl;
	cout<<"La calificacion definitiva total es de: "<<formula3()<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"EL PROMEDIO GENERAL DE LAS 3 UNIDADES CURRICULARES ES DE: "<<total()<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	return 0;
	}
	float formula1(){
		float result;
		result = (n1_1+n1_2+n1_3+n1_4+n1_5) / 5;
		return result;
		}
	float formula2(){
		float result2;
		result2 = (n2_1+n2_2+n2_3+n2_4+n2_5) / 5;
		return result2;
		}
	float formula3(){
		float result3;
		result3 = (n3_1+n3_2+n3_3+n3_4+n3_5) / 5;
		return result3;
		}
	float total(){
		float result4;
		result4 = ( formula1()+formula2()+formula3() ) / 3;
		return result4;
		}
	
	
