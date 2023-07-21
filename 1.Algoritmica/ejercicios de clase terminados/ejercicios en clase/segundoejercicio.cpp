
#include <iostream>
using namespace std;
int n1,n2;
int suma();
int main()
{
	cout<<"ingrese un numero para sumar: ";
	cin>>n1;
	cout<<"ingrese otro numero para sumar: ";
	cin>>n2;
	cout<<"la suma de los dos numeros es: "<<suma();
	return 0;
}
int suma(){
	int resultado;
	resultado=n1+n2;
	return resultado;
}

