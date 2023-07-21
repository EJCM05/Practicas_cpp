/*Un mayorista compra a un agricultor un lote de X naranjas a Bs. -Y? la docena. Después de
vender todas las naranjas a los detallistas, obtiene Bs. -K?. Calcular el porcentaje de
ganancia obtenida en la inversión.*/
#include<iostream> 
#include<conio.h>
using namespace std;
	float calc();
	float naranjas_lote,precio_naranjas,ventas_lote,porcentaje = 30 ,ganancia,pu,cl = 0;
int main(){
	cout<<"Cantidad de naranjas por lote comprado "<<endl;
	cin>>naranjas_lote;
	cout<<"Ingrese el costo de la docena "<<endl;
	cin>>precio_naranjas;
	cout<<"Introduzca los ingresos de venta por lote"<<endl;
	cin>>ventas_lote;
	cout<<"***********************************"<<endl;
	cout<<"            Calculando			  "<<endl;
	cout<<"     	  Presione Enter		  "<<endl;
	cout<<"***********************************"<<endl;
	getch();
	cout<<calc();
	getch();
	return 0;
}
float calc(){
	pu = precio_naranjas / 12;
	cl = naranjas_lote * pu;
	porcentaje = ( 100 * ventas_lote / cl) - 100;
	ganancia = ventas_lote - cl;
	cout<<"Costo de lote: "<<cl<<endl;
	cout<<"Porcentaje de ganancia: "<<porcentaje,cout<<"%"<<endl;
	cout<<"Ganancias por venta: "<<ganancia<<endl;
	cout<<"Ingresos por venta: "<<ventas_lote<<endl;
	return 0;
}
