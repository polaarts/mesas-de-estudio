/*
 * A continuación, escriba una función todos_distintos(arreglo, largo) que indique si todos los elementos de un arreglo son distintos:

>>> todos_distintos(arreglo, largo) [6, 6, 6]
False
>>> todos_distintos(arreglo, largo) [6, 6, 1]
False
>>> todos_distintos(arreglo, largo) [0, 90, 1]
True
 */

#include <iostream>
using namespace std;

/*


bool todosDistintos(int arreglo[], int largo) {
    for(int i = 0; i < largo-1; i++) {
        for(int j = i + 1; j < largo; j++) {
            if(arreglo[i] == arreglo[j]) {
                return false;
            }
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

    if(todosDistintos(array, largo)) {
        cout << "Arreglo array, son todos distintos" << endl;
    } else {
        cout << "Arreglo array, no son todos distintos" << endl;
    }

    return 0;
}

*/