/*
Hacer un menú que considere las siguientes opciones:
MENÚ PRINCIPAL
a. 1-. Calcular el Cubo de un numero
b. 2.- Definir Numero par o impar
c. 3-. Salir del Programa.
 */
#include <iostream>
using namespace std;
	int opcion;
    int numero;
    void f1();
    bool salir = false;
int main() {
    f1();

    return 0;
}
void f1(){
	while (!salir) {
        cout << "MENÚ PRINCIPAL" << endl;
        cout << "1. Calcular el Cubo de un numero" << endl;
        cout << "2. Definir Numero par o impar" << endl;
        cout << "3. Salir del Programa" << endl;
        cout << "Ingresa una opción: "<<endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un número: ";
                cin >> numero;
                cout << "El cubo de " << numero << " es " << numero*numero*numero << endl;
                break;
            case 2:
                cout << "Ingresa un número: ";
                cin >> numero;
                if (numero % 2 == 0) {
                    cout << numero << " es par" <<endl<<endl;
                } else {
                    cout << numero << " es impar" <<endl<<endl;
                }
                break;
            case 3:
                salir = true;
                break;
            default:
				system("clear");
                cout << "Opción inválida"<<endl<<endl;
               
        }
    }
}

