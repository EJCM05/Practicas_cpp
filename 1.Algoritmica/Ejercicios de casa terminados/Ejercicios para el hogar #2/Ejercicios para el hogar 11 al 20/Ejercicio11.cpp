/*La presion, el volumen y la temperatura de una masa de aire se relacionan por la fórmula:
Masa = (presión X volumen) / [ 0.37 X ( temperatura + 460 ) ]*/
#include<iostream>
using namespace std;
float formula(float presion,float volumen,float temperatura);
float pres, vol, temp;
int main(){
	cout<<"por favor ingrese la presion"<<endl;cin>>pres;
	cout<<"por favor ingrese el volumen"<<endl;cin>>vol;
	cout<<"por favor ingrese la temperatura"<<endl;cin>>temp;
	cout<<"la masa de aire es de :"<<formula(pres,vol,temp)<<endl;
	return 0;
}
float formula(float presion,float volumen,float temperatura){
	float masa=0;
	masa = (presion * volumen)/(0.37 *( temperatura + 460 ));
	return masa;
}
