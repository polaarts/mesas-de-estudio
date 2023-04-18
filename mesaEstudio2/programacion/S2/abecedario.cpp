/*
Funcion que reciba una letra y confirme que esta en el abecedario
*/

// IN
#include <iostream>
#include <cstring>

using namespace std;

bool estaEnAbecedario(char letra) {
    char abecedario[54] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 27; i++) {
        if(letra == abecedario[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    if(estaEnAbecedario(letra)) {
        cout << "La letra " << letra << " esta en el abecedario" << endl;
    } else {
        cout << "La letra " << letra << " no esta en el abecedario" << endl;
    }
}
