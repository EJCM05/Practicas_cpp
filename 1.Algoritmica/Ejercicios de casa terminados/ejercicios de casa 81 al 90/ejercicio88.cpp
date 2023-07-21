/*
Desarrollar un algoritmo/programa que permita presentar el siguiente menú, con los
respectivos submenús. Se debe mantener validada todas las selecciones en cada uno de
los menús. Siempre que se ejecute una opción, debe preguntar que si desea realizar otro
calculo, en caso que la respuesta sea que no, retornará al submenú de origen. Para
regresar al menú principal, siempre lo hará con la última opción de cada submenú. La única
forma que se salga del sistema es cuando el usuario presione en el menú principal la
opción N° 5. Que indica ―Salir del Sistema‖. Debe arrojar mensajes de error cuando se
digiten valores que no correspondan. Mantener la estética en la presentación en pantalla.
Utilizar mensajes que sean muy claros y precisos para el usuario.
MENU PRINCIPAL
1-. Operaciones Matemáticas
2-. Calculo de Áreas
3-. Calculo de Calificaciones
4-. Calculo de Tablas
5-. Salir del Sistema
* 
SUBMENU: Operaciones Matemáticas
1-. Sumar dos dígitos
2-. Restar dos dígitos
3-. Multiplicar dos dígitos
4-. Dividir dos dígitos
5-. Calcular un porcentaje
6-. Regresar al Menú Principal
* 
SUBMENU: Calculo de Áreas
1-. Área del Cuadrado
2-. Área del Rectángulo
3-. Área del Triangulo
4-. Regresar al Menú Principal
* 
SUBMENU: Calculo de Calificaciones
1-. Registrar Datos Básicos del Estudiante
2-. Registrar el resultado de la Calificación N° 1
3-. Registrar el resultado de la Calificación N° 2
4-. Registrar el resultado de la Calificación N° 3
5-. Registrar el resultado de la Calificación N° 4
6-. Presentar el reporte
7-. Regresar al Menú Principal
* 
SUBMENU: Calculo de Tablas
1-. Tablas de Sumar
2-. Tablas de Restar
3-. Tablas de Multiplicar
4-. Tablas de Dividir
5-. Regresar al Menú Principal
 */
#include <iostream>
using namespace std;
//variables 
int c;
//funciones
void menu(), submenu1(),submenu2(),submenu3(),submenu4();
void reporte();
int sum(),res(),div(),mult(),porcent();
float area_c(),area_r(),area_t();
void tablas(),tablam(),tablar(),tablad();
//estudiante
string nombre;
int edad;
int n1,n2,n3,n4;
//fin estudiante
int main(){
	while(100000){
	menu();
	};
	return 0;
}
void menu(){
	int menup;
	cout<<"           MENU PRINCIPAL"<<endl;
    cout<<"    1-. Operaciones Matemáticas"<<endl;
	cout<<"    2-. Calculo de Áreas"<<endl;
	cout<<"    3-. Calculo de Calificaciones"<<endl;
	cout<<"    4-. Calculo de Tablas"<<endl;
	cout<<"    5-. Salir del Sistema"<<endl;
	cin>>menup;
	switch(menup){
	 case 1:
	system("clear");
		submenu1();break;
	 case 2:
	system("clear");
		submenu2();break;
	  case 3:
	system("clear");
		submenu3();break;
	  case 4:
	system("clear");
		submenu4();break;
	  case 5:
	system("clear");
		exit(1);break;	
	 default:
	system("clear");
		cout<<"Ingrese un valor valido!!!"<<endl;
		}
	}	
void submenu1(){
	int op;
	cout<<"	 SUBMENU: Operaciones Matemáticas"<<endl;
	cout<<"1-. Sumar dos dígitos"<<endl;
	cout<<"2-. Restar dos dígitos"<<endl;
	cout<<"3-. Multiplicar dos dígitos"<<endl;
	cout<<"4-. Dividir dos dígitos"<<endl;
	cout<<"5-. Calcular un porcentaje"<<endl;
	cout<<"6-. Regresar al Menú Principal"<<endl;
	cin>>op;
	switch(op){
	 case 1:
		cout<<sum()<<endl;
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			cout<<sum()<<endl;
			}
		else if(c==0){
			system("clear");
			submenu1();
			}}while(true);
		break;
	 case 2:
		cout<<res()<<endl;
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			cout<<res()<<endl;
			}
		else if(c==0){
			system("clear");
			submenu1();
			}}while(true);
		break;
	  case 3:
		cout<<mult()<<endl;
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			cout<<mult()<<endl;
			}
		else if(c==0){
			system("clear");
			submenu1();
			}}while(true);
		break;
	  case 4:
	  cout<<div()<<endl;
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			cout<<div()<<endl;
			}
		else if(c==0){
			system("clear");
			submenu1();
			}}while(true);
		break;
		case 5:
	  cout<<porcent()<<endl;
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			cout<<porcent()<<endl;
			}
		else if(c==0){
			system("clear");
			submenu1();
			}}while(true);
		break;
	  case 6:
	    system("clear");
		menu();break;	
	 default:
		system("clear");
		cout<<"Ingrese un valor valido!!!"<<endl;
		}
}
int sum(){
	int s1,s2,sum;
		cout<<"Suma de dos digitos"<<endl;
		cout<<"Ingrese el numero 1: ";cin>>s1;
		cout<<"Ingrese el numero 2: ";cin>>s2;
		sum = s1+s2;
		cout<<"La suma es: ";
		return sum;
	}
int res(){
	int s1,s2,res;
	cout<<"resta de dos digitos"<<endl;
		cout<<"Ingrese el numero 1: ";cin>>s1;
		cout<<"Ingrese el numero 2: ";cin>>s2;
		res = s1-s2;
		cout<<"La resta es: ";
		return res;
	}
int mult(){
	int s1,s2,mult;
	cout<<"multiplicacion de dos digitos"<<endl;
		cout<<"Ingrese el numero 1: ";cin>>s1;
		cout<<"Ingrese el numero 2: ";cin>>s2;
		mult = s1*s2;
		cout<<"La multiplicacion es: ";
		return mult;
	}
int div(){
	int s1,s2,div;
	cout<<"division de dos digitos"<<endl;
		cout<<"Ingrese el numero 1: ";cin>>s1;
		cout<<"Ingrese el numero 2: ";cin>>s2;
		div = s1/s2;
		cout<<"La division es: ";
		return div;
	}
int porcent(){
	int s1,s2, porcent;
	cout<<"porcentaje de dos digitos"<<endl;
		cout<<"Ingrese el numero 1: ";cin>>s1;
		cout<<"Ingrese el numero 2: ";cin>>s2;
		porcent = (s1*s2)/100;
		cout<<"El porcentaje es ";
		return  porcent;
	}
void submenu2(){
	int op;
	cout<<"	 SUBMENU: Calculo de Áreas"<<endl;
	cout<<"1-. Área del Cuadrado"<<endl;
	cout<<"2-. Área del Rectángulo"<<endl;
	cout<<"3-. Área del Triangulo"<<endl;
	cout<<"4-. Regresar al Menú Principal"<<endl;
	cin>>op;
	switch(op){
	 case 1:
		cout<<area_c()<<endl;
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			cout<<area_c()<<endl;
			}
		else if(c==0){
			system("clear");
			submenu2();
			}}while(true);
		break;
	 case 2:
		cout<<area_r()<<endl;
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			cout<<area_r()<<endl;
			}
		else if(c==0){
			system("clear");
			submenu2();
			}}while(true);
		break;
	  case 3:
		cout<<area_t()<<endl;
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			cout<<area_t()<<endl;
			}
		else if(c==0){
			system("clear");
			submenu2();
			}}while(true);
		break;
	  case 4:
			system("clear");
			menu();
		break;
	 default:
		system("clear");
		cout<<"Ingrese un valor valido!!!"<<endl;
		}
}
float area_c(){
	float areac,l1,l2;
	cout<<"Calcular el area del cuadrado: "<<endl;
	cout<<"Lado 1: ";cin>>l1;
	cout<<"Lado 2: ";cin>>l2;
	areac= l1*l2;
	cout<<"El area del cuadrado es: ";
	return areac;
	}
float area_r(){
	float arear,l1,l2;
	cout<<"Calcular el area de un rectangulo: "<<endl;
	cout<<"ingrese el largo: ";cin>>l1;
	cout<<"ingrese el ancho: ";cin>>l2;
	arear= l1*l2;	 
	cout<<"El area del triangulo es: ";
	return arear;
	}
float area_t(){
	float areat,l1,l2;
	cout<<"Calcular el area de un triangulo: "<<endl;
	cout<<"ingrese la base: ";cin>>l1;
	cout<<"ingrese la altura: ";cin>>l2;
	areat= (l1*l2)/2;
	cout<<"El area del triangulo es: ";
	return areat;
	}
void submenu3(){
int op;
	cout<<"       SUBMENU: Calculo de Calificaciones					"<<endl;
	cout<<" 1-. Registrar Datos Básicos del Estudiante			"<<endl;
	cout<<" 2-. Registrar el resultado de la Calificación N° 1	"<<endl;
	cout<<" 3-. Registrar el resultado de la Calificación N° 2	"<<endl;
	cout<<" 4-. Registrar el resultado de la Calificación N° 3	"<<endl;
	cout<<" 5-. Registrar el resultado de la Calificación N° 4	"<<endl;
	cout<<" 6-. Presentar el reporte	"<<endl;
	cout<<" 7-. Regresar al Menú Principal	"<<endl;
	cin>>op;
	switch(op){
	 case 1:
		system("clear");
		cout<<"Registrar datos del estudiante"<<endl;
		cout<<"Edad: ";cin>>edad;
		cout<<"Nombre: ";cin>>nombre;
		system("clear");
		submenu3();
		break;
	 case 2:
	 	system("clear");
		cout<<"Registro de nota 1: "<<endl;
		cin>>n1;
		system("clear");
		submenu3();
		break;
	  case 3:
	  	system("clear");
		cout<<"Registro de nota 2: "<<endl;
		cin>>n2;
		system("clear");
		submenu3();
		break;
	  case 4:
	  	system("clear");
		cout<<"Registro de nota 3: "<<endl;
		cin>>n3;
		system("clear");
		submenu3();
		break;
		case 5:
		system("clear");
		cout<<"Registro de nota 4: "<<endl;
		cin>>n4;
		system("clear");
		submenu3();
		break;
		case 6:
		system("clear");
	    reporte();
	    break; 
	   case 7:
	    system("clear");
		menu();
		break;	
	 default:
		system("clear");
		cout<<"Ingrese un valor valido!!!"<<endl;
		}
	}
void reporte(){
	int result;
	cout<<"Reporte de estudiante"<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"edad:   "<<edad<<endl;
	cout<<"Nota 1:"<<n1<<endl;
	cout<<"Nota 2:"<<n2<<endl;
	cout<<"Nota 3:"<<n3<<endl;
	cout<<"Nota 4:"<<n4<<endl;
	result = (n1+n2+n3+n4)/4;
	cout<<"Promedio de notas: "<<result<<endl;
	cin.get();
	cin.get();
	system("clear");
	return (submenu3());
	}
void submenu4(){
	int op;
	cout<<"	   SUBMENU: Calculo de Tablas "<<endl;
	cout<<" 1-. Tablas de Sumar			  "<<endl;	
	cout<<" 2-. Tablas de Restar          "<<endl;
	cout<<" 3-. Tablas de Multiplicar     "<<endl;
	cout<<" 4-. Tablas de Dividir         "<<endl;
	cout<<" 5-. Regresar al Menú Principal"<<endl;
	cin>>op;
	switch(op){
	 case 1:
		tablas();
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			tablas();
			}
		else if(c==0){
			system("clear");
			submenu4();
			}}while(true);
		break;
	 case 2:
		tablar();
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			tablar();
			}
		else if(c==0){
			system("clear");
			submenu4();
			}}while(true);
		break;
	  case 3:
		tablam();
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			tablam();
			}
		else if(c==0){
			system("clear");
			submenu4();
			}}while(true);
		break;
	  case 4:
			tablad();
		do{
		cout<<"¿Desea realizar otro calculo? 1=Si/0=No: ";cin>>c;
		if(c==1){
			system("clear");
			tablad();
			}
		else if(c==0){
			system("clear");
			submenu4();
			}}while(true);
		break;
	   case 5:
			system("clear");
			menu();
		break;
	 default:
		system("clear");
		cout<<"Ingrese un valor valido!!!"<<endl;
		}
	}
void tablas(){
	int t1,t2;
	cout<<"Tabla de sumar"<<endl;
	cout<<"Ingrese el numero de la tabla: ";cin>>t1;
	cout<<"Ingrese hasta donde quiere mostrar la tabla: ";cin>>t2;
	    for (int i = 1; i <= t2; i++)
        cout << t1 << " + " << i << " = " << t1 + i << endl;
		}
void tablar(){
	int t1,t2;
	cout<<"Tabla de Restar"<<endl;
	cout<<"Ingrese el numero de la tabla: ";cin>>t1;
	cout<<"Ingrese hasta donde quiere mostrar la tabla: ";cin>>t2;
	    for (int i = 1; i <= t2; i++)
        cout << t1 << " - " << i << " = " << t1 - i << endl;
	}
void tablam(){
	int t1,t2;
	cout<<"Tabla de Multiplicar"<<endl;
	cout<<"Ingrese el numero de la tabla: ";cin>>t1;
	cout<<"Ingrese hasta donde quiere mostrar la tabla: ";cin>>t2;
	    for (int i = 1; i <= t2; i++)
        cout << t1 << " * " << i << " = " << t1 * i << endl;
	}
void tablad(){
	int t1,t2;
	cout<<"Tabla de dividir"<<endl;
	cout<<"Ingrese el numero de la tabla: ";cin>>t1;
	cout<<"Ingrese hasta donde quiere mostrar la tabla: ";cin>>t2;
	    for (int i = 1; i <= t2; i++)
        cout << t1 << " / " << i << " = " << t1 / i << endl;
	}
