/*
Almacene el número total de toneladas de cereales cosechados durante cada mes del año.
proporcionando la siguiente Información. El promedio anual de toneladas cosechadas.
Cuantos meses tuvieron una cosecha superior al promedio anual. Qué mes tuvo la mayor
cosecha.
 */


#include <iostream>
#include <vector>
#include <string>
using namespace std;
//variables
void f1();
//funciones
	const int MESES = 12;
	    vector<string> nombres_meses = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    vector<int> cosechas_meses(MESES);
    int total_cosechas = 0;
int main(int argc, char **argv){
	f1();
	
	return 0;
	}
void f1(){
    for (int i = 0; i < MESES; i++) {
        cout << "Ingrese el número total de toneladas cosechadas en " << nombres_meses[i] << ": ";
        cin >> cosechas_meses[i];
        total_cosechas += cosechas_meses[i];
    }
    double promedio_cosechas = (double)total_cosechas / MESES;
    cout << "El promedio anual de toneladas cosechadas es: " << promedio_cosechas << endl;
    int meses_superiores = 0;
    for (int i = 0; i < MESES; i++) {
        if (cosechas_meses[i] > promedio_cosechas) meses_superiores++;
    }
    cout << meses_superiores << " meses tuvieron una cosecha superior al promedio anual." << endl;
    int mes_mayor = 0;
    for (int i = 1; i < MESES; i++) {
        if (cosechas_meses[i] > cosechas_meses[mes_mayor]) mes_mayor = i;
    }
    cout << nombres_meses[mes_mayor] << " tuvo la mayor cosecha." << endl;
	
	}

