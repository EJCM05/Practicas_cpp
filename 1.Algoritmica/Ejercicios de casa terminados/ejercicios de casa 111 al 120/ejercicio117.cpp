/*
En la aplicación de un censo en un barrio ―X‖, se desea determinar el nivel de escolaridad
de sus habitantes. Cada uno de ellos deberá pasar a decir cuál es su nivel (Primaria,
Secundaria, Técnico, Tecnológico, Universitario y Postgrado) en el transcurso del día del
censo. Se conoce con anticipación el total de habitantes pero no el total de los que
aportarán la información. Terminado el día se deberá determinar si existe suficiente muestra
para saber el nivel de escolaridad de los habitantes (si el total de quienes aportaron
información supera el 10% de la población total). Realizar el cálculo del nivel de escolaridad
si la muestra es suficiente (Utilizar todos los vectores que considere requeridos).
*/
#include <iostream>
#include <string>
using namespace std;
//funciones
void f1();
//variables
int totalHabitantes;
    int contadorPrimaria = 0, contadorSecundaria = 0, contadorTecnico = 0, contadorTecnologico = 0, contadorUniversitario = 0, contadorPostgrado = 0;
    int totalRespuestas = 0;
    
    string respuesta;
int main(){
	f1();	
	return 0;
}
void f1(){
    cout << "Introduce el total de habitantes del barrio: ";
    cin >> totalHabitantes;
    cout << "Introduce el nivel de escolaridad de cada habitante (\"fin\" para terminar):" << endl;
    while (true) {
        getline(cin, respuesta);
        if (respuesta == "fin") {
            break;
        }
        
        if (respuesta == "primaria") {
            contadorPrimaria++;
        } else if (respuesta == "secundaria") {
            contadorSecundaria++;
        } else if (respuesta == "técnico") {
            contadorTecnico++;
        } else if (respuesta == "tecnológico") {
            contadorTecnologico++;
        } else if (respuesta == "universitario") {
            contadorUniversitario++;
        } else if (respuesta == "postgrado") {
            contadorPostgrado++;
        }
        
        totalRespuestas++;
    }
    
    if (totalRespuestas >= totalHabitantes * 0.1) {
        cout << "La muestra es suficiente." << endl;
        
        cout << "Porcentaje de habitantes con nivel Primaria: " << static_cast<double>(contadorPrimaria) / totalRespuestas * 100 << "%" << endl;
        cout << "Porcentaje de habitantes con nivel Secundaria: " << static_cast<double>(contadorSecundaria) / totalRespuestas * 100 << "%" << endl;
        cout << "Porcentaje de habitantes con nivel Técnico: " << static_cast<double>(contadorTecnico) / totalRespuestas * 100 << "%" << endl;
        cout << "Porcentaje de habitantes con nivel Tecnológico: " << static_cast<double>(contadorTecnologico) / totalRespuestas * 100 << "%" << endl;
        cout << "Porcentaje de habitantes con nivel Universitario: " << static_cast<double>(contadorUniversitario) / totalRespuestas * 100 << "%" << endl;
        cout << "Porcentaje de habitantes con nivel Postgrado: " << static_cast<double>(contadorPostgrado) / totalRespuestas * 100 << "%" << endl;
    } else {
        cout << "La muestra no es suficiente." << endl;
    }
    
	}

