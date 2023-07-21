/*
Realice un algoritmo/programa que calcule la descomposición en factores primos de un
número entero. Por ejemplo: 20 = 2*2*5
 */
#include <iostream>
using namespace std;
// funciones y variables
 void f1();
 int n, fs, c;
int main(){
	f1();
	return 0;
}
void f1(){
    cout<<"Inserte un número para descomponerlo en sus factores primos: "; cin>>n;
    c = n;
    for (int i = 2; i<=n; i++)
    {
        if(c==1)
        {
            break;
        }
        else if((c%i)==0)
        {
            cout<<i<<"*";
            c /= i;
            i = 1;
        }
    }
    cout<<"1 son los factores primos de "<<n<<endl;
    cout<<"\n\n";
    cin.get();



}
