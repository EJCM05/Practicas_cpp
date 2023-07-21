/*
Realiza un algoritmo/programa que defina dos vectores de caracteres y después almacene
el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos
del primer vector seguido por los elementos del segundo vector. Muestre el contenido del
nuevo vector en la salida estándar.
 */
#include <iostream>
#include <vector>
using namespace std;
//Funciones
void f1();
//variables
	char vector1[] = {'a', 'b', 'c'};
    int n1 = sizeof(vector1) / sizeof(vector1[0]);
    char vector2[] = {'d', 'e', 'f'};
    int n2 = sizeof(vector2) / sizeof(vector2[0]);
    
int main(int argc, char **argv){
	f1();
	return 0;
}
void f1(){
	char vector3[n1 + n2];
    for (int i = 0; i < n1; i++) {
        vector3[i] = vector1[i];
    }
    for (int i = 0; i < n2; i++) {
        vector3[n1 + i] = vector2[i];
    }
    cout << "El contenido del nuevo vector es: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << vector3[i] << " ";
    }
    cout << endl;
	}
