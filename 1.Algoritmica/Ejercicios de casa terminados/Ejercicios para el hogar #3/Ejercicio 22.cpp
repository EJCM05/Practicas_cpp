/* Ejercicio 22: Suponga que a partir de una Tonelada de maíz una planta productora obtiene ―M‖
kilogramos de harina y ―N‖ litros de aceite. La planta vende cada bulto de 24 paquetes de
un kilogramo de harina en Bs. ―B1‖ y cada caja de 15 envases de aceite en Bs. ―B2‖.
Suponiendo que la planta vende todo lo que produce, calcular el ingreso total por la venta
de cada tonelada de maíz, sabiendo además que cada kilogramo de harina y cada litro de
aceite que restan del embalaje se venden al detal a los precios de Bs. ―B3‖ y Bs. ―B4‖
respectivamente. */

#include <iostream>
using namespace std;

float calc_harina(), calc_aceite(), calc_detkg(), calc_detalltrs(), calc_harimayor(), calc_aceimayor(), calc_haridet(), calc_aceidet(), calc_tothari(),calc_totacei(), calc_totalbs(); 
float tot_harimayor, tot_aceimayor, tot_haridet, tot_aceidet, tot_aceite, tot_harina, total_bs, harina, aceite, precio_harina, precio_aceite, det_harina, det_aceite, paq_harina, paq_aceite;
int paqu_harina, paqu_aceite;

int main(){
	
	cout<<"***PRODUCCION DE LA PLANTA***"<<endl;
	cout<<"Kilos de Harina: "; cin>>harina;
	cout<<"Litros de Aceite: "; cin>>aceite;
	
	cout<<"\n   Estos se envasan en paquetes de 24kg de Harina que se venden en bs. "; cin>>precio_harina;
	cout<<"\n   Y paquetes de 15 envases de Aceite que se venden en bs. "; cin>>precio_aceite;
	
	cout<<"\n   La Harina que sobra, se vende al detal en Bs. "; cin>>det_harina;
	cout<<"\n   El Aceite que sobra, se vende al detal en Bs. "; cin>>det_aceite;
	
	cout<<endl<<endl;
	
	cout<<"\n  Con los "<<harina<<"kg harina, se envasaron: "<<calc_harina()<<" y sobraron: "<<calc_detkg()<<"kg al detal de harina.";
	cout<<"\n  Con los "<<aceite<<"ltrs aceite, se envasaron: "<<calc_aceite()<<" y sobraron: "<<calc_detalltrs()<<"ltrs al detal de aceite.";
	
	cout<<"\n\tEl Total Recadudado Es: "<<endl;
	cout<<"   Harina al Mayor: "<<calc_harimayor()<<" bs"<<endl;
	cout<<"   Aceite al Mayor: "<<calc_aceimayor()<<" bs"<<endl;
	cout<<"   Harina al Detal: "<<calc_haridet()<<" bs"<<endl;
	cout<<"   Aceite al Detal: "<<calc_aceidet()<<" bs"<<endl<<endl;
	cout<<"   Harina en Total: "<<calc_tothari()<<" bs"<<endl;
	cout<<"   Aceite en Total: "<<calc_totacei()<<" bs"<<endl<<endl;
	cout<<"  Ganancias Totales: "<<endl;
	cout<<"   Total: "<<calc_totalbs()<<" bs"<<endl;
	return 0;
}

float calc_harina(){
	
	paq_harina = harina / 24;
	paqu_harina=paq_harina;
		
	return paqu_harina;
}

float calc_detkg(){
	
	int result;
	
	paq_harina-=paqu_harina;
	result = paq_harina * 24;
	
	return result;
}

float calc_aceite(){
	
	paq_aceite = aceite / 15;
	paqu_aceite=paq_aceite;
		
	return paqu_aceite;
}

float calc_detalltrs(){
	
	int result;
	
	paq_aceite-=paqu_aceite;
	result = paq_aceite*15;
	
	return result;
}


float calc_harimayor(){
	
	tot_harimayor = calc_harina() * precio_harina;
	
	float num = tot_harimayor;
	
	return num;
}


float calc_aceimayor(){
	
	tot_aceimayor = calc_aceite() * precio_aceite;
	
	float num = tot_aceimayor;
	
	return num;
}

float calc_haridet(){
	
	tot_haridet = calc_detkg() * det_harina;
	
	float num = tot_haridet;
	
	return num;
}

float calc_aceidet(){
	
	tot_aceidet = calc_detalltrs() * det_aceite;

	float num = tot_aceidet;
	
	return num;
}

float calc_tothari(){
	
	tot_harina = calc_harimayor() + calc_haridet();
	
	float num = tot_harina;
	
	return num;
}

float calc_totacei(){

	tot_aceite = calc_aceimayor() + calc_aceidet();

	float num = tot_aceite;
	
	return num;	
}

float calc_totalbs(){
	
	total_bs = calc_tothari() + calc_totacei();
	
	float num = total_bs;
	
	return num;
}
	
