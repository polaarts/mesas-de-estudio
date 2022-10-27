/*
 * Torneo de tenis
Escriba un programa para simular un campeonato de tenis.

Primero, debe pedir al usuario que ingrese los nombres de ocho tenistas. A continuación, debe pedir los resultados de los partidos juntando los jugadores de dos en dos. El ganador de cada partido avanza a la ronda siguiente.

El programa debe continuar preguntando ganadores de partidos hasta que quede un único jugador, que es el campeón del torneo.

El programa en ejecución debe verse así:

Jugador 1: Nadal
Jugador 2: Melzer
Jugador 3: Murray
Jugador 4: Soderling
Jugador 5: Djokovic
Jugador 6: Berdych
Jugador 7: Federer
Jugador 8: Ferrer

Ronda 1
a.Nadal - b.Melzer: a
a.Murray - b.Soderling: b
a.Djokovic - b.Berdych: a
a.Federer - b.Ferrer: a

Ronda 2
a.Nadal - b.Soderling: a
a.Djokovic - b.Federer: a

Ronda 3
a.Nadal - b.Djokovic: b

Campeon: Djokovic
 */

#include <iostream>
#include <cstring>

using namespace std;


//PAUTA
/*


int main() {
    char ganador;
    int cantidad;
    cout << "Ingrese cantidad de jugadores" << endl;
    cin >> cantidad;
    if(cantidad%4 != 0) {
        cout << "Ingrese una cantidad par" << endl;
        return 0;
    }
    string jugadores[cantidad];

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese jugador " << i + 1 << endl;
        cin >> jugadores[i];
    }
    int rondas = (cantidad / 2) - 1;

    for(int i = 0; i < rondas; i++) {
        int indiceGanador = 0;
        cout << "Ronda " << i+1 << endl;
        for(int j = 0; j < cantidad; j += 2) {
            cout << "a." << jugadores[j] << " - b." << jugadores[j+1] << endl;
            cin >> ganador;
            if(ganador == 'a') {
                jugadores[indiceGanador] = jugadores[j];
            } else {
                jugadores[indiceGanador] = jugadores[j+1];
            }
            indiceGanador++;
        }
        cantidad /= 2;
    }
    cout << "Campeon " << jugadores[0] << endl;

    return 0;
}


*/