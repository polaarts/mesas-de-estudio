/*La señora eliana, dueña del almacen, necesita llevar inventario de sus productos , como comprenderá 
la gente es ingeniosa con los nombres, por lo que el sistema de inventario debe poder dar flexibilidad
a agregar nuevos productos y contar cuantos de estos existen.

1) Implemente en un Main un mapa "map" que permita asociar la cantidad de productos al nombre de cada uno.

2) Cree un dialogo que permita ingresar el nombre de un producto y su cantidad, el cual se debe repetir 
hasta que se ingrese como nombre "termine".

3) Muestre un resumen con la cantidad total de productos ingresados (stock), la cantidad de nombres de 
productos y el nombre de la que tiene el inventario mayor.*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> productos;
    string nombre;
    int cantidad;
    int stock = 0;
    int mayor = 0;
    string nombreMayor;
    cout << "Ingrese nombre del producto y cantidad, para terminar ingrese 'termine'" << endl;
    while(nombre != "termine") {
        cout << "Ingrese nombre del producto" << endl;
        cin >> nombre;
        if(nombre != "termine") {
            cout << "Ingrese cantidad del producto" << endl;
            cin >> cantidad;
            productos[nombre] = cantidad;
            stock += cantidad;
            if(cantidad > mayor) {
                mayor = cantidad;
                nombreMayor = nombre;
            }
        }
    }
    cout << "Stock: " << stock << endl;
    cout << "Cantidad de productos: " << productos.size() << endl;
    cout << "Producto con mayor inventario: " << nombreMayor << endl;
    return 0;
}