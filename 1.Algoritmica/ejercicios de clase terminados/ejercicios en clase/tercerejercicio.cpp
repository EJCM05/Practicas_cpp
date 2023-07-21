
#include <iostream>
using namespace std;
int n1,n2;
float operaciones();

int main()
{
	cout<<"ingrese un numero para sumar: ";
	cin>>n1;
	cout<<"ingrese otro numero para sumar: ";
	cin>>n2;
	cout<<""<<operaciones();
	return 0;
}
float operaciones(){
	float mul,div,sum,rest;
	sum=n1+n2;
	rest=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	cout<<"El resultado de las cuatro operaciones es: "<<endl;
	cout<<"suma: "<<sum<<endl;
	cout<<"resta: "<<rest<<endl;
	cout<<"multiplicacion: "<<mul<<endl;
	cout<<"division: "<<div<<endl;
	cout<<endl<<endl;
	
	
	
	return 0;
}

