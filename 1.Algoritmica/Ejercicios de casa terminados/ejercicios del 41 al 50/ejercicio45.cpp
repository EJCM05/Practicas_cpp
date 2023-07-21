/*Dada una cantidad de Bs. F, desarrolle un algoritmo que permita desglosar dicha cantidad
en los billetes y monedas de curso legal en el País. Recuerde que estos son: 100, 50, 20,
10, 5, 2, 1, 0.5, 0.250, 0.125, 0.1 Imprima el número de billetes y/monedas
correspondientes.*/
#include <iostream>
#include <cstdlib>
using namespace std;
//variables
int billetes_de_10, billetes_de_100, billetes_de_20, billetes_de_5;
int billetes_de_50, cantidad, monedas_de_1, billetes_de_2,monedas_de_05;
int monedas_de_0250, monedas_de_0125,monedas_de_01;
int main (void){
	cout << "Ingresa el valor de cantidad de Bolivares: ";
    cin >> cantidad;
    cin.get();
    if (cantidad >= 00000){
    monedas_de_01=cantidad;
    billetes_de_100=(monedas_de_01-monedas_de_01%100)/100;
    
    monedas_de_01=monedas_de_01%100;
    billetes_de_50=(monedas_de_01-monedas_de_01%50)/50;
    monedas_de_01=monedas_de_01%50;
    
    billetes_de_20=(monedas_de_01-monedas_de_01%20)/20;
    monedas_de_01=monedas_de_01%20;
    
    billetes_de_10=(monedas_de_01-monedas_de_01%10)/10;
    monedas_de_01=monedas_de_01%10;
    
    billetes_de_5=(monedas_de_01-monedas_de_01%5)/5;
    monedas_de_01=monedas_de_01%5;
    
    billetes_de_2=(monedas_de_01-monedas_de_01%2)/2;
    monedas_de_01=monedas_de_01%2;
  
    monedas_de_1=(monedas_de_01-monedas_de_01%1)/1;
    monedas_de_01=monedas_de_01%1;
    
    monedas_de_05=(monedas_de_01-monedas_de_01%05)/05;
    monedas_de_01=monedas_de_01%05;
    
    monedas_de_0250=(monedas_de_01-monedas_de_01%0250)/0250;
    monedas_de_01=monedas_de_01%0250;
    
    monedas_de_0125=(monedas_de_01-monedas_de_01%0125)/0125;
    monedas_de_01=monedas_de_01%0125;
    
    monedas_de_01=(monedas_de_01-monedas_de_01%01)/01;
    monedas_de_01=monedas_de_01%01;
   
    cout << "Valor de billetes de 10: " << billetes_de_10 << endl;
    cout << "Valor de billetes de 100: " << billetes_de_100 << endl;
    cout << "Valor de billetes de 20: " << billetes_de_20 << endl;
    cout << "Valor de billetes de 5: " << billetes_de_5 << endl;
    cout << "Valor de billetes de 50: " << billetes_de_50 << endl;
    cout << "Valor de monedas de 1: " << monedas_de_1 << endl;
    cout << "Valor de monedas de 2: " << billetes_de_2 << endl;
    cout << "valor de monedas de 50 centimos " <<monedas_de_05 <<endl;
    cout << "valor de monedas de 25 centimos " <<monedas_de_0250 <<endl;
    cout << "valor de monedas de 15 centimos " <<monedas_de_0125 <<endl;
    cout << "valor de monedas de 01 centimos " <<monedas_de_01 <<endl;
    cout << endl;}
    else{
		cout<<"Digite un numero valido"<<endl;
		}
    return 0;
}

