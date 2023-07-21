/*Leer un número y escribir el valor absoluto del mismo.*/
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  float num, valorabsoluto;
  cout << "Escribe un numero para el valor absoluto: ";
  cin >> num;
  valorabsoluto = abs(num);
  cout << "El valor absoluto es " << valorabsoluto;
  return 0;
}
