#include <iostream>
#include <vector>
#include <string>
using namespace std;

int calcularCuspide(vector<int> numeros){
    int cuspide;
    for (int i = 0; i < numeros.size(); i++)
    {
        if (numeros[i]>numeros[i+1])
        {
            int cuspide = numeros[i];
        }
        
    }

    return cuspide;
    
}

int main() {
vector<int> numeros;

numeros.push_back(2);
numeros.push_back(7);
numeros.push_back(3);

cout << calcularCuspide(numeros) << endl;


};