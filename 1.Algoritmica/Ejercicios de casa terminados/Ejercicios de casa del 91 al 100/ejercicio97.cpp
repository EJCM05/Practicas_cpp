/*
Escriba un algoritmo/programa, con una función nombrada calc_años() que tenga un
parámetro entero que represente el número total de días desde la fecha 1/1/2000 y
parámetros de referencia nombrados año, mes y día. La función es calcular el año, mes y
día actual para el número dado de días que se le transmitan. Usando las referencias, la
función deberá alterar en forma directa los argumentos respectivos en la función que llama.
Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días. 
 */

#include <iostream>
using namespace std;
void calc_años(int totalDias, int& año, int& mes, int& dia) {
    año = 2000;
    mes = 1;
    dia = 1;
    while (totalDias > 0) {
        if (totalDias >= 365) {
            totalDias -= 365;
            año++;
        } else if (totalDias >= 30) {
            totalDias -= 30;
            mes++;
        } else {
            dia += totalDias;
            totalDias = 0;
        }
    }
}
int main() {
    int totalDias, año = 0, mes = 0, dia = 0;
    cout << "Ingrese el número total de días desde la fecha 1/1/2000: ";
    cin >> totalDias;
    calc_años(totalDias, año, mes, dia);
    cout << "La fecha actual es: " << dia << "/" << mes << "/" << año << endl;
    return 0;
}

