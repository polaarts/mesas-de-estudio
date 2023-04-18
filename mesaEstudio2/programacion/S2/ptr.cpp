#include <iostream>
using namespace std;

void rawo(int *mus, int *bor){
    *mus = *mus - *bor;
}

int okna(int hum){
    int rr = hum * hum;
    return rr;
}

int main()
{
    int ger = 32;
    int vot = 2;

    for (int i = 3; i < 7; i++)
    {
        rawo(&ger, &vot);
        cout << ger << " " << vot << endl;
        vot = okna(vot);
    }
    
    return 0;
}