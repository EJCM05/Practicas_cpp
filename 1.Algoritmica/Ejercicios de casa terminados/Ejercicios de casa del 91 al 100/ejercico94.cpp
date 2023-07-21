/*
Escriba un algoritmo/programa, con una plantilla de función llamada máximo() que devuelva
el valor máximo de tres argumentos que se transmitan a la función cuando sea llamada.
Suponga que los tres argumentos serán del mismo tipo de datos
 */
#include <iostream>
using namespace std;
template <typename T>
T maximo(T a, T b, T c) {
    return max(max(a,b),c);
}
int main() {
    int x;
    int y;
    int z;
    cout<<"Ingrese tres valores: ";cin>>x>>y>>z;
    cout << "El valor máximo es: " << maximo(x,y,z) << endl;
    return 0;
}
