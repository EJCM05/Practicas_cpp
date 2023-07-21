#include <iostream>
using namespace std;

int main()
{
    int n, codigo, cantidadCultivada, cantidadVendida;
    float precioVenta, totalVentas = 0;
    int codigoMasVendido = 0, cantidadMasVendida = 0;
    int codigoMenosVendido = 0, cantidadMenosVendida = 0;

    cout << "Ingrese el número de tipos de rosas: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Ingrese el código del tipo de rosa " << i << ": ";
        cin >> codigo;

        cout << "Ingrese la cantidad cultivada del tipo de rosa " << i << ": ";
        cin >> cantidadCultivada;

        cout << "Ingrese la cantidad vendida del tipo de rosa " << i << ": ";
        cin >> cantidadVendida;

        cout << "Ingrese el precio de venta del tipo de rosa " << i << ": ";
        cin >> precioVenta;

        totalVentas += precioVenta * cantidadVendida;

        if (cantidadVendida > cantidadMasVendida)
        {
            codigoMasVendido = codigo;
            cantidadMasVendida = cantidadVendida;
        }

        if (i == 1 || cantidadVendida < cantidadMenosVendida)
        {
            codigoMenosVendido = codigo;
            cantidadMenosVendida = cantidadVendida;
        }
    }

    cout << endl;
    cout << "El código del producto más vendido es: " << codigoMasVendido << endl;
    cout << "La cantidad vendida del producto más vendido es: " << cantidadMasVendida << endl;

    cout << endl;
    cout << "El código del producto menos vendido es: " << codigoMenosVendido << endl;
    cout << "La cantidad vendida del producto menos vendido es: " << cantidadMenosVendida << endl;

    cout << endl;
    cout << "El total de las ventas es: $" << totalVentas;

    return 0;
}

