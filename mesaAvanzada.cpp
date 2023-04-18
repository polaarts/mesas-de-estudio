#include <iostream>
#include <string>
using namespace std;

// Definición de la clase Producto
class Producto
{
private:
    string nombre;
    double precio;
    string descripcion;
    int cantidad_en_stock;

public:
    // Constructor de la clase Producto
    Producto(string nombre, double precio, string descripcion, int cantidad_en_stock)
    {
        this->nombre = nombre;
        this->precio = precio;
        this->descripcion = descripcion;
        this->cantidad_en_stock = cantidad_en_stock;
    }
    // Métodos de la clase Producto
    string get_nombre()
    {
        return nombre;
    }
    double get_precio()
    {
        return precio;
    }
    string get_descripcion()
    {
        return descripcion;
    }
    int get_cantidad_en_stock()
    {
        return cantidad_en_stock;
    }
    void set_cantidad_en_stock(int cantidad_en_stock)
    {
        this->cantidad_en_stock = cantidad_en_stock;
    }
};

// Definición de la clase CarritoDeCompras
class CarritoDeCompras
{
private:
    Producto **productos;
    int cantidad_de_productos;

public:
    // Constructor de la clase CarritoDeCompras
    CarritoDeCompras()
    {
        productos = new Producto *[100];
        cantidad_de_productos = 0;
    }
    
    // Métodos de la clase CarritoDeCompras
    void agregar_producto(Producto *producto)
    {
        productos[cantidad_de_productos] = producto;
        cantidad_de_productos++;
    }
    void eliminar_producto(int indice)
    {
        productos[indice] = nullptr;
        for (int i = indice; i < cantidad_de_productos - 1; i++)
        {
            productos[i] = productos[i + 1];
        }
        cantidad_de_productos--;
    }
    void ver_productos()
    {
        double precio_total = 0.0;
        cout << "Lista de productos en el carrito de compras:" << endl;
        for (int i = 0; i < cantidad_de_productos; i++)
        {
            cout << i + 1 << ". " << productos[i]->get_nombre() << " - $" << productos[i]->get_precio() << endl;
            precio_total += productos[i]->get_precio();
        }
        cout << "Precio total: $" << precio_total << endl;
    }
    void comprar_productos()
    {
        for (int i = 0; i < cantidad_de_productos; i++)
        {
            int cantidad_en_stock = productos[i]->get_cantidad_en_stock();
            productos[i]->set_cantidad_en_stock(cantidad_en_stock - 1);
        }
        cantidad_de_productos = 0;
        cout << "¡Compra realizada exitosamente!" << endl;
    }
};

int main()
{
    // Creación de algunos productos
    Producto *producto1 = new Producto("Camisa", 20.0, "Camisa de manga corta", 10);
    Producto *producto2 = new Producto("Pantalón", 30.0, "Pantalón de mezclilla", 5);
    // Creación del carrito de compras
    CarritoDeCompras *carrito = new CarritoDeCompras();

    // Agregar algunos productos al carrito de compras
    carrito->agregar_producto(producto1);
    carrito->agregar_producto(producto2);
    carrito->agregar_producto(producto3);

    // Ver los productos en el carrito de compras
    carrito->ver_productos();

    // Eliminar un producto del carrito de compras
    carrito->eliminar_producto(1);

    // Ver los productos en el carrito de compras nuevamente
    carrito->ver_productos();

    // Comprar los productos del carrito de compras
    carrito->comprar_productos();

    return 0;
}