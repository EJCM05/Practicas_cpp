/*
El Estado Venezolano decidió contratarlo a usted, con el objeto que elabore un
algoritmo/programa, que le permita realizar el subsidio a las familias, respondiendo al
estrato social que poseen, en función a la tabla que se presenta a continuación:
				ESTRATO		  SUBSIDIO	         CLASE
					1	     0,00 Bs.			Alta
					2	     200.000,00 Bs.		Media Alta
					3	     800.000,oo Bs.		Media
					4	     1.500.000,00 Bs.	Media Baja
					5	     2.500.000,00 Bs.	Baja
					6	     3.500.000,00 Bs.	Muy Baja
Debe en primera instancia solicitar los datos del (la) jefe (a) de familia: primer apellido,
segundo apellido, primer nombre, segundo nombre, dirección de habitación, estado,
* municipio, parroquia. Luego presentar un Menú de opciones donde se muestren los
diversos tipos de estratos sociales. Al final emitir un reporte donde indique lo siguiente:
	=======================================
	REPORTE DEL SUBSIDIO DE GOBIERNO
	=======================================
		Apellidos y Nombres: AAAAAA BBBBBB, CCCCCC DDDDDD
		Estado...................: TÁCHIRA
		Municipio...............: SAN CRISTÓBAL
		Parroquia...............: LA CONCORDIA
		Dirección................: Barrio El Carmenen, Casa Nro. 8-170.
		Estrato Social.........: Nivel 4
		Clase......................: MEDIA BAJA
		Subsidio Asignado..: 1.500.000,00 Bs.
		*/


#include <iostream>
using namespace std;
//funciones 
void estrato();
//variables
int op;
char nombrecompleto[50];
char direccion[50],estado[50];
char municipio[20],parroquia[50];
int main(){
	cout<<"********Subsidio de las familias**********"<<endl;
	cout<<"Digite sus Apellidos y nombres de Jefa o Jefe de familia: "<<endl;
	cin.getline(nombrecompleto,50,'\n'); //el cin.getline(variable,N_letras,'\n') (el ('\n') es ajuro) para guardar la cadena de caracteres 
	// cout<<nombrecompleto; para ya sabes que xd
	cout<<"Digite la direccion en la que vive: "<<endl;
	cin.getline(direccion,50,'\n');
	cout<<"¿En que estado vive?: "<<endl;
	cin.getline(estado,50,'\n');
	cout<<"¿En que municipio vive?: "<<endl;
	cin.getline(municipio,50,'\n');
	cout<<"¿En que parroquia vive?: "<<endl;
	cin.getline(parroquia,50,'\n');
	cin.get();
	system("clear");
	estrato();
	return 0;
}
void estrato(){
	cout<<"-----------------------------------------------------"<<endl;
	cout<<" ESTRATO		  SUBSIDIO	           CLASE "<<endl<<endl;;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"	  1	          0,00 Bs.             Alta" <<endl;
	cout<<"	  2	          200.000,00 Bs.       Media Alta"<<endl;
	cout<<"	  3	          800.000,oo Bs.       Media"<<endl;
	cout<<"	  4	          1.500.000,00 Bs.     Media Baja"<<endl;
	cout<<"	  5	          2.500.000,00 Bs.     Baja"<<endl;
	cout<<"	  6	          3.500.000,00 Bs.     Muy Baja"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Selecione el Estrato correspondiente a su economia: ";cin>>op;
	switch(op){
		case 1:
		cout<<"	       =======================================   "<<endl;
		cout<<"                REPORTE DEL SUBSIDIO DE GOBIERNO	 "<<endl;
		cout<<"           =======================================   "<<endl;
		cout<<"		Apellidos y Nombres:        "<<nombrecompleto<<endl;
		cout<<"		Estado.....................: "<<estado<<endl;   
		cout<<"		Municipio..................: "<<municipio<<endl;
		cout<<"		Parroquia..................: "<<parroquia<<endl;
		cout<<"		Dirección..................: "<<direccion<<endl;
		cout<<"		Estrato Social.............: Nivel 1        "<<endl;
		cout<<"		Clase......................: Alta "<<endl;
		cout<<"		Subsidio Asignado..........: 0,00 Bs."<<endl;
		break;
		case 2:
		cout<<"	       =======================================   "<<endl;
		cout<<"                REPORTE DEL SUBSIDIO DE GOBIERNO	 "<<endl;
		cout<<"           =======================================   "<<endl;
		cout<<"		Apellidos y Nombres:        "<<nombrecompleto<<endl;
		cout<<"		Estado.....................: "<<estado<<endl;   
		cout<<"		Municipio..................: "<<municipio<<endl;
		cout<<"		Parroquia..................: "<<parroquia<<endl;
		cout<<"		Dirección..................: "<<direccion<<endl;
		cout<<"		Estrato Social.............: Nivel 2        "<<endl;
		cout<<"		Clase......................: Media Alta "<<endl;
		cout<<"		Subsidio Asignado..........: 200.000,00 Bs."<<endl;
		case 3:
		cout<<"	       =======================================   "<<endl;
		cout<<"                REPORTE DEL SUBSIDIO DE GOBIERNO	 "<<endl;
		cout<<"           =======================================   "<<endl;
		cout<<"		Apellidos y Nombres:        "<<nombrecompleto<<endl;
		cout<<"		Estado.....................: "<<estado<<endl;   
		cout<<"		Municipio..................: "<<municipio<<endl;
		cout<<"		Parroquia..................: "<<parroquia<<endl;
		cout<<"		Dirección..................: "<<direccion<<endl;
		cout<<"		Estrato Social.............: Nivel 3        "<<endl;
		cout<<"		Clase......................: Media          "<<endl;
		cout<<"		Subsidio Asignado..........: 800.000,oo Bs. "<<endl;
		break;
		case 4:
		cout<<"	       =======================================   "<<endl;
		cout<<"                REPORTE DEL SUBSIDIO DE GOBIERNO	 "<<endl;
		cout<<"           =======================================   "<<endl;
		cout<<"		Apellidos y Nombres:        "<<nombrecompleto<<endl;
		cout<<"		Estado.....................: "<<estado<<endl;   
		cout<<"		Municipio..................: "<<municipio<<endl;
		cout<<"		Parroquia..................: "<<parroquia<<endl;
		cout<<"		Dirección..................: "<<direccion<<endl;
		cout<<"		Estrato Social.............: Nivel 4         "<<endl;
		cout<<"		Clase......................: Media baja      "<<endl;
		cout<<"		Subsidio Asignado..........: 1.500.000,00 Bs."<<endl;
		break;
		case 5:
		cout<<"	       =======================================   "<<endl;
		cout<<"                REPORTE DEL SUBSIDIO DE GOBIERNO	 "<<endl;
		cout<<"           =======================================   "<<endl;
		cout<<"		Apellidos y Nombres:        "<<nombrecompleto<<endl;
		cout<<"		Estado.....................: "<<estado<<endl;   
		cout<<"		Municipio..................: "<<municipio<<endl;
		cout<<"		Parroquia..................: "<<parroquia<<endl;
		cout<<"		Dirección..................: "<<direccion<<endl;
		cout<<"		Estrato Social.............: Nivel 5         "<<endl;
		cout<<"		Clase......................: Baja            "<<endl;
		cout<<"		Subsidio Asignado..........: 2.500.000,00 Bs."<<endl;
		break;
		case 6:
		cout<<"	       =======================================   "<<endl;
		cout<<"                REPORTE DEL SUBSIDIO DE GOBIERNO	 "<<endl;
		cout<<"           =======================================   "<<endl;
		cout<<"		Apellidos y Nombres:        "<<nombrecompleto<<endl;
		cout<<"		Estado.....................: "<<estado<<endl;   
		cout<<"		Municipio..................: "<<municipio<<endl;
		cout<<"		Parroquia..................: "<<parroquia<<endl;
		cout<<"		Dirección..................: "<<direccion<<endl;
		cout<<"		Estrato Social.............: Nivel 6         "<<endl;
		cout<<"		Clase......................: Muy Baja        "<<endl;
		cout<<"		Subsidio Asignado..........: 3.500.000,00 Bs."<<endl;
		break;
		default: cout<<"Selecione un estrato entre 1 y 6"<<endl;
		}
	}

