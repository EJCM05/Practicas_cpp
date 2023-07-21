/*Escriba un algoritmo/programa que devuelva la parte fraccionaria de cualquier número
introducido por el usuario. Por ejemplo, si se introduce el número 256,879; debería
desplegarse el número 0,879.*/
#include <iostream>
#include <cmath>
using namespace std;
void fractional_p();
    double num;
int main() {
	fractional_p();
    return 0;
}
void fractional_p(){
	cout<<"Ingrese un numero para sacar la parte fraccionaria: ";cin>>num;
    double fractional_part = fmod(num, 1);
    cout<< "La parte fraccionaria de " << num << " es " << fractional_part <<endl;
	}
