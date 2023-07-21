/*desarrollar un algoritmo/programa que lea la edad de una persona. En el caso que la edad sea superior a
60 años, se le otorgará un bono de 15.000 bs. Presentar en pantalla la edad de la persona registrada y el
monto del bono asignado*/
#include <iostream>
using namespace std;
float bono();
float edad,monto = 15000;
int main()
{
	cout<<"ingrese su edad"<<endl;cin>>edad;
	cout<<bono();
	
	return 0;
}
float bono(){
	if(edad>= 60){
	cout<<"Se le asigno un bono de "<<monto<<"Bs.s"<<endl;
	}
	else{
		cout<<"usted no es mayor a 60 años"<<endl;
	}

	return 0;
	}
	

