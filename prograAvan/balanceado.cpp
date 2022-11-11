/*Programa la función bool Balanced(string S), 
la cual debe retornar true si el string S esta balanceado, false en caso contrario.

El string "S", solo puede contener los siguientes caracteres: "{,},(,),[,]" 
Un string sse dice balanceado si cada simbolo se cierra cnsigo mismo en su mismo nivel, por ejemplo:

[()] Balanceado*/

#include <iostream>

using namespace std;

bool Balanced(string S) {
    int cont = 0;
    for(int i = 0; i < S.length(); i++) {
        if(S[i] == '(') {
            cont++;
        } else if(S[i] == ')') {
            cont--;
        }
        if(cont < 0) {
            return false;
        }
    }
    if(cont == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string S;
    cout << "Ingrese string" << endl;
    cin >> S;
    if(Balanced(S)) {
        cout << "Balanceado" << endl;
    } else {
        cout << "No balanceado" << endl;
    }
    return 0;
}
