/*Un trabajador tiene un número determinado de horas laboradas en el día y en la noche por
cada día de la semana (de lunes a viernes). Presentar en pantalla un listado que indique la
cantidad de horas diurnas y nocturnas trabajadas cada día*, el total de horas trabajadas por
día*, el total de horas diurnas trabajadas en la semana*, el total de horas nocturnas
trabajadas en la semana*,el  total general de horas trabajadas en la semana*, el promedio de
horas diurnas*, el promedio de horas nocturnas, y el promedio general de horas laboradas.*/
#include<iostream>
using namespace std;
int main(){
	float day, night, daysfordays,days, nightweek, daysweek = 5, hoursweek, promday, promnight;
	cout<<"Ingrese el numero de horas trabajadas en el horario Diurno: "<<endl;cin>>day;
	cout<<"Ingrese el numero de horas trabajadas en el horario Nocturno: "<<endl;cin>>night;
	daysfordays = day+night;
	days= day*daysweek;
	nightweek= night*daysweek;
	hoursweek= (night+day)*daysweek;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"La cantidad de horas diurnas y nocturnas trabajadas por dia:"<<endl;
	cout<<"                Horas Diurnas: "<<day,cout<<"h"<<endl;
	cout<<"                Horas nocturnas: "<<night,cout<<"h"<<endl;
	cout<<""<<endl;
	cout<<"Total de horas trabajadas al dia: "<<daysfordays,cout<<"h"<<endl;
	cout<<""<<endl;
	cout<<"Total de horas Diurnas trabajadas a la semana: "<<days,cout<<"h"<<endl;
	cout<<"Total de horas Nocturnas trabajadas a la semana: "<<nightweek,cout<<"h"<<endl;
	cout<<""<<endl;
	cout<<"Total de horas trabajadas a la semana: "<<hoursweek,cout<<"h"<<endl;
	cout<<""<<endl;
	cout<<"El promedio de horas Diurnas: "<<days,cout<<"h"<<endl;
	cout<<"El promedio de horas Nocturnas: "<<nightweek,cout<<"h"<<endl;
	cout<<"El promedio general de horas laboradas: "<<hoursweek,cout<<"h"<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	return 0;
}
