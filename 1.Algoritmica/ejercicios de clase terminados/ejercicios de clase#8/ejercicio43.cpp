/*
43) Calculo de definitiva para varios estudiantes con 4 notas c/u, validar que las notas estén comprendidas
entre 1 y 20 puntos.
 */

#include <iostream>
using namespace std;
//funciones
void f1();
//variables
int result,n,n1,n2,n3,n4,i;
int main(){
	f1();
	return 0;
}
void f1(){
	cout<<"ingrese el numero de estudiantes para las notas"<<endl;cin>>n;
	for(int i=1;i<=n;i++){
		cout<<endl;
		cout<<"Nota del estudiante: "<<i<<endl;
		cout<<"ingrese la primera nota: "<<endl;cin>>n1;
		cout<<"ingrese la segunda nota: "<<endl;cin>>n2;
		cout<<"ingrese la Tercera nota: "<<endl;cin>>n3;
		cout<<"ingrese la cuarta nota: "<<endl;cin>>n4;
		result=(n1+n2+n3+n4)/4;
		cout<<endl;
		cout<<"la nota definitiva del estudiante "<<i<<" es "<<result<<endl<<endl;
		}
	}
