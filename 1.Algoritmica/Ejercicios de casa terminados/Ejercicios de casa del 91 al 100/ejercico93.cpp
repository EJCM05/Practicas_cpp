/*
escriba un algoritmo/programa, con una plantilla de función llamada despliegue() que
despliegue el valor del argumento único que se le transmite cuando es invocada la función.
 */
#include <iostream>
using namespace std;
template <typename T>
void despliegue(T arg) {
    cout << arg << endl;
}

int main() {
    despliegue(5);
    despliegue(3.14);
    despliegue("Hola");
    return 0;
}
