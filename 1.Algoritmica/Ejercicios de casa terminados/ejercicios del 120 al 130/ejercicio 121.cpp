/*Implementar un algoritmo/programa que lea las notas de todos los alumnos de una clase
para una asignatura (Validar que las calificaciones estén comprendidas entre 1 y 20 puntos.
Al estudiante que no presentó se le acepta la calificación de cero), calcule:
a. Permita buscar un estudiante por su número de cédula.
b.
c. Emitir un listado que muestre el número de cédula de cada estudiante con su
respectiva calificación y su valoración cualitativa de ―Aprobado‖ o ―Reprobado‖
(trabajar el formato numérico para dos dígitos que aparezca el cero a la izquierda,
cuando un estudiante posee nota de cero puntos, en su reemplazo debe aparecer las
letras NP, que indican que no presentó).
d. Calcular la media de la materia.
e. Determine cuántos alumnos superan o igualan la media y cuántos están por debajo de
la misma.
f.
Mostrar que estudiante tiene la nota máxima y cuál la nota mínima.
g. Emitir el % de aprobados y el % de reprobados*/
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Estudiante {
    string cedula;
    int nota;
};
    vector<Estudiante> estudiantes;
int main(){
    vector<Estudiante> estudiantes;
    string cedula;
    int nota;
    double suma = 0;
    int max_nota = 0;
    int min_nota = 20;
    int aprobados = 0;
    int reprobados = 0;

    // Leer información de los estudiantes
    while (true) {
        cout << "Ingrese la cédula del estudiante (0 para terminar): ";
        cin >> cedula;
        if (cedula == "0") break;

        do {
            cout << "Ingrese la nota del estudiante (entre 0 y 20): ";
            cin >> nota;
        } while (nota < 0 || nota > 20);

        estudiantes.push_back({cedula, nota});
        suma += nota;
        if (nota > max_nota) max_nota = nota;
        if (nota < min_nota) min_nota = nota;
        if (nota >= 10) aprobados++;
        else reprobados++;
    }

    // Buscar estudiante por cédula
    cout << "Ingrese la cédula del estudiante a buscar: ";
    cin >> cedula;
    for (const auto& estudiante : estudiantes) {
        if (estudiante.cedula == cedula) {
            cout << "Estudiante encontrado. Nota: " << estudiante.nota << endl;
            break;
        }
    }

    // Emitir listado de estudiantes
    cout << "Listado de estudiantes:" << endl;
    for (const auto& estudiante : estudiantes) {
        cout << "Cédula: " << estudiante.cedula << " - Nota: ";
        if (estudiante.nota == 0) cout << "NP";
        else cout << setw(2) << setfill('0') << estudiante.nota;
        cout << " - " << (estudiante.nota >= 10 ? "Aprobado" : "Reprobado") << endl;
    }

    // Calcular media de la materia
    double media = suma / estudiantes.size();
    cout << "Media de la materia: " << media << endl;

    // Contar estudiantes por encima y por debajo de la media
    int superan_media = 0;
    int bajo_media = 0;
    for (const auto& estudiante : estudiantes) {
        if (estudiante.nota >= media) superan_media++;
        else bajo_media++;
    }
    cout << superan_media << " estudiantes superan o igualan la media" << endl;
    cout << bajo_media << " estudiantes están por debajo de la media" << endl;

    // Mostrar nota máxima y mínima
    cout << "Nota máxima: " << max_nota << endl;
    cout << "Nota mínima: " << min_nota << endl;

    // Emitir % de aprobados y reprobados
    cout << "% de aprobados: " <<
    };
