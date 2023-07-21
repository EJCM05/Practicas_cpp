/* 
 * 
 *  Title proyect: Bank Empire
 *  Description: Una gestion de banco plasmado en consola
 *  con funcionalidades basicas de todo lo aprendido.
 *  Eber Josue colmenares Mendoza
 * 	C.I:31.060.609
 * 	Trayecto_1 seccion "C"
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>
#include <ctime>
#include <regex>
using namespace std;
//Variables globales
//Variables validation numbers and letters 
regex pattern("^[a-zA-Z ]+$");
regex numbers("^[0-9]+$");
bool login_successful = false;
//Functions with value return;
	int welcome();
//Functions whithout value return (General) 
	void main_op(),politics_op(),new_account(),login_account(),interface_user(),login_admin(),admin_interface();
// sub functions (General)
	void politics_case_2(), section_new_acount(),section_new_acount_3(),section_new_acount_4();
	void section_interface_user(),section_interface_user_2(),section_interface_user_3(),section_interface_user_4(), section_interface_user_5();
	void service_interface_user(),service_interface_user_2(),service_interface_user_3();
	void section_interface_admin(),section_interface_admin_2(),section_interface_admin_3(),section_interface_admin_4();
	void login_admin_confirm();
//Options Switch (General)
	int op_main,op_politics,op_interface_user,op_servicios,op_interface_admin;
//Variables for new_account()
	struct Persona {
    string nombres;
    string apellidos ;
    string tipo_cuenta;
    string fecha_nacimiento;
    string edad;
    string cedula;
    string usuario;
    string password;
    int money3;
	};
	vector<Persona> personas;
    Persona nueva_persona;
    int contador = 0;
	string user_account, password_account;
	
//Variables and functions for login_account
	void valid_user(),valid_admin(),calc_valid();
	string usuario_ingresado, password_ingresado;
	string nombre_usuario, apellido_usuario;
//Password for login_account
	struct user{
		string usuario1 = "usuario";
		int money1 = 100;
		int mount1;
		int factura1;
		string nombre1 = "Profesor";
		string password_1 = "1234";
		}user1;
	struct user_2{
		int money2 = 1000;
		int mount2 ;
		int factura2;
		string usuario2 = "usuario2";
		string password_2 = "12345";
		string nombre2 = "Profesor2"; 
		}user2;
//variables for interface_user
		string remplace_password,passwords,confirm_password,password_confirm;
		int money, deposit, withdraw,facture, facture_result, max_withdraw = 10000;
		int electricidad = 10000, agua = 5000, internet = 2000;
//vectores para los movimientos realizados
	void reiniciar_cuenta();
	vector<string> movimientos;
	vector<string> movimientos_admin;
//Variables for interface_admin
		struct admin{
			string nombre_admin = "Eber ";
			string apellido_admin = "Colmenares";
			string boss = "admin";
			string pass_boss = "admin";
			}ad1;
		char confirm_admin,confirm_section;
		int personas_num;
		string user_confirm_admin,password_confirm_admin,nombre_admin,apellido_admin;
//development of the main function
int main(){
	welcome();
 	return 0;
}
void reiniciar_cuenta() {
    movimientos.clear();
}
void valid_admin(){
		if(user_confirm_admin == ad1.boss){
			nombre_admin = ad1.nombre_admin ; 
			apellido_admin =  ad1.apellido_admin;
			admin_interface();
		}
	}
void valid_user(){
	if(usuario_ingresado == user1.usuario1){
			nombre_usuario = user1.nombre1;
			confirm_password = user1.password_1;
			money = user1.money1;
			reiniciar_cuenta();
			interface_user();
	}
	else if(usuario_ingresado == user2.usuario2){
			nombre_usuario = user2.nombre2;
			confirm_password = user2.password_2;
			money = user2.money2;
			reiniciar_cuenta();
			interface_user();
			
	}
	for (size_t i = 0; i < personas.size(); i++) {
	if(usuario_ingresado == personas[i].usuario){
			nombre_usuario = personas[i].nombres;
			apellido_usuario = personas[i].apellidos;
			money = personas[i].money3;
			interface_user();
			}
		}
	}
int welcome(){
	cout << "     ________________________________________________________________ " << endl;
	cout << "                                                                      " << endl;
	cout << "               ░█  ░█ █▀▀ █   █▀▀ █▀▀█ █▀▄▀█ █▀▀ 　 ▀▀█▀▀ █▀▀█ 　     " << endl;
	cout << "               ░█░█░█ █▀▀ █   █   █  █ █ ▀ █ █▀▀ 　   █   █  █ 　     " << endl;
	cout << "               ░█▄▀▄█ ▀▀▀ ▀▀▀ ▀▀▀ ▀▀▀▀ ▀   ▀ ▀▀▀ 　   ▀   ▀▀▀▀        " << endl;
	cout << "                                                                      " << endl;
	cout << "              ░█▀▀▀ █▀▄▀█ █▀▀█  ▀  █▀▀█ █▀▀ 　 ░█▀▀█ █▀▀█ █▀▀▄ █ █    " << endl;
	cout << "              ░█▀▀▀ █ ▀ █ █  █ ▀█▀ █▄▄▀ █▀▀ 　 ░█▀▀▄ █▄▄█ █  █ █▀▄    " << endl;
	cout << "              ░█▄▄▄ ▀   ▀ █▀▀▀ ▀▀▀ ▀ ▀▀ ▀▀▀ 　 ░█▄▄█ ▀  ▀ ▀  ▀ ▀ ▀    " << endl;
	cout << "                                                                      " << endl;
	cout << "                                                                      " << endl;
	cout << "          by: copyright ©Eber Colmenares 2023.                        " << endl;
	cout << "     _________________________________________________________________" << endl;
	cout << "                                                                      " << endl;
	cout << "                          Press to Intro continue                     " << endl;
	cout << "     _________________________________________________________________" << endl;
	cin.get();
	cin.get();
	system("clear");		
	politics_op();
	return 0;
	system("clear");
}
void politics_op(){
	system("clear");
	cout << "                         | B A N K  E M P I R E |                                    " << endl;
	cout << "_____________________________________________________________________________________" << endl;
	cout << "                                                                                     " << endl;
	cout << "                        Redaccion de terminos y condiciones                          " << endl;
	cout << "                                                                                     " << endl;
	cout << "              ¡Bienvenido al sistema de gestión de Empire Bank!                      " << endl;
	cout << "         Estamos encantados de tenerte como usuario y esperamos poder                " << endl;
	cout << "         ayudarte en todas tus necesidades bancarias. Al utilizar nuestro            " << endl;
	cout << "         sistema aceptas cumplir con nuestros términos y condiciones, así            " << endl;
	cout << "         como con nuestra política de privacidad. Por favor, tómate un               " << endl;
	cout << "         momento para revisar estos documentos y asegurarte de que estás             " << endl;
	cout << "         de acuerdo con ellos antes de continuar utilizando nuestro sistema.         " << endl;
	cout << "                                                                                     " << endl;
	cout << "                                Digite una opcion                                    " << endl;
	cout << "                  1.Aceptar Terminos y condiciones (continuar).                      " << endl;
	cout << "                  2.Mostrar Terminos y condiciones.                                  " << endl;
	cout << "                                                                                     " << endl;
	cout << "_____________________________________________________________________________________" << endl;
	cout << "               Ingresa una opcion: ";cin>>op_politics;
	while (!cin) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    politics_op();
    system("clear");
    cout << "               Ingresa una opcion: ";cin>>op_politics;
    cin >> op_politics;
}
	switch(op_politics){
		case 1:
		system("clear");
		main_op();
		break;
		case 2:
		politics_case_2();
		break;
		system("clear");
		default:cout<<"Digite una opcion valida"<<endl;
		system("clear");
		return politics_op();
			}
		}
void politics_case_2(){
	system("clear");
	    cout << "                             | B A N K  E M P I R E |                                   " << endl;
		cout << "________________________________________________________________________________________" << endl;
		cout << "|                                                                                      |" << endl;
		cout << "|                            TERMINOS Y CONDICIONES                                    |" << endl;
		cout << "|                                                                                      |" << endl;
		cout << "|  1- Uso y restricciones: Al usar el portal del banco, aceptas sus términos y         |" << endl; 
		cout << "|  condiciones de uso y privacidad. El portal te ofrece servicios y                    |" << endl; 
		cout << "|  contenidos de terceros.                                                             |" << endl;
		cout << "|                                                                                      |" << endl;
		cout << "|  2- Modificación de servicios y contenidos: El banco puede cambiar el contenido del  |" << endl;  
		cout << "|  portal cuando quiera, sin avisarte .                                                |" << endl;
		cout << "|                                                                                      |" << endl; 
		cout << "|  3- Disponibilidad: El banco no asegura que el portal y sus servicios y contenidos   |" << endl;
		cout << "|  funcionen siempre, ni que te sirvan para lo que quieras.                            |" << endl;
		cout << "|                                                                                      |" << endl;
		cout << "|  4- Propiedad intelectual: El banco es el dueño de todo lo que hay en el portal y    |" << endl;
		cout << "|  de cómo se usa.                                                                     |" << endl; 
		cout << "|                                                                                      |" << endl;
		cout << "|  5- Propiedad intelectual de terceros: Lo mismo vale para lo que hay en las páginas  |" << endl;
		cout << "|  que están enlazadas al portal.                                                      |" << endl;
		cout << "|                                                                                      |" << endl;
		cout << "|  6- Responsabilidad del usuario: Tú eres el único responsable de cómo usas el portal |" << endl;
		cout << "|  sus servicios y contenidos.                                                         |" << endl;
		cout << "|                                                                                      |" << endl;
		cout << "|  7- Negación, restricción o condicionamiento del acceso: El banco puede impedirte o  |" << endl;
		cout << "|  limitarte el acceso al portal, como quiera.                                         |" << endl;
		cout << "|                                                                                      |" << endl;
		cout << "|                           Presione enter para continuar                              |" << endl;
		cout << "|______________________________________________________________________________________|" << endl;
		cin.get();
		cin.get();
		system("clear");
		return (politics_op());
	}
void main_op(){
	system("clear");
	cout << "                            | B A N K  E M P I R E |                               " << endl;
	cout << " _________________________________________________________________________________ " << endl;
	cout << " |                                                                               | " << endl;
	cout << " |                                       |             Empire bank               | " << endl;
	cout << " |                                       |      ____________________________     | " << endl;
	cout << " |   Bienvenido a Empire Bank donde      |      |                          |     | " << endl;
	cout << " |   tus finanzas están en buenas manos  |      |  1. Acceder.             |     | " << endl;
	cout << " |   Por favor, inicia sesión para       |      |  2. Crear cuenta.        |     | " << endl;
	cout << " |   acceder a tu cuenta y comenzar      |      |  3. Modo administrador.  |     | " << endl;
	cout << " |   a administrar tus finanzas.         |      |  4. Salir del sistema.   |     | " << endl;
	cout << " |                                       |      |__________________________|     | " << endl;
	cout << " |_______________________________________________________________________________| " << endl;
	cout << "                                                                                   " << endl;
	cout << "                           Ingresa una opcion: ";cin>>op_main;
	while(!cin){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("clear");
    main_op();
    cout << "               			Ingresa una opcion: ";cin>>op_main;
	}
	switch(op_main){
	case 1:
		system("clear");
		login_account();
	break;
	case 2:
		system("clear");
		new_account();
	break;
	case 3:
		system("clear");
		login_admin_confirm();
	break;
	case 4:
		system("clear");
		welcome();
	break;
	default:
		system("clear");
	cout<<"                          X Opcion invalida X                                         "<<endl;
	cout<<"                          INTENTE NUEVAMNETE                                          "<<endl;
		main_op(); 
	}
}
void new_account(){
	system("clear");
	cout << "                     | B A N K  E M P I R E |                       " << endl;
    cout << "____________________________________________________________________" << endl;
    cout << "                                                                    " << endl;
	cout << "        ¡Gracias por Entrar en el sistema Empire Bank!              " << endl;
	cout << "        Estamos emocionados de tenerte como nuevo usuario y         " << endl;
	cout << "        esperamos poder ayudarte en todas tus necesidades.          " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << "                                                                    " << endl;
	cout << "    Para empezar con el registro debes de llenar los siguientes     " << endl;
	cout << "    datos:                                                          " << endl;
	cout << "                               |                                    " << endl;
	cout << "    1.Nombres.                 |      4.Tipo de cuenta.             " << endl;
	cout << "                               |                                    " << endl;
	cout << "    2.Apellidos.               |      5.fecha de nacimiento.        " << endl;
	cout << "                               |                                    " << endl;
	cout << "    3.Cedula de identidad.     |                                    " << endl;
	cout << "                                                                    " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << "                                                                    " << endl;
    cout << "                   Presiona enter para continuar.                   " << endl;
    cout << " ___________________________________________________________________" << endl;
		cin.get();
		cin.get();
		system("clear");
		section_new_acount();
	}
void section_new_acount(){
	contador ++;
		cout << "                   | B A N K  E M P I R E |                              " << endl;
		cout << " ________________________________________________________________________" << endl;
		cout << "                                                                         " << endl;
        cout << "                       Nuevo usuario                                     "<< endl;
        cout << "                                                                         " << endl;
        cout << "         Nombres: ";getline(cin, nueva_persona.nombres);
			if (regex_match(nueva_persona.nombres, pattern)) {
			} 
			else{
			system("clear");
		cout << "                   El nombre Solo debe contener letras                   " << endl;
			section_new_acount();
			}
        cout << "                                                                         " << endl;
        cout << "         Apellidos: ";getline(cin, nueva_persona.apellidos);
        cout << "                                                                         " << endl;
			if (regex_match(nueva_persona.apellidos, pattern)) {
			} 
			else {
			system("clear");
		cout << "                   El Apellido Solo debe contener letras                  " << endl;
			section_new_acount();
			}
        cout << "         Edad: ";getline(cin, nueva_persona.edad);
        cout << "                                                                         " << endl;
			if (regex_match(nueva_persona.edad, numbers)) {
			} 
			else {
			system("clear");
		cout << "                     La edad solo debe contener números                   " << endl;
			section_new_acount();
			}
        cout << "         Cédula: ";getline(cin, nueva_persona.cedula);
        cout << "                                                                          " << endl;
			if (regex_match(nueva_persona.cedula, numbers)) {
			} 
			else {
			system("clear");
		cout << "                     La cedula solo debe contener números                 " << endl;
			section_new_acount();
			}
        cout << "         Tipo de cuenta Ahorro/corriente :";getline(cin,nueva_persona.tipo_cuenta);
        cout << "                                                                          " << endl;
			if (regex_match(nueva_persona.tipo_cuenta, pattern)) {
			} 
			else {
			system("clear");
		cout << "                      Solo debe contener letras                           " << endl;
			section_new_acount();
			}
        cout << "         Fecha de nacimiento DD/MM/AA: ";getline(cin,nueva_persona.fecha_nacimiento);
        cout << "                                                                           " << endl;
			if (regex_match(nueva_persona.fecha_nacimiento, numbers)) {
			} 
			else {
			system("clear");
		cout << "                           Solo numeros                                     " << endl;
			section_new_acount();
			}
        cout << "____________________________________________________________________________" << endl;	
		system("clear");
		cout << "                      | B A N K  E M P I R E |                              " << endl;
		cout << "____________________________________________________________________________" << endl;
		cout << "                                                                            " << endl;
		cout << "   Por favor, ingresa tu usuario y contraseña para acceder a tu cuenta.     " << endl; 
		cout << "   Recuerda que tu contraseña es personal e intransferible, no la           " << endl;
		cout << "   compartas con nadie para mantener la seguridad de tu cuenta.             " << endl;
		cout << "                                                                            " << endl;
		cout << "            Registro de usuario: ";cin >> nueva_persona.usuario;
		cout << "                                                                            " << endl;                       
		cout << "            Registro de contraseña: ";cin >> nueva_persona.password;
		cout << " __________________________________________________________________________ " << endl;
		system ("clear");
		cout << "                       | B A N K  E M P I R E |                             " << endl;
		cout << "____________________________________________________________________________" << endl;
		cout << "                                                                            " << endl;
		cout << "            ¡Gracias por registrarte en el sistema de gestión               " << endl;
		cout << "                            de Empire bank!                                 " << endl;
		cout << "                                                                            " << endl;
		cout << "    " << nueva_persona.nombres <<" "<< nueva_persona.apellidos <<"          " << endl;
		cout << "                                                                            " << endl;
		cout << "   Estamos emocionados de tenerte como nuevo usuario y esperamos poder      " << endl;
		cout << "   ayudarte en todas tus necesidades bancarias.                             " << endl;
		cout << "                                                                            " << endl;
		cout << "                   Presiona enter para continuar                            " << endl;
		cout << "____________________________________________________________________________" << endl;
		cin.get();
		cin.get();
		personas.push_back(nueva_persona);
		system("clear");
		  return (section_new_acount_3());
    }
void section_new_acount_3(){
	system("clear");
	cout << "                        | B A N K  E M P I R E |                             " << endl;
    cout << "____________________________________________________________________________ " << endl;
    cout << "                                                                             " << endl;
    cout << "         ¡Gracias por registrarte! Tu cuenta ha sido creada exitosamente.    " << endl;
    cout << "          hora puedes iniciar sesión con tu nombre de usuario y contraseña   " << endl;
    cout << "                                                                             " << endl;
    cout << "                     Presiona enter para continuar.                          " << endl;
    cout << "                                                                             " << endl;
    cout << " ___________________________________________________________________________ " << endl;
    cin.get();
    cin.get();
    system("clear");
   	main_op();
	}
void login_account(){
	 system("clear");
	 cout << "                           | B A N K  E M P I R E |                                 " << endl;
	 cout << "____________________________________________________________________________________" << endl;
	 cout << "                                                                                    " << endl;
	 cout << "                 Bienvenido al sistema de gestión de Empire Bank                    " << endl;
	 cout << "                Estamos encantados de tenerte como usuario y esperamos              " << endl;
	 cout << "                poder ayudarte en todas tus necesidades bancarias.                  " << endl;
	 cout << "                                                                                    " << endl;
	 cout << "                         Digite su Usuario y contraseña.                            " << endl;
	 cout << "                                                                                    " << endl;
	 cout << "              Para volver a la pestaña anterior en ambas casillas                   " << endl;
	 cout << "               		         escribe /salir                                       " << endl;
	 cout << "                                                                                    " << endl;
	 cout << "                                                                                    " << endl;
	 cout << "             Ingresa tu Usuario:     ";cin >> usuario_ingresado; 
	 cout << "                                                                                    " << endl;
     cout << "             Ingresa tu contraseña:  ";cin >> password_ingresado;
	 cout << "                                                                                    " << endl;
     cout << "____________________________________________________________________________________" << endl;
    if(usuario_ingresado == "/salir" || password_ingresado == "/salir"){
	system("clear");
	main_op();
	}
    for (size_t i = 0; i < personas.size(); i++) {	
	if (usuario_ingresado == personas[i].usuario && password_ingresado == personas[i].password){
		 login_successful = true;
		 valid_user();
		}
	break;	
	}
    if (usuario_ingresado == user1.usuario1 && password_ingresado == user1.password_1){
		 login_successful = true;
		 valid_user();
	}
	else if(usuario_ingresado == user2.usuario2 && password_ingresado == user2.password_2){
		 login_successful = true;
		 valid_user();
		}
	
	else{
		 system("clear");
	 cout << "___________________________________________________________________________________ " << endl;
	 cout << "                                                                                    " << endl;
	 cout << "                   Nombre de usuario o contraseña incorrectos.                      " << endl;	
	 cout << "                             Intente nuevamente                                     " << endl;	
	return (login_account());
		}
	system("clear");
	
}
void interface_user(){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "_________________________________________________________________________________" << endl;
	cout << "                                                                                 " << endl;
	cout << "             Bienvenido de nuevo Sr." << nombre_usuario <<" "<< apellido_usuario   << endl;
	cout << "             al sistema Empire Bank! Estamos encantados                          " << endl; 
	cout << "             de tenerte como usuario y esperamos poder                           " << endl;
	cout << "             ayudarte en todas tus necesidades.                                  " << endl;
	cout << "_________________________________________________________________________________" << endl;
	cout << "                                                                                 " << endl;
	cout << "            Saldo actual: " << money <<"$"                                         << endl;
	cout << "                                                                                 " << endl;
	cout << "                                       |                                         " << endl;
	cout << "            1.Depositar                |     4.Consultar movimientos             " << endl;
	cout << "                                       |                                         " << endl;
	cout << "            2.Retirar                  |     5.Pago de servicios                 " << endl;
	cout << "                                       |                                         " << endl;
	cout << "            3.Cambio de clave          |     0.Salir                             " << endl;
	cout << "                                       |                                         " << endl;
	cout << " _______________________________________________________________________________ " << endl;
	cout << "                                                                                 " << endl;
	cout << "                Ingrese la opcion deseada: ";cin>>op_interface_user;
	while(!cin){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("clear");
		interface_user();
    cout << "                 Ingrese la opcion deseada: ";cin>>op_interface_user;
	}
	switch(op_interface_user){
	case 1:
	section_interface_user();
	break;
	case 2: 
	section_interface_user_2();
	break;
	case 3:
	section_interface_user_3();
	break;
	case 4: 
	section_interface_user_4();
	break;
	case 5:
	section_interface_user_5();
	break;
	case 0:
	system("clear");
	main_op();
	break;
	system("clear");
	default: cout << "Ingrese una opcion valida " << endl;
	return (interface_user());
	}
}
void section_interface_user(){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "_________________________________________________________________________________" << endl;
	cout << "                                                                                 " << endl;
	cout << "                               Depositar Dinero                                  " << endl;
	cout << "                                                                                 " << endl;
	cout << "        Saldo actual "<< money <<"$"                                               << endl;
	cout << "                                                                                 " << endl;
	cout << "        Ingrese la cantidad que desea Depositar: ";cin>>deposit;
	cout << "                                                                                 " << endl;
	cout << "_________________________________________________________________________________" << endl;
	money += deposit;
	movimientos.push_back("Deposito: " + to_string(deposit));
	movimientos_admin.push_back("Deposito: " + to_string(deposit));
	system("clear");
	return (interface_user());
	}
void section_interface_user_2(){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "_________________________________________________________________________________" << endl;
	cout << "                                                                                 " << endl;
	cout << "                               Retirar Dinero                                    " << endl;
	cout << "                                                                                 " << endl;
	cout << "        Maximo permitido: " << max_withdraw << "$"                                 << endl;
	cout << "                                                                                 " << endl;
	cout << "        Saldo actual "<< money <<"$"                                               << endl;
	cout << "                                                                                 " << endl;
	cout << "        Ingrese la cantidad que desea Retirar: ";cin>>withdraw;
	cout << "                                                                                 " << endl;
	cout << "_________________________________________________________________________________" << endl << endl;
	if(money < withdraw){
	system("clear");
	cout << "                No tiene fondos suficientes para realizar ese retiro             " << endl;
		return(interface_user());
		}
	else{
		if (max_withdraw >= withdraw){
	money -= withdraw;
	movimientos.push_back("Retiro: " + to_string(withdraw));
	movimientos_admin.push_back("Retiro: " + to_string(withdraw));
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "__________________________________________________________________________________" << endl;
	cout << "                                                                                  " << endl;
	cout << "                   Retiro de " << withdraw <<"$" " Realizado                      " << endl;
	cout << "                                                                                  " << endl;
	cout << "                        Presione enter para continuar                             " << endl; 
	cout << "__________________________________________________________________________________" << endl;
	cin.get();
	cin.get();
		system("clear");
		return (interface_user());
			}
		else{
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "__________________________________________________________________________________" << endl;
	cout << "                                                                                  " << endl;
	cout << "                    Limite de transaccion "<< max_withdraw <<"$"                     << endl;
	cout << "                                                                                  " << endl;
	cout << "                        Presione enter para continuar                             " << endl; 
	cout << "__________________________________________________________________________________" << endl;
	cin.get();
	cin.get();
	system("clear");
	return (section_interface_user_2());
			};
		}
	}
void section_interface_user_3(){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "___________________________________________________________________________________" << endl;
	cout << "                                                                                   " << endl;
	cout << "                       Solicitud cambio de contraseña                              " << endl;
	cout << "                                                                                   " << endl;
	cout << "     Ingrese la contraseña actual: ";cin>>password_confirm;              
	cout << "                                                                                   " << endl;
	cout << "___________________________________________________________________________________" << endl;
	if (password_confirm == user1.password_1){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "___________________________________________________________________________________" << endl;
	cout << "                                                                                   " << endl;
	cout << "                        Solicitud cambio de contraseña                             " << endl;
	cout << "                                                                                   " << endl;
	cout << "      Ingrese la nueva contraseña: ";cin>>user1.password_1;
	cout << "                                                                                   " << endl;
	cout << "___________________________________________________________________________________" << endl;
	cin.get();
	cin.get();
	system("clear");
	return (interface_user());
			}
	else if (password_confirm == user2.password_2){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "___________________________________________________________________________________" << endl;
	cout << "                                                                                   " << endl;
	cout << "                        Solicitud cambio de contraseña                             " << endl;
	cout << "                                                                                   " << endl;
	cout << "      Ingrese la nueva contraseña: ";cin>>user2.password_2;
	cout << "                                                                                   " << endl;
	cout << "___________________________________________________________________________________" << endl;
	cin.get();
	cin.get();
	system("clear");
	return (interface_user());
			}
	for (size_t i = 0; i < personas.size(); i++) {
	if (password_confirm == personas[i].usuario){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "___________________________________________________________________________________" << endl;
	cout << "                                                                                   " << endl;
	cout << "                        Solicitud cambio de contraseña                             " << endl;
	cout << "                                                                                   " << endl;
	cout << "      Ingrese la nueva contraseña: ";cin>>personas[i].password;
	cout << "                                                                                   " << endl;
	cout << "___________________________________________________________________________________" << endl;
	cin.get();
	cin.get();
	system("clear");
	return (interface_user());
		}
	else{
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "____________________________________________________________________________________" << endl;
	cout << "                                                                                    " << endl;
	cout << "                  La contraseña introducida es incorrecta                           " << endl;
	cout << "                                                                                    " << endl;
	cout << "                       Presione enter para continuar                                " << endl;
	cout << "____________________________________________________________________________________" << endl;
	cin.get();
	cin.get();
	system("clear");
	return(interface_user());
			}
		}
	}
void section_interface_user_4(){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                               " << endl;
	cout << "_____________________________________________________________________________________" << endl;
	cout << "                                                                                     " << endl;
    cout << "                                Movimientos                                          " << endl;
	for (string movimiento :  movimientos){
	cout << "      - " << movimiento << "$" << endl;
	}
	cout << "                        Presiona enter para continuar                                " << endl;
	cout << "                                                                                     " << endl;
	cout << "_____________________________________________________________________________________" << endl;
	cin.get();
	cin.get();
	system("clear");
	return (interface_user());
	}
void section_interface_user_5(){
	system("clear");
	cout << "                            | B A N K  E M P I R E |                                  " << endl;
	cout << "______________________________________________________________________________________" << endl;
	cout << "                                                                                      " << endl;
	cout << "                                Pago de servicios                                     " << endl;
	cout << "                                                                                      " << endl;
	cout << "                  1. Servicio de Electricidad.                                        " << endl;
	cout << "                                                                                      " << endl;
	cout << "                  2. Servicio de Agua potable.                                        " << endl;
	cout << "                                                                                      " << endl;
	cout << "                  3. Servicio de Internet.                                            " << endl;
	cout << "                                                                                      " << endl;
	cout << "______________________________________________________________________________________" << endl; 
	cout << "                                                                                      " << endl;
    cout << "                 Ingrese la opcion deseada: ";cin>>op_servicios; 
    while(!cin){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("clear");
		section_interface_user_5();
    cout << "                 Ingrese la opcion deseada: ";cin>>op_servicios;
	}
		switch(op_servicios){
		case 1:
		service_interface_user();
		break;
		case 2:
		service_interface_user_2();
		break;
		case 3:
		service_interface_user_3();
		break;
		default:
		system("clear");
	cout << "                     Digite una opcion valida                                         " << endl;
		return (section_interface_user_5());
		}
	}
void service_interface_user(){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                                    " << endl;
	cout << "______________________________________________________________________________________" << endl;
	cout << "                                                                                      " << endl;
	cout << "                             Factura de Electricidad                                  " << endl;
	cout << "                                                                                      " << endl;
	cout << "      Deuda: " << electricidad <<"$"                                                    << endl;
	cout << "      cantidad a pagar: ";cin>>facture;
	cout << "                                                                                      " << endl;  
	cout << "______________________________________________________________________________________" << endl;
		if(facture > money){
		system("clear");
    cout << "                           | B A N K  E M P I R E |                                   " << endl;
	cout << "______________________________________________________________________________________" << endl;  
	cout << "                                                                                      " << endl;
	cout << "                            Fondo insuficiente                                        " << endl;
	cout << "                                                                                      " << endl;
	cout << "                        Presione enter para continuar                                 " << endl;
	cout << "______________________________________________________________________________________" << endl;
		cin.get();
		cin.get();
		system("clear");
		return(interface_user());
		}
		else{
	system("clear");
	money -= facture;
	facture_result = electricidad - facture;
	electricidad = facture_result;
	cout << "                          | B A N K  E M P I R E |                                    " << endl;
	cout << "______________________________________________________________________________________" << endl;
	cout << "                                                                                      " << endl;
	cout << "                               ***Factura***                                          " << endl;
	cout << "                                                                                      " << endl;
	cout << "      Monto restante: " << facture_result <<"$"; 
	cout << "                                                                                      " << endl;
	cout << "                        Presione enter para continuar                                 " << endl;
	cout << "______________________________________________________________________________________" << endl;
	movimientos.push_back("Pago de servicio: (Electicidad) " + to_string(facture));
	movimientos_admin.push_back("Pago de servicio: (Electicidad) " + to_string(facture));
		cin.get();
		cin.get();
		system("clear");
		return (interface_user());
		}
	}
void service_interface_user_2(){
	system("clear");
	cout << "                           | B A N K  E M P I R E |                                   " << endl;
	cout << "______________________________________________________________________________________" << endl;
	cout << "                                                                                      " << endl;
	cout << "                             Factura de Agua potable                                  " << endl;
	cout << "                                                                                      " << endl;
	cout << "      Deuda: " << agua <<"$"                                                            << endl;
	cout << "      cantidad a pagar: ";cin>>facture;
	cout << "                                                                                      " << endl;  
	cout << "______________________________________________________________________________________" << endl;
		if(facture > money){
		system("clear");
	cout << "                           | B A N K  E M P I R E |                                   " << endl;	
	cout << "______________________________________________________________________________________" << endl;  
	cout << "                                                                                      " << endl;
	cout << "                            Fondo insuficiente                                        " << endl;
	cout << "                                                                                      " << endl;
	cout << "                        Presione enter para continuar                                 " << endl;
	cout << "______________________________________________________________________________________" << endl;
		cin.get();
		cin.get();
		system("clear");
		return(interface_user());
		}
		else{
	system("clear");
	money -= facture;
	facture_result = agua - facture;
	agua = facture_result;
	cout << "                           | B A N K  E M P I R E |                                   " << endl;
	cout << "______________________________________________________________________________________" << endl;
	cout << "                                                                                      " << endl;
	cout << "                               ***Factura***                                          " << endl;
	cout << "                                                                                      " << endl;
	cout << "      Monto restante: " << facture_result <<"$"; 
	cout << "                                                                                      " << endl;
	cout << "                        Presione enter para continuar                                 " << endl;
	cout << "______________________________________________________________________________________" << endl;
	movimientos.push_back("Pago de servicio: (Agua potable) " + to_string(facture));
	movimientos_admin.push_back("Pago de servicio: (Agua potable) " + to_string(facture));
		cin.get();
		cin.get();
		system("clear");
		return (interface_user());
		}
	}
void service_interface_user_3(){
	system("clear");
	cout << "                           | B A N K  E M P I R E |                                   " << endl;
	cout << "______________________________________________________________________________________" << endl;
	cout << "                                                                                      " << endl;
	cout << "                             Factura de Internet                                      " << endl;
	cout << "                                                                                      " << endl;
	cout << "      Deuda: " << internet <<"$"                                                        << endl;
	cout << "      cantidad a pagar: ";cin>>facture;
	cout << "                                                                                      " << endl;  
	cout << "______________________________________________________________________________________" << endl;
		if(facture > money){
		system("clear");
	cout << "                           | B A N K  E M P I R E |                                   " << endl;
	cout << "______________________________________________________________________________________" << endl;  
	cout << "                                                                                      " << endl;
	cout << "                            Fondo insuficiente                                        " << endl;
	cout << "                                                                                      " << endl;
	cout << "                        Presione enter para continuar                                 " << endl;
	cout << "______________________________________________________________________________________" << endl;
		cin.get();
		cin.get();
		system("clear");
		return(interface_user());
		}
		else{
	system("clear");
	money -= facture;
	facture_result = internet - facture;
	internet = facture_result;
	cout << "                           | B A N K  E M P I R E |                                   " << endl;
	cout << "______________________________________________________________________________________" << endl;
	cout << "                                                                                      " << endl;
	cout << "                               ***Factura***                                          " << endl;
	cout << "                                                                                      " << endl;
	cout << "      Monto restante: " << facture_result <<"$"; 
	cout << "                                                                                      " << endl;
	cout << "                        Presione enter para continuar                                 " << endl;
	cout << "______________________________________________________________________________________" << endl;
	movimientos.push_back("Pago de servicio: (internet) " + to_string(facture));
	movimientos_admin.push_back("Pago de servicio: (internet) " + to_string(facture));
		cin.get();
		cin.get();
		system("clear");
		return (interface_user());
		}
	}
void login_admin_confirm(){
	system("clear");
	cout << "                           | B A N K  E M P I R E |                                  " << endl;
	cout << "_____________________________________________________________________________________" << endl;
	cout << "                                                                                     " << endl;
	cout << "              ¡Bienvenido al Modo Administrador! Antes de continuar                  " << endl;
	cout << "                tenga en cuenta que este inicio de sesión es                         " << endl;
	cout << "                 exclusivo para la administración del banco.                         " << endl;
	cout << "                                                                                     " << endl;
	cout << "_____________________________________________________________________________________" << endl;
	cout << "                                                                                     " << endl;
	cout << "                    ¿Desea continuar? Y/N ";cin>>confirm_admin;
	if(confirm_admin == 'Y' || confirm_admin == 'y'){
		system("clear");
		return(login_admin());
		}
	else if(confirm_admin == 'N' || confirm_admin == 'n' ){
		system("clear");
		main_op();
		}
	else{
		system("clear");
		login_admin_confirm();
		}
	}
void login_admin(){
	cout << "                           | B A N K  E M P I R E |                                   " << endl;
	cout << "_____________________________________________________________________________________" << endl;
	cout << "                                                                                     " << endl;
	cout << "              ¡Bienvenido al modo administrador de Empire bank!                      " << endl;
	cout << "           Aquí podrá acceder a todas las funciones y herramientas                   " << endl;
	cout << "              necesarias para administrar y supervisar el sistema                    " << endl;
	cout << "                      de manera eficiente y segura                                   " << endl;
	cout << "                                                                                     " << endl;
	cout << "            Para volver a la pestaña anterior escribe /salir                         " << endl;
	cout << "                                                                                     " << endl;
	cout << "                                                                                     " << endl;
	cout << "                   Usuario: ";cin>>user_confirm_admin;
	cout << "                                                                                     " << endl;
	cout << "                Contraseña: ";cin>>password_confirm_admin;
	cout << "                                                                                     " << endl;
	cout << "_____________________________________________________________________________________" << endl;
	if(user_confirm_admin == ad1.boss && password_confirm_admin == ad1.pass_boss){
		valid_admin();
		}
	else if(user_confirm_admin == "/salir" || password_confirm_admin == "/salir"){
		system("clear");
		main_op();
		}
	else{
		system("clear");
	 cout << "                           | B A N K  E M P I R E |                                 " << endl;
	 cout << "___________________________________________________________________________________ " << endl;
	 cout << "                                                                                    " << endl;
	 cout << "                   Nombre de usuario o contraseña incorrectos.                      " << endl;	
	 cout << "                             Intente nuevamente                                     " << endl;
		return(login_admin());
		}
}
void admin_interface(){
	system("clear");
	cout << "                              | B A N K  E M P I R E |                                      " << endl;
	cout << "____________________________________________________________________________________________" << endl;
	cout << "                                                                                            " << endl;
	cout << "         ¡Bienvenido al Modo Administrador! Sr: " << nombre_admin <<" "<< apellido_admin      << endl; 
	cout << "         ¿Qué tarea tenemos en la agenda para hoy? Recuerde que tiene                       " << endl;
	cout << "         a su disposición todas las herramientas necesarias para gestionar                  " << endl;
	cout << "         y supervisar el sistema bancario de manera eficiente y segura.                     " << endl;
	cout << "                                                                                            " << endl;
	cout << "                                                                                            " << endl;
	cout << "         1.Transacciones Globales           |    4.Mostrar usuarios nuevos                  " << endl;
	cout << "                                            |                                               " << endl;
	cout << "         2.Datos de Usuarios Registrados    |    0.Salir                                    " << endl;
	cout << "                                            |                                               " << endl;
	cout << "         3.Monto maximo de Retiros          |                                               " << endl;
	cout << "____________________________________________________________________________________________" << endl;
	cout << "                                                                                            " << endl;
	cout << "                   Introduce una opcion: ";cin>>op_interface_admin;
		while(!cin){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("clear");
		admin_interface();
    cout << "                   Introduce una opcion: ";cin>>op_interface_admin;
	}
		switch(op_interface_admin){
		case 1:
		system("clear");
		section_interface_admin();
		break;
		case 2:
		system("clear");
		section_interface_admin_2();
		break;
		case 3:
		system("clear");
		section_interface_admin_3();
		break;
		case 4:
		system("clear");
		section_interface_admin_4();
		break;
		case 0:
		system("clear");
		main_op();
		break;
		default: 
		system("clear");
	cout << "                   Entrada no valida / Intente de nuevo                            " << endl;
		return (admin_interface());
		}
	}
void section_interface_admin(){
	cout << "                             | B A N K  E M P I R E |                                   " << endl;
	cout << "________________________________________________________________________________________" << endl;
	cout << "                                                                                        " << endl;
	cout << "                               Transacciones Globales                                   " << endl;
	cout << "                                                                                        " << endl;
	for (string movimiento : movimientos_admin){
	cout << "      - " << movimiento << "$" << endl;
			}
	cout << "                                                                                        " << endl;
	cout << "________________________________________________________________________________________" << endl;
	cin.get();
	cin.get();
	system("clear");
	return (admin_interface());
	}
void section_interface_admin_2(){
		system("clear");
		string linea;
		string nombreArchivo = "datos.txt";
		ifstream archivo(nombreArchivo.c_str());
		while (getline(archivo, linea)) {
    cout << linea << endl;
		}
	cout << "                                                                                          " << endl;
    cout << "                           ¿Salir del listado?                                            " << endl;
    cout << "                                  Y/N ";cin>>confirm_section;
    if(confirm_section == 'Y' || confirm_section == 'y'){
		return (admin_interface());
		}
    else if(confirm_section == 'N' || confirm_section == 'n'){
		system("clear");
		return(section_interface_admin_2());
		}
}
void section_interface_admin_3(){
	cout << "                           | B A N K  E M P I R E |                                     " << endl;
	cout << "________________________________________________________________________________________" << endl;
	cout << "                                                                                        " << endl;
	cout << "                 Modificacion de limites de retiro para usuarios                        " << endl;
	cout << "                                                                                        " << endl;
	cout << "       Monto actual: " << max_withdraw << "$"                                             << endl;
	cout << "                                                                                        " << endl;
	cout << "       Ingrese el nuevo monto: "; cin>>max_withdraw;
	cout << "                                                                                        " << endl;
	cout << "________________________________________________________________________________________" << endl;
	system("clear");
	cout << "                         | B A N K  E M P I R E |                                       " << endl;
	cout << "________________________________________________________________________________________" << endl;
	cout << "                                                                                        " << endl; 
	cout << "                        Modificacion realizada con exito                                " << endl; 
	cout << "                                                                                        " << endl;
	cout << "        Monto actual : " << max_withdraw << "$"                                           << endl;
	cout << "                                                                                        " << endl;
	cout << "                         Presione enter para continuar                                  " << endl;  
	cout << "________________________________________________________________________________________" << endl;
	cin.get();
	cin.get();
	system("clear");
	return (admin_interface());
	}
void section_interface_admin_4(){
	system("clear");
	cout << "                          | B A N K  E M P I R E |                                   " << endl;
	cout << "_____________________________________________________________________________________" << endl;
	cout << "                                                                                     " << endl;
	cout << "        Ultimamente se han registrado una cantidad considerable de usuarios          " << endl;  
	cout << "_____________________________________________________________________________________" << endl;
	cout << "                                                                                     " << endl;
	for (size_t i = 0; i < personas.size(); i++){
    cout << endl << "                   Datos de la persona " << i + 1 << endl;
    cout << "                                                                                     " << endl;
    cout << "            Usuario: " << personas[i].usuario << endl;
    cout << "                                                                                     " << endl;
    cout << "            Contraseña: " << personas[i].password << endl;
    cout << "                                                                                     " << endl;
    cout << "            Nombres: " << personas[i].nombres << endl;
    cout << "                                                                                     " << endl;
    cout << "            Apellidos: " << personas[i].apellidos << endl;
    cout << "                                                                                     " << endl;
    cout << "            Edad: " << personas[i].edad << endl;
    cout << "                                                                                     " << endl;
    cout << "            Cédula: " << personas[i].cedula << endl;
    cout << "                                                                                     " << endl;
    cout << "            Tipo de cuenta: " << personas[i].tipo_cuenta << endl;
    cout << "                                                                                     " << endl;
    cout << "            Fecha de nacimiento: " << personas[i].fecha_nacimiento << endl;
    cout << "                                                                                     " << endl;
    cout << "_____________________________________________________________________________________" << endl;
    }
    cin.get();
    cin.get();
    system("clear");
    return(admin_interface());
	}
