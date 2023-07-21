/*En la piscina de la universidad se va a realizar un campeonato de clavados para n
deportistas (n dado por teclado). Los deportistas serán calificados por un jurado de 10
personas. Para calcular su puntuación se determina el promedio de los puntajes dados por
jurado calificador pero con la única salvedad que la peor y la mejor nota no se tienen en
cuenta. Cree un vector con el promedio de las calificaciones y luego determine el promedio
más alto y la más bajo de los deportistas.*/
#include <iostream>
using namespace std;
void f1();
int main()
{
	f1();
        return 0;
}
void f1(){
	int n;
    cout << "Ingrese el número de deportistas: ";
    cin >> n;

    double promedios[n];
    for (int i = 0; i < n; i++)
    {
        double notas[10];
        for (int j = 0; j < 10; j++)
        {
            cout << "Ingrese la nota del jurado " << j + 1 << " para el deportista " << i + 1 << ": ";
            cin >> notas[j];
        }

        double minimo = notas[0], maximo = notas[0], suma = notas[0];
        for (int j = 1; j < 10; j++)
        {
            if (notas[j] < minimo)
                minimo = notas[j];
            if (notas[j] > maximo)
                maximo = notas[j];
            suma += notas[j];
        }

        promedios[i] = (suma - minimo - maximo) / 8;
    }

    double promedioMasAlto = promedios[0], promedioMasBajo = promedios[0], sumaPromedios = promedios[0];
    for (int i = 1; i < n; i++)
    {
        if (promedios[i] > promedioMasAlto)
            promedioMasAlto = promedios[i];
        if (promedios[i] < promedioMasBajo)
            promedioMasBajo = promedios[i];
        sumaPromedios += promedios[i];
    }

    cout << "\nPromedio más alto: " << promedioMasAlto << endl;
    cout << "Promedio más bajo: " << promedioMasBajo << endl;
    cout << "Promedio de los deportistas: " << sumaPromedios / n << endl;


	}
