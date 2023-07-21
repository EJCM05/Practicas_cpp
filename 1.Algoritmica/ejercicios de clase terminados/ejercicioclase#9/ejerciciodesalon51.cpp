#include<iostream>
 #include<cstdlib>
using namespace std;
int i, tabla[100],num;	
void arreglo();
  int main(){ 
  arreglo();
return 0;
}
void arreglo(){

   for (i=100;i>0;i--){
	tabla[i]=i-1;
	}
	for(i=100,num=0;i>0;i--,num++){ 
   cout<<" arreglo de numeros enteros "<<tabla[i]<<endl;
    }
    }
