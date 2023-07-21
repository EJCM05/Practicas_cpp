/*
La tienda ―Dulcecito‖ vende como máximo 100 productos diferentes. La información sobre
los productos se encuentra almacenada en los siguientes arreglos paralelos:

		139. Producto		140. Cantidad
		141. 0				142. 0
		143. 1				144. 1
		145. 2				146. 2
		147. …				148. …
		149. 99				150. 99
- Producto guarda la clave de los diferentes dulces.
- Cantidad es la cantidad de cajas de dulces de un producto i.
- El administrador necesita un programa en C que permita:
- ¿Conocer cuál es la clave del producto que tiene la mayor cantidad de cajas?
- (Asuma que no habrá cantidades iguales.)
- ¿Cuáles son los productos que necesita pedir al proveedor ya que tiene más de una
- caja y menos de 50 cajas en existencia?
- Mostrar los productos que tengan cero cajas en existencia.
 */


#include <iostream>
#include <vector>
using namespace std;
//variables
const int MAX_PRODUCTOS = 100;
    vector<int> Producto(MAX_PRODUCTOS), Cantidad(MAX_PRODUCTOS);
//funciones
void f1();
int main(int argc, char **argv){
	f1();
	
	return 0;
	}
void f1(){
	
    for (int i = 0; i < MAX_PRODUCTOS; i++) {
        cout << "Ingrese la clave y la cantidad de cajas del producto " << i << ": ";
        cin >> Producto[i] >> Cantidad[i];
    }
    int max_cajas = 0;
    for (int i = 1; i < MAX_PRODUCTOS; i++) {
        if (Cantidad[i] > Cantidad[max_cajas]) max_cajas = i;
    }
    cout << "La clave del producto con la mayor cantidad de cajas es: " << Producto[max_cajas] << endl;
    cout << "Los productos que necesitan pedir al proveedor son: ";
    for (int i = 0; i < MAX_PRODUCTOS; i++) {
        if (Cantidad[i] > 1 && Cantidad[i] < 50) cout << Producto[i] << " ";
    }
    cout << endl;
    cout << "Los productos con cero cajas en existencia son: ";
    for (int i = 0; i < MAX_PRODUCTOS; i++) {
        if (Cantidad[i] == 0) cout << Producto[i] << " ";
    }
	}
