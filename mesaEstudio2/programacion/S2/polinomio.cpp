/*
Este es un polinomio de grado 5.

a5 x5 + a4 x4 + a3 x3 + a2 x2 + a1 x + a0

Para almacenarlo en un arreglo de tamaño 6 sólo basta almacenar los coeficientes ai en cada casilla.

 

Escriba las funciones:

int evaluaPolinomio (int poli[6], int x) // que retorna el valor del polinomio poli utilizando el valor x.

void derivaPolinomio (int poli[6], poliDerivado[5]) // que almacena en poliDerivado el derivado del polinomio poli.

void sumaPolinomios(int poliA[6], int poliB[6], int poliC[6]) // que suma los polinomios A y B y deja el resultado en el polinomio C.

*/

#include <iostream>
#include <cstring>

using namespace std;

int evaluaPolinomio (int poli[6], int x) {
    int resultado = 0;
    for(int i = 0; i < 6; i++) {
        resultado += poli[i] * pow(x, 5 - i);
    }
    return resultado;
}   

void derivaPolinomio (int poli[6], int poliDerivado[5]) {
    for(int i = 0; i < 5; i++) {
        poliDerivado[i] = poli[i] * (5 - i);
    }
}

void sumaPolinomios(int poliA[6], int poliB[6], int poliC[6]) {
    for(int i = 0; i < 6; i++) {
        poliC[i] = poliA[i] + poliB[i];
    }
}

int main() {
    int poli[6] = {1, 2, 3, 4, 5, 6};
    int poliDerivado[5];
    int poliA[6] = {1, 2, 3, 4, 5, 6};
    int poliB[6] = {1, 2, 3, 4, 5, 6};
    int poliC[6];
    cout << evaluaPolinomio(poli, 2) << endl;
    derivaPolinomio(poli, poliDerivado);
    for(int i = 0; i < 5; i++) {
        cout << poliDerivado[i] << endl;
    }
    sumaPolinomios(poliA, poliB, poliC);
    for(int i = 0; i < 6; i++) {
        cout << poliC[i] << endl;
    }
}

