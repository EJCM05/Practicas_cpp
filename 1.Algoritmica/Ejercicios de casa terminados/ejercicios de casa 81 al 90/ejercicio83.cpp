/*
 Efectuar la división de dos números enteros, utilizando el método de las restas sucesivas.
Observe el siguiente ejemplo:
Dividir 8 entre 2
8–2=6
6–2=4
4–2=2
2–2=0
número de restas efectuadas es igual al cociente = 4
resto de la división
 */
#include <iostream>
using namespace std;
void f1();

int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
    int dividendo = 8;
    int divisor = 2;
    int cociente = 0;

    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }
    cout << "El cociente es: " << cociente << endl;
    cout << "El resto es: " << dividendo << endl;
	}
