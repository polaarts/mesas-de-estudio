/* Un retail conocido necesita un sistema de gestión de productos.
Estos productos están en distintas categorías y para distintos locales.

Cada producto tiene un nombre (string), un precio (int) y una categoría (string).

Cree un programa que, usando funciones, cree dos locales Recoleta y 
La Florida y en cada uno de ellos agregue 5 productos:

1. Mackbook - $ 1.230.000 - Categoría: Notebooks
2. IPhone - $ 1.100.000 - Categoría: Celulares
3. Lenovo - $ 350.000 - Categoría: Notebooks
4. Samsung - $ 1.200.000 - Categoría: Tablets
5. iPad - $ 1.100.000 - Categoría: Tablets

Al finalizar su programa, debe mostrar todos los porductos por categoría y por local, usando funciones.
*/

/*

- Matriz de productos de Recoleta

Filas: Cantidad de productos
Columnas: Nombre, Precio, Categoría

- Matriz de productos de La Florida

Filas: Cantidad de productos
Columnas: Nombre, Precio, Categoría


*/

#include <iostream>
using namespace std;

/*
void agregarProductos(string matriz[][3], int cantidad) {
    for(int i = 0; i < cantidad; i++) {
        cout << "Ingrese nombre del producto " << i + 1 << endl;
        cin >> matriz[i][0];
        cout << "Ingrese precio del producto " << i + 1 << endl;
        cin >> matriz[i][1];
        cout << "Ingrese categoria del producto " << i + 1 << endl;
        cin >> matriz[i][2];
    }
}

void mostrarProductos(string matriz[][3], int cantidad) {
    for(int i = 0; i < cantidad; i++) {
        cout << "Producto " << i + 1 << endl;
        cout << "Nombre: " << matriz[i][0] << endl;
        cout << "Precio: " << matriz[i][1] << endl;
        cout << "Categoria: " << matriz[i][2] << endl;
    }
}

void mostrarProductosPorCategoria(string matriz[][3], int cantidad) {
    string categorias[3] = {"Notebooks", "Celulares", "Tablets"};
    for(int i = 0; i < 3; i++) {
        cout << "Categoria: " << categorias[i] << endl;
        for(int j = 0; j < cantidad; j++) {
            if(matriz[j][2] == categorias[i]) {
                cout << "Producto " << j + 1 << endl;
                cout << "Nombre: " << matriz[j][0] << endl;
                cout << "Precio: " << matriz[j][1] << endl;
                cout << "Categoria: " << matriz[j][2] << endl;
                cout << endl;
            }
        }
    }
}

void mostrarProductosPorLocal(string matriz[][3], int cantidad) {
    string locales[2] = {"Recoleta", "La Florida"};
    for(int i = 0; i < 2; i++) {
        cout << "Local: " << locales[i] << endl;
        for(int j = 0; j < cantidad; j++) {
            cout << "Producto " << j + 1 << endl;
            cout << "Nombre: " << matriz[i][j][0] << endl;
            cout << "Precio: " << matriz[i][j][1] << endl;
            cout << "Categoria: " << matriz[i][j][2] << endl;
            cout << endl;
        }
    }
}

int main() {
    int cantidad = 2;
    string recoleta[cantidad][3];
    string laFlorida[cantidad][3];
    printf("Bienvenido al sistema de gestión de productos de un retail conocido\n");
    printf("A continuación, debe ingresar los productos de los locales Recoleta y La Florida\n");
    printf("Local Recoleta:\n");
    agregarProductos(recoleta, cantidad);
    printf("Local La Florida:\n");
    agregarProductos(laFlorida, cantidad);
    cout << endl;
    mostrarProductosPorLocal(recoleta, cantidad);
    cout << endl;
    mostrarProductosPorLocal(laFlorida, cantidad);
    return 0;
}

*/