/*
 * Escriba la función todos_iguales(arreglo, largo) que indique si todos los elementos de un arreglo son iguales:

>>> todos_iguales(arreglo, largo)
True
>>> todos_iguales(arreglo, largo)
False
>>> todos_iguales(arreglo, largo)
False
 */

#include <iostream>
using namespace std;

//PAUTA
/*


bool todosIguales(int arreglo[], int largo) {
    int casoComparacion = arreglo[0];
    for (int i = 1; i < largo; i++) {
        if (arreglo[i] != casoComparacion) {
            return false;
        }
    }
    return true;
}

int main() {
    int largo;
    cout << "Defina el largo del arreglo" << endl;
    cin >> largo;

    int array[largo];

    for(int i = 0; i < largo; i++) {
        cout << "Ingrese el numero " << i+1 << " para el arreglo" << endl;
        cin >> array[i];
    }

    if(todosIguales(array, largo)) {
        cout << "Arreglo array, son iguales" << endl;
    } else {
        cout << "Arreglo array, no son iguales" << endl;
    }

    return 0;
}

*/