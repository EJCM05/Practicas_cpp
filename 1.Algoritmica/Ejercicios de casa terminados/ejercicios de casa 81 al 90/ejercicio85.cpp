/*Elaborar un algoritmo/programa que permita simular el comportamiento de un reloj digital,
imprimiendo la hora, minutos y segundos de un día desde las 00:00:00 horas hasta las
23:59:59 horas
 */
#include <iostream>
#include <iomanip>
using namespace std;
void f1();
int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
	for (int hora = 0; hora < 24; hora++) {
        for (int minuto = 0; minuto < 60; minuto++) {
            for (int segundo = 0; segundo < 60; segundo++) {
                cout << setfill('0') << setw(2) << hora << ":";
                cout << setfill('0') << setw(2) << minuto << ":";
                cout << setfill('0') << setw(2) << segundo << endl;
            }
        }
    }
}

