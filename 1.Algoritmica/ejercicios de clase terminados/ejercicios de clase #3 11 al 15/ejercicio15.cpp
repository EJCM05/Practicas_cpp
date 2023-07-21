/*Realizar un algoritmo que registre los datos básicos de un trabajador, así como el sueldo base, y sus
asignaciones: cantidad de horas extras diurnas, cantidad de horas extras nocturnas, cantidad de domingos
laborados, cantidad de días feriados laborados. Todos esos datos se deben convertir en bolívares,
teniendo presente que el valor de la hora extra diurna tiene un recargo del 30% sobre el valor de la hora
normal. El valor de la hora extra nocturna tiene un recargo del 70% sobre el valor de la hora normal. Los
domingos se pagan al doble del valor de un día normal. *Los días feriados se pagan a razón del 2,5% del
valor de un día normal. Calcular el sueldo parcial a cobrar. Presentar un listado en pantalla con toda la
información del trabajador (cédula, nombres, apellidos, edad, sexo), todas las asignaciones, tanto en
cantidades como en bolívares. Si el sueldo parcial es mayor de 150,000,oo Bs, le paga un bono del 15.37%
sobre el sueldo parcial. En función al cálculo ejecutado, presentar al final el sueldo neto a cobrar, así como
el monto del bono asignado.*/
#include <iostream>
#include <cstring>
using namespace std;
//funciones
float f1(),f2(),f3(),f4(),f5(),f6();
int f7();
//variables
float sueldo_b=15000,p_dia=500,p_horas=50,p_diurnas=03,p_nocturnas=07,domingos= 2;
float feriados=0025,mayor=150.000,extra=001537;
float h_diurnas,h_nocturnas,d_domingos,d_feriados;
int	cedula,edad;
string p_nombre,s_nombre,p_apellido,s_apellido,sexo; 

int main(){
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"            Calculo de Datos Basicos de un trabajador            "<<endl;
	cout<<"        EL Pago por hora es de: 50 Bs.S                          "<<endl;
	cout<<"        El Pago por dia normal es de: 500 Bs.S                   "<<endl;
	cout<<"        El sueldo base es de: 15.000 Bs.S                        "<<endl;
	cout<<"                                                                 "<<endl;
	cout<<"   Ingrese su Primer Nombre: "<<endl;cout<<"                     ";cin>>p_nombre;
	cout<<"   Ingrese Su segundo Nombre: "<<endl;cout<<"                    ";cin>>s_nombre;
	cout<<"   Ingrese su primer Apellido: "<<endl;cout<<"                   ";cin>>p_apellido;
	cout<<"   Ingrese su segundo Apellido:"<<endl;cout<<"                   ";cin>>s_apellido;
	cout<<"   Ingrese Su Numero de Cedula C.I: "<<endl;cout<<"              ";cin>>cedula;
	cout<<"   Ingrese su Edad: "<<endl;cin>>edad;cout<<"                    "<<endl;
	cout<<"   Ingrese su sexo: "<<endl;cin>>sexo;cout<<"                    "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	system("clear");
	cout<<" Ingrese Las horas Diurnas trabajadas: "<<endl;cin>>h_diurnas;
	cout<<" Ingrese Las horas Nocturnas Trabajadas: "<<endl;cin>>h_nocturnas;
	cout<<" Ingrese La cantidad de Domingos trabajados: "<<endl;cin>>d_domingos;
	cout<<" Ingrese La cantidad de Dias feriados trabajados: "<<endl;cin>>d_feriados;
	system("clear");
	cout<<"-------------------------------------------------------------------------------------------------"<<endl;
	cout<<"-                          DATOS DEL TRABAJADOR                                                 -"<<endl;
	cout<<"-  Nombres y apellidos "<<p_nombre;cout<<" "<<s_nombre;cout<<" "<<p_apellido;cout<<" "<<s_apellido;cout<<"-"<<endl;
	cout<<"-  C.I: "<<cedula;cout<<"                                                                       -"<<endl;
	cout<<"-  Edad: "<<edad;cout<<"                                                                        -"<<endl;
	cout<<"-  Sexo: "<<sexo;cout<<""<<endl;
	cout<<"-  Sueldo Base es de: "<<sueldo_b<<endl;
	cout<<"-------------------------------------------------------------------------------------------------"<<endl;
	cout<<"-                                    ASIGNACIONES                                               -"<<endl;
	cout<<"- Pago por cantidad de horas extras diurnas con el 30% mas: "<<f1()<<endl;
	cout<<"- Pago por cantidad de horas extrar nocturnas con el 70% mas: "<<f2()<<endl;
	cout<<"- Pago por cantidad de domingos laborados: "<<f3()<<endl;
	cout<<"- Pago por dias feriados: "<<f4()<<endl;
	cout<<f7()<<endl;
	cout<<"-------------------------------------------------------------------------------------------------"<<endl;
	return 0;
}
float f1(){
	float result, result2; 
	result = (p_horas * p_diurnas) - p_horas; 
	result2 = result * h_diurnas;
	return result2;
}
float f2(){
	float result, result2;
	result = (p_horas * p_nocturnas) - p_horas;
	result2 = result * h_nocturnas; 
	return result2;
}
float f3(){
	float result, result2;	
	result = d_domingos * domingos;
	result2= result * p_dia;
	return result2;
	}
float f4(){
	float result, result2;
	result = (p_dia * d_feriados)-p_dia;
	result2 = result * feriados;
	return result2;
	}
float f5(){
	float result;
	result = sueldo_b+f1()+f2()+f3()+f4();
	return result; 
	}
float f6(){
	float result;
	result = (f5()*extra)- f5();
	return result;
	}
int f7(){
	if(f5() > mayor){
		cout<<"El monto de bono asignado es de: "<<f5()<<endl;
	}
	else{
		cout<<"El total es de: "<<f5();
		}
	return 0;
}
