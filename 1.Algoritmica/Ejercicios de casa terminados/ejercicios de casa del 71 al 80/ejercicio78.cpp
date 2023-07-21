/*
En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el
número de:
a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron únicamente el último examen.
 */


#include <iostream>
using namespace std;
//funciones
void f1();
//variables
	const int num_alumnos = 5;
    const int num_examenes = 3;
    int notas[num_alumnos][num_examenes];
	int aprobaron_todos = 0;
    int aprobaron_al_menos_uno = 0;
    int aprobaron_unicamente_ultimo = 0;
int main(){
	f1();
	return 0;
}
void f1(){
	
    for (int i = 0; i < num_alumnos; ++i) {
        cout << "Introduce las notas del alumno " << i + 1 << ": ";
        for (int j = 0; j < num_examenes; ++j) {
            cin >> notas[i][j];
        }
    }
    for (int i = 0; i < num_alumnos; ++i) {
        bool aprobo_todos = true;
        bool aprobo_al_menos_uno = false;
        bool aprobo_unicamente_ultimo = true;
        for (int j = 0; j < num_examenes; ++j) {
            if (notas[i][j] >= 12) {
                aprobo_al_menos_uno = true;
                if (j != num_examenes - 1) {
                    aprobo_unicamente_ultimo = false;
                }
            } else {
                aprobo_todos = false;
                if (j == num_examenes - 1) {
                    aprobo_unicamente_ultimo = false;
                }
            }
        }
        if (aprobo_todos) {
            ++aprobaron_todos;
        }
        if (aprobo_al_menos_uno) {
            ++aprobaron_al_menos_uno;
        }
        if (aprobo_unicamente_ultimo) {
            ++aprobaron_unicamente_ultimo;
        }
    }
    cout << "Número de alumnos que aprobaron todos los exámenes: " << aprobaron_todos << endl;
    cout << "Número de alumnos que aprobaron al menos un examen: " << aprobaron_al_menos_uno << endl;
    cout << "Número de alumnos que aprobaron únicamente el último examen: " << aprobaron_unicamente_ultimo << endl;
	}
