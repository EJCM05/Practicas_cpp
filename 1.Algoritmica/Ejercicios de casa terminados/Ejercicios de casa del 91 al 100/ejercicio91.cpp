/*
Escriba un algoritmo/programa, con una función nombrada funpot() que eleve un número
entero que se le transmita a una potencia en número entero positivo y despliegue el
resultado. El número entero positivo deberá ser el segundo valor transmitido a la función.

 */
#include <iostream>
#include <cmath>
using namespace std;
int funpot(int base, int exponente) {
    int resultado = pow(base, exponente);
    return resultado;
}
int main() {
    int base;
	int exponente;
    cout<<"Escriba el numero de la base: ";cin>>base;
    cout<<"Escriba el numero del exponente: ";cin>>exponente;
	int resultado = funpot(base, exponente);
	cout << "El resultado es: " << resultado << endl;
    return 0;
}
