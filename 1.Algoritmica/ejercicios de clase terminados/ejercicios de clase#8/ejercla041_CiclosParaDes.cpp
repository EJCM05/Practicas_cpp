/* Desarrollar un Algoritmo/programa para calcular cualquier
 * tabla de multiplicar, desde el 1 hasta el 10. */

# include <iostream>
using namespace std;
void f1();
int i, resul, tabla;

int main() 
{
	f1();
	return 0;
}
void f1(){
	cout << "INDIQUE EL VALOR DE LA TABLA A CALCULAR: " << endl;
	cin >> tabla;
	for (i=10;i>=1;i--) 
	{
		resul = tabla*i;
		cout << tabla << " X " << i << " = " << resul << endl;
	}
}
