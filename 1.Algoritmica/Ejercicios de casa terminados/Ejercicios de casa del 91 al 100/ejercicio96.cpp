/*
Escriba un algoritmo/programa, con una función nombrada tiempo() que tenga un
parámetro en número entero llamado totalSeg y tres parámetros de referencia enteros
nombrados horas, min y seg. La función es convertir el número de segundos transmitido en
un número equivalente de horas, minutos y segundos. 
 */

#include <iostream>
using namespace std;

void tiempo(int totalSeg, int& horas, int& min, int& seg) {
    horas = totalSeg / 3600;
    totalSeg %= 3600;
    min = totalSeg / 60;
    seg = totalSeg % 60;
}
int main() {
    int totalSeg, horas = 0, min = 0, seg = 0;
    cout << "Ingrese el número total de segundos: ";
    cin >> totalSeg;
    tiempo(totalSeg, horas, min, seg);
    cout << "El equivalente en tiempo es: " << horas << " horas, " << min << " minutos y " << seg << " segundos." << endl;
    return 0;
}
