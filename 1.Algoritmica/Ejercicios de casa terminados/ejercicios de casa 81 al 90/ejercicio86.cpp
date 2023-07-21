/*
Crear un algoritmo/programa que permita registrar un muestreo con un número
indeterminado de personas, para determinar el promedio de peso en las diversas etapas:
infancia, adolescencia, adultez temprana, adultez media y adultez tardía, que existen en su
zona habitacional. Se determinan las categorías con base en la siguiente tabla:
CATEGORIA				EDAD
Infancia				0 - 11
Adolescencia			12 – 20
Adultez Temprana		21 – 39
Adultez Media			40 – 64
Adultez Tardía			65 en adelante
Presentar un reporte en pantalla que indique: cantidad de personas encuestadas, cantidad
de personas en cada categoría, monto total del peso por categoría y el promedio de peso
de cada categoría.
 */
#include <iostream>
#include <vector>
using namespace std;
void f1();
struct Persona {
    int edad;
    float peso;
};

int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
	vector<Persona> personas;
    int infancia = 0, adolescencia = 0, adultez_temprana = 0, adultez_media = 0, adultez_tardia = 0;
    float peso_infancia = 0, peso_adolescencia = 0, peso_adultez_temprana = 0, peso_adultez_media = 0, peso_adultez_tardia = 0;

    while (true) {
        Persona persona;
        cout << "Ingrese la edad de la persona  o presione (-1 para salir): ";
        cin >> persona.edad; 
        if (persona.edad == -1) {
            break;
        }
        cout << "Ingrese el peso de la persona: ";
        cin >> persona.peso;
        personas.push_back(persona);
    }

    for (Persona persona : personas) {
        if (persona.edad >= 0 && persona.edad <= 11) {
            infancia++;
            peso_infancia += persona.peso;
        } else if (persona.edad >= 12 && persona.edad <= 20) {
            adolescencia++;
            peso_adolescencia += persona.peso;
        } else if (persona.edad >= 21 && persona.edad <= 39) {
            adultez_temprana++;
            peso_adultez_temprana += persona.peso;
        } else if (persona.edad >= 40 && persona.edad <= 64) {
            adultez_media++;
            peso_adultez_media += persona.peso;
        } else if (persona.edad >= 65) {
            adultez_tardia++;
            peso_adultez_tardia += persona.peso;
        }
    }

    int total_personas = personas.size();
    cout << "Cantidad de personas encuestadas: " << total_personas << endl;

    cout << "Cantidad de personas en cada categoría:" << endl;
    cout << "Infancia: " << infancia << endl;
    cout << "Adolescencia: " << adolescencia << endl;
    cout << "Adultez Temprana: " << adultez_temprana << endl;
    cout << "Adultez Media: " << adultez_media << endl;
    cout << "Adultez Tardía: " << adultez_tardia << endl;

    cout << "Monto total del peso por categoría:" << endl;
    cout << "Infancia: " << peso_infancia << endl;
    cout << "Adolescencia: " << peso_adolescencia << endl;
    cout << "Adultez Temprana: " << peso_adultez_temprana << endl;
    cout << "Adultez Media: " << peso_adultez_media << endl;
    cout << "Adultez Tardía: " << peso_adultez_tardia << endl;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "Promedio de peso de cada categoría:" << endl;
    cout << "Infancia: " << (peso_infancia / infancia) << endl;
    cout << "Adolescencia: " << (peso_adolescencia / adolescencia) << endl;
    cout << "Adultez Temprana: " << (peso_adultez_temprana / adultez_temprana) << endl;
    cout << "Adultez Media: " << (peso_adultez_media / adultez_media) << endl;
    cout << "Adultez Tardía: ";

    if (adultez_tardia == 0) {
        cout << "-" << endl;
    } else {
        cout<< (peso_adultez_tardia / adultez_tardia) << endl;
    }

	}

