#include <iostream>
using namespace std;

//el método leer, lee los nombres de sucursales, montos de venta y empleados de cada sucursal
void leer(string sucursales[], int ventas[], int empleados[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Ingrese el nombre de la sucursal " << i + 1 << ": ";
		cin >> sucursales[i];
		cout << "Ingrese el monto de venta de la sucursal " << i + 1 << ": ";
		cin >> ventas[i];
		cout << "Ingrese el número de empleados de la sucursal " << i + 1 << ": ";
		cin >> empleados[i];
	}
}

//el método imprimir, imprime los nombres de sucursales, montos de venta y empleados de cada sucursal
void imprimir(string sucursales[], int ventas[], int empleados[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Sucursal " << i + 1 << ": " << sucursales[i] << endl;
		cout << "Monto de venta: " << ventas[i] << endl;
		cout << "Número de empleados: " << empleados[i] << endl;
	}
}

//el método promedio, calcula el promedio de ventas de todas las sucursales
float promedioventassucursales(int ventas[], int n)
{
	float suma = 0;
	for (int i = 0; i < n; i++)
	{
		suma += ventas[i];
	}
	return suma / n;
}

//montos de venta por cada vendedor
void montoventaxvendedor(string sucursales[], int ventamensual[], int empleadosmes[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Sucursal " << i + 1 << ": " << sucursales[i] << endl;
		cout << "Monto de venta por vendedor: " << ventamensual[i] / empleadosmes[i] << endl;
	}
}

//sucursales con mayor cantidad de empleados
void sucursalesconmayorcantidaddeempleados(string sucursales[], int empleados[], int n)
{
	int mayor = 0;
	for (int i = 0; i < n; i++)
	{
		if (empleados[i] > mayor)
		{
			mayor = empleados[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (empleados[i] == mayor)
		{
			cout << "Sucursal " << i + 1 << ": " << sucursales[i] << endl;
			cout << "Número de empleados: " << empleados[i] << endl;
		}
	}
}


int main()
{
	int montoventames;
	string sucursal[30];  // tiene el nombre de las 30 sucursales
	int ventamensual[30]; // tiene el monto de venta del mes de cada sucursal
	int empleadosmes[30]; // tiene cu�ntos empleados tiene cada sucursal
	leer(sucursal, ventamensual, empleadosmes, 30);
	// el m�todo leer, lee los nombres de sucursales, montos de venta y empleados
	imprimir(sucursal, ventamensual, empleadosmes, 30);
	// imprime el nombre de las sucursales que venden m�s que el monto ingresado
	promedioventassucursales(ventamensual, 30);
	// imprime el promedio de ventas entre todas las sucursales
	montoventaxvendedor(sucursal, ventamensual, empleadosmes, 30);
	// imprime venta promedio  por vendedor por cada sucursal
	sucursalesconmayorcantidaddeempleados(sucursal, empleadosmes, 30);
	// imprime nombre de la sucursal que tienen mayor cantidad de empleados
	// si dos sucursales tienen la misma cantidad de empleados se
	// imprimen las dos sucursales
}
