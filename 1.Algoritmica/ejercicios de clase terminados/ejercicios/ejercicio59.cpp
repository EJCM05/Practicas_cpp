/*
59) Desarrollar un algoritmo/programa que permita almacenar en un vector 10 estudiantes, identificados
por su número de cédula de identidad, validar que no se repitan las cédulas al momento del respectivo
registro. Posteriormente presentar el listado ordenado en forma ascendente.
 */
#include <iostream>
using namespace std;
//funciones
void f1();
int suma(int temporal);
//variables
int Vector[10];
int estuds=10;
int main()
{
	f1();
	return 0;
}
void f1(){
	for(int i=0; i<estuds; i++)
	{
		cout<<"Ingrese la cedula del estudiante #"<<suma(i)<<": "; cin>>Vector[i];
	}
    for (int i = 0; i < estuds; i++)
    {
        for (int k = 0; k < estuds; k++)
        {
            if (Vector[k] > Vector[k + 1])
            {
                int temp = Vector[k];
                Vector[k] = Vector[k + 1];
                Vector[k + 1] = temp;
            }
        }
    }
    cout << "ordenado de forma ascendente: ";
    for (int i = 0; i < estuds; i++)
    {
        cout << Vector[i+1] << " ";
    }
}

int suma(int temporal)
{
	int calc=0;
	calc=temporal+1;
	return calc; 
}
