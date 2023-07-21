/*
Para realizar una actividad conjunta se requiere conocer cuales alumnos están cursando
simultáneamente las materias de Lógica II y Bases de Datos, cuyas cédulas están
almacenadas en dos vectores. Realice la comparación respectiva, y genere un nuevo vector
con los estudiantes que cumplen esta condición, emitiendo un listado ordenado en forma
ascendente
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//funciones
void f1();
//variables
int n;
int main(){
	f1();	
	return 0;
}
void f1(){
	 
    cout << "Introduce la cantidad de estudiantes en la materia de Lógica II: ";
    cin >> n;
    vector<int> logicaII(n);
    cout << "Introduce las cédulas de los estudiantes en la materia de Lógica II: ";
    for (int i = 0; i < n; i++) {
        cin >> logicaII[i];
    }
    
    int m;
    cout << "Introduce la cantidad de estudiantes en la materia de Bases de Datos: ";
    cin >> m;
    
    vector<int> basesDeDatos(m);
    cout << "Introduce las cédulas de los estudiantes en la materia de Bases de Datos: ";
    for (int i = 0; i < m; i++) {
        cin >> basesDeDatos[i];
    }
    
    vector<int> estudiantesEnAmbasMaterias;
    
    for (int i = 0; i < n; i++) {
        if (find(basesDeDatos.begin(), basesDeDatos.end(), logicaII[i]) != basesDeDatos.end()) {
            estudiantesEnAmbasMaterias.push_back(logicaII[i]);
        }
    }
    
    sort(estudiantesEnAmbasMaterias.begin(), estudiantesEnAmbasMaterias.end());
    
    cout << "Estudiantes que están cursando simultáneamente las materias de Lógica II y Bases de Datos:" << endl;
    for (int cedula : estudiantesEnAmbasMaterias) {
        cout << cedula << endl;
    }
	}

