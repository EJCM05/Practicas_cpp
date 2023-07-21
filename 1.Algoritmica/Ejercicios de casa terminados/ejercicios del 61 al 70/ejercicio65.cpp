/*

 */


#include <iostream>
using namespace std;
void f1();
int N, K;
int main(){
	
    cout << "Ingrese el valor de N: ";
    cin >> N;
    cout << "Ingrese el valor de K: ";
    cin >> K;

    if (K >= N) {
        cout << "Error: K debe ser menor que N" << endl;
        return 1;
    }

    for (int i = N; i >= K; i--) {
        cout << i << " ";
    }
    cout << endl;
	return 0;
	}
