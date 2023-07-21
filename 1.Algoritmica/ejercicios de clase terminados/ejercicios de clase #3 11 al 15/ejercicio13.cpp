/* El IUTAI, desea un algoritmo que permita registrar las 4 calificaciones que posee un estudiante en cada
una de las tres unidades curriculares que cursa. Posteriormente presentar en pantalla un listado donde
indique la calificación definitiva de cada materia, así como su valoración cualitativa (solo para los casos que
sea reprobada).*/
#include <iostream>
#include <cstring>
using namespace std;
//funciones
float f1(),f2(),f3(),f4();
//variables
float e_1,e_2,e_3,e_4, m_1,m_2,m_3,m_4,p_1,p_2,p_3,p_4;
string nombre, apellido;
int main(){
	cout<<"---------Registro IUTAI DE NOTAS------------"<<endl;
	cout<<" Ingrese su nombre: "<<endl;cin>>nombre;
	cout<<" Ingrese su apellido: "<<endl;cin>>apellido;
	cout<<"--------------------------------------------"<<endl<<endl;
	cout<<"Ingrese las 4 notas de Electiva: "<<endl;
	cout<<" Primera nota: "<<endl;cin>>e_1;
	cout<<" Segunda nota: "<<endl;cin>>e_2;
	cout<<" Tercera nota: "<<endl;cin>>e_3;
	cout<<" Cuarta nota: "<<endl;cin>>e_4;
	cout<<"--------------------------------------"<<endl<<endl;
	cout<<"Ingrese las 4 notas de Matematicas:"<<endl;
	cout<<" Primera nota: "<<endl;cin>>m_1;
	cout<<" Segunda nota: "<<endl;cin>>m_2;
	cout<<" Tercera nota: "<<endl;cin>>m_3;
	cout<<" Cuarta nota: "<<endl;cin>>m_4;
	cout<<"--------------------------------------"<<endl<<endl;
	cout<<"Ingrese las 4 notas de Programacion: "<<endl;
	cout<<" Primeta nota: "<<endl;cin>>p_1;
	cout<<" Segunda nota: "<<endl;cin>>p_2;
	cout<<" Tercera nota: "<<endl;cin>>p_3;
	cout<<" Cuarta nota: "<<endl;cin>>p_4;
	cout<<"--------------------------------------"<<endl;
	system("clear");
	cout<<"-----------------------------------------------"<<endl;
	cout<<"  Calificacion Definitiva de las materias:     "<<endl;
	cout<<"                                               "<<endl;
	cout<<"  -Su nombre completo "<<nombre;cout<<" "<<apellido<<endl;
	cout<<"                                               "<<endl;
	cout<<"  ---Nota de Electiva: "<<f1()<<endl;
	cout<<"  ---Nota de Matematicas: "<<f2()<<endl;
	cout<<"  ---Nota de programacion: "<<f3()<<endl;
	cout<<"  "<<f4()<<endl;
	cout<<"-----------------------------------------------"<<endl;
	return 0;
}
float f1(){
	float result1;
	result1 = (e_1+e_2+e_3+e_4) / 4 ;
	return result1;
	}
float f2(){
	float result2;
	result2 = (m_1+m_2+m_3+m_4) / 4;
	return result2;
	}
float f3(){
	float result3;
	result3 = (p_1+p_2+p_3+p_4) / 4;
	return result3;
	}
float f4(){
	if(f1() < 12){
		cout<<"- EL minimo para pasar Electiva es de 12 PTs"<<endl;
		}
	if(f2() < 12){
		cout<<"- EL minimo para pasar Matematicas es de 12 PTs"<<endl;
		}	
	if(f3() < 12){
		cout<<"- EL minimo para pasar Programacion es de 12 PTs"<<endl;
		}
	return 0;
	}
