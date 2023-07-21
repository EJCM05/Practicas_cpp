/*
Realice un algoritmo/programa que solicite al usuario que piense un número entero entre el
1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango [1-100], e
indicarle al usuario si el número que digito es menor o mayor al número aleatorio, así hasta
que lo adivine. Y por último mostrarle el número de intentos que le llevo.
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//funciones
void f1();
//variables

    int numero_aleatorio = rand() % 100 + 1;
    int intentos = 0;
    int numero_usuario;
int main(){
	f1();
	return 0;
}
void f1(){
    cout << "Piensa un número entero entre 1 y 100." << endl;
    do {
        cout << "Introduce tu número: ";
        cin >> numero_usuario;
        ++intentos;
        if (numero_usuario > numero_aleatorio) {
            cout << "El número que has introducido es mayor que el número aleatorio." << endl;
        } else if (numero_usuario < numero_aleatorio) {
            cout << "El número que has introducido es menor que el número aleatorio." << endl;
        }
    } while (numero_usuario != numero_aleatorio);
    cout << "¡Felicidades! Has adivinado el número en " << intentos << " intentos." << endl;
	}
