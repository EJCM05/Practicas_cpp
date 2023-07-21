/*
Escriba un algoritmo/programa, que tenga una función llamada mayor() que devuelva la
fecha más reciente de cualquier par de fechas que se le transmitan. Por ejemplo, si se
transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha.
 */
#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

bool operator<(const Date& lhs, const Date& rhs) {
    if (lhs.year != rhs.year) {
        return lhs.year < rhs.year;
    }
    if (lhs.month != rhs.month) {
        return lhs.month < rhs.month;
    }
    return lhs.day < rhs.day;
}

Date mayor(Date d1, Date d2) {
    return d1 < d2 ? d2 : d1;
}

int main() {
    Date date1, date2;
    cout << "Ingrese la primera fecha (DD/MM/AAAA): ";
    cin >> date1.day >> date1.month >> date1.year;
    cout << "Ingrese la segunda fecha (DD/MM/AAAA): ";
    cin >> date2.day >> date2.month >> date2.year;
    Date latestDate = mayor(date1, date2);
    cout << "La fecha más reciente es: " << latestDate.day << "/" << latestDate.month << "/" << latestDate.year << endl;
    return 0;
}
