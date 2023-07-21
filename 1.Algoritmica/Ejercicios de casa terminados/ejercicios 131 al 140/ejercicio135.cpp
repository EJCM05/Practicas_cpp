/*
 Diseñe un algoritmo/programa que almacene y muestre en un vector llamado FIB[100] los
100 primeros números de la serie fibonacci. 
 */


#include <iostream>
#include <vector>
using namespace std;
//variables
void f1();
//funciones
	 const int N = 100;
    vector<long long> FIB(N);
int main(int argc, char **argv){
	f1();
	return 0;
	}
void f1(){
    FIB[0] = 0;
    FIB[1] = 1;
    for (int i = 2; i < N; i++) {
        FIB[i] = FIB[i-1] + FIB[i-2];
    }
    cout << "Los primeros " << N << " números de la serie Fibonacci son: "<<endl;
    for (int i = 0; i < N; i++) cout << FIB[i] << " " << endl;
    cout << endl;
	}

